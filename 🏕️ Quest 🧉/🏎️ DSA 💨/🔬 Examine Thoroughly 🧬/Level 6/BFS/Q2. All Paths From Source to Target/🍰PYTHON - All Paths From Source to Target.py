#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L6.3 Q2

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n) 

from typing import List

class Solution:
      def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
            target = len(graph) - 1  # Destination is always the last node

            res = []     # Store all valid paths from source to target
            path = []    # Current path being constructed

            def dfs(node: int):
                  # Add current node to path
                  path.append(node)

                  # Base case: reached target node
                  if node == target:
                        # Create copy of current path and add to result
                        res.append(path[:])
                  else:
                        # Explore all neighbors recursively
                        for nei in graph[node]:
                              dfs(nei)

                  # Backtrack: remove current node after exploring all paths
                  path.pop()

            # Start DFS from source node 0
            dfs(0)
            return res
