#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L6.3 Q5

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. od nodes

#? 🧺 Space complexity ➺ O(n)

from typing import List
from collections import defaultdict

class Solution:
      def countCompleteComponents(self, n: int, edges: List[List[int]]) -> int:

            # DFS to collect all nodes in the connected component of 'node'
            def dfs(node: int, res: List[int]) -> List[int]:
                  # If already visited, do nothing
                  if node in visit:
                        return res

                  # Mark node as visited and add to current component
                  visit.add(node)
                  res.append(node)

                  # Visit all neighbors
                  for nei in adj[node]:
                        dfs(nei, res)

                  return res

            res = 0                      # Number of complete components
            visit = set()                # Global visited set for nodes
            adj = defaultdict(list)      # Adjacency list for the graph

            # Build undirected graph
            for src, dest in edges:
                  adj[src].append(dest)
                  adj[dest].append(src)

            # Iterate through all nodes to find each connected component
            for v in range(n):
                  if v not in visit:
                        # Get all nodes in this component via DFS
                        component = dfs(v, [])

                        # A component is complete if every node's degree = (size - 1)
                        size = len(component)
                        if all(len(adj[v2]) == size - 1 for v2 in component):
                              res += 1

            return res
