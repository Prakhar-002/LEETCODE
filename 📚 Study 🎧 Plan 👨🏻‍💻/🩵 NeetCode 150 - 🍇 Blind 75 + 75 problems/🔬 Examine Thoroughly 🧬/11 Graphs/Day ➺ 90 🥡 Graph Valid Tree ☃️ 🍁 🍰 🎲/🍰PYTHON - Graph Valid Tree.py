#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 261

#? ⌚ Time complexity ➺ O(n * m) 

#? 🧺 Space complexity ➺ O(m * n)

from typing import List

class Solution:
      def validTree(self, n: int, edges: List[List[int]]) -> bool:
            # ----------------------------------------------------------
            # Condition 1: A valid tree must have exactly n - 1 edges
            # ----------------------------------------------------------
            if len(edges) != n - 1:
                  return False 

            # Create an adjacency list to represent the graph
            adj = [[] for _ in range(n)]
            for u, v in edges:
                  adj[u].append(v)
                  adj[v].append(u)

            visit = set() # Tracks visited nodes

            # ----------------------------------------------------------
            # DFS helper to check for cycles
            # `par` (parent) is used to avoid going back immediately
            # ----------------------------------------------------------
            def dfs(node, par):
                  # If we visit a node already in our set, we found a cycle
                  if node in visit:
                        return False
                  visit.add(node)

                  for nei in adj[node]:
                        # Skip the neighbor if it's the parent node
                        if nei == par:
                              continue
                        # If a recursive call finds a cycle, propagate False
                        if not dfs(nei, node):
                              return False
                  return True

            # ----------------------------------------------------------
            # Condition 2: Graph must be fully connected and have no cycles
            # ----------------------------------------------------------
            # `dfs(0, -1)` checks for cycles.
            # `len(visit) == n` checks if all nodes are connected.
            # ----------------------------------------------------------
            return dfs(0, -1) and len(visit) == n
