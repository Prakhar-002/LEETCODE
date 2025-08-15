#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 323

#? ⌚ Time complexity ➺ O(V + E)

#? 🧺 Space complexity ➺ O(V + E)

from typing import List

class Solution:
      def countComponents(self, n: int, edges: List[List[int]]) -> int:
            # Create an adjacency list to represent the graph
            adj = [[] for _ in range(n)]
            # Use a boolean array to track visited nodes
            visit = [False] * n

            # Build the adjacency list from the edge list
            for u, v in edges:
                  adj[u].append(v)
                  adj[v].append(u)

            # ----------------------------------------------------------
            # DFS helper to traverse and mark all nodes in a component
            # ----------------------------------------------------------
            def dfs(node):
                  # Explore all neighbors of the current node
                  for nei in adj[node]:
                        # If a neighbor hasn't been visited yet
                        if not visit[nei]:
                              # Mark it as visited
                              visit[nei] = True
                              # Recursively call DFS on the neighbor
                              dfs(nei)

            res = 0  # Initialize component count

            # ----------------------------------------------------------
            # Iterate through each node to find unvisited components
            # ----------------------------------------------------------
            for node in range(n):
                  # If the node has not been visited, it's a new component
                  if not visit[node]:
                        # Mark the starting node of the new component
                        visit[node] = True
                        # Start DFS to visit all nodes in this component
                        dfs(node)
                        # Increment the component count
                        res += 1

            return res
