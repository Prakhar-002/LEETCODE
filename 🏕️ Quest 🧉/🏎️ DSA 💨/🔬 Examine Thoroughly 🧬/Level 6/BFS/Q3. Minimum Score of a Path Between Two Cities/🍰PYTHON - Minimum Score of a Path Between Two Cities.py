#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L6.3 Q3

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

#? 🧺 Space complexity ➺ O(n)

from collections import defaultdict
from typing import List

class Solution:
      def minScore(self, n: int, roads: List[List[int]]) -> int:
            # Build adjacency list: for each city, store (neighbor, distance)
            adj = defaultdict(list)
            for src, dest, dist in roads:
                  adj[src].append((dest, dist))
                  adj[dest].append((src, dist))   # Undirected roads

            res = float("inf")   # Global minimum edge weight in the component of node 1
            visited = set()      # Track visited cities to avoid revisiting

            def dfs(node: int) -> None:
                  nonlocal res    # We want to update the outer 'res'

                  # If this node is already visited, skip it
                  if node in visited:
                        return

                  # Mark node as visited
                  visited.add(node)

                  # Traverse all neighbors
                  for nei, dist in adj[node]:
                        # Update global minimum road distance
                        res = min(res, dist)
                        # Continue DFS from neighbor
                        dfs(nei)

            # Start DFS from city 1 (problem guarantees connectivity to n)
            dfs(1)

            return res
