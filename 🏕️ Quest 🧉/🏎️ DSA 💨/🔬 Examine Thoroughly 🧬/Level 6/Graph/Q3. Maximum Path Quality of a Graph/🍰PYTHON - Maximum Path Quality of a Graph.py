#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L6.2 Q3

#? ⌚ Time complexity ➺ O(E * V) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(E * V) 

class Solution:
      def maximalPathQuality(self, val, edges, maxTime):
            n = len(val)

            # Build adjacency list: adj[u] = [(v, t), ...]
            adj = [[] for _ in range(n)]
            for u, v, t in edges:
                  adj[u].append((v, t))      # u -> (v, time)
                  adj[v].append((u, t))      # v -> (u, time) - undirected

            ans = 0  # Maximum path value found

            def dfs(src, currTime, currValue, value):
                  nonlocal ans
                  
                  # Prune invalid paths that exceed time limit
                  if currTime > maxTime:
                        return

                  # Accumulate value of current node (only once per visit)
                  currValue += value[src]

                  # Update maximum when returning to start node (node 0)
                  if src == 0:
                        ans = max(ans, currValue)

                  # Backup node value to prevent double-counting in subtree
                  temp = value[src]
                  value[src] = 0             # Mark as visited

                  # Recurse on all unvisited neighbors
                  for nei, cost in adj[src]:
                        dfs(nei, currTime + cost, currValue, value)

                  # Backtrack: restore node value for other paths
                  value[src] = temp

            # Initial DFS call from node 0 with value copy
            dfs(0, 0, 0, val[:])       # Pass copy to avoid mutating original

            return ans
