#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L6.3 Q1

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

#? 🧺 Space complexity ➺ O(n)

from collections import defaultdict
from typing import List

class Solution:
      def validPath(self, n: int, edges: List[List[int]], source: int, destination: int) -> bool:
            # Build adjacency list for an undirected graph.
            # adj[u] = list of all vertices v such that there is an edge u <-> v.
            adj = defaultdict(list)

            # Populate adjacency list from edge list.
            for src, dest in edges:
                  # Since the graph is undirected, add both directions.
                  adj[src].append(dest)
                  adj[dest].append(src)

            # Set to keep track of visited nodes during DFS
            visited = set()

            # Depth-First Search to check reachability from 'source' to 'destination'
            def dfs(node: int) -> bool:
                  # If we reach the destination node, a valid path exists.
                  if node == destination:
                        return True

                  # Mark current node as visited to avoid revisiting and infinite loops.
                  visited.add(node)

                  # Explore all neighbors of the current node.
                  for nei in adj[node]:
                        # Only visit unvisited neighbors.
                        if nei not in visited:
                              # If any DFS from neighbor reaches destination, propagate True.
                              if dfs(nei):
                                    return True

                  # If none of the neighbors lead to destination, return False.
                  return False

            # Start DFS from the source node.
            return dfs(source)