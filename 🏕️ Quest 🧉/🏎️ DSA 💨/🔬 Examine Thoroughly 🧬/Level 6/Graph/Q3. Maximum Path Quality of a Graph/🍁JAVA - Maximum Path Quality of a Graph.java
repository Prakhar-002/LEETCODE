//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.2 Q3

//? ⌚ Time complexity ➺ O(E * V) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(E * V)

import java.util.*;

public class Solution {
      public int maximalPathQuality(int[] val, int[][] edges, int maxTime) {
            int n = val.length;

            // Build adjacency list: adj[u] = List of (v, t) pairs for neighbors
            List<int[]>[] adj = new List[n];
            for (int i = 0; i < n; i++) {
                  adj[i] = new ArrayList<>();
            }

            // Construct undirected graph from edges
            for (int[] edge : edges) {
                  int u = edge[0], v = edge[1], t = edge[2];
                  adj[u].add(new int[] { v, t }); // u -> (v, time)
                  adj[v].add(new int[] { u, t }); // v -> (u, time) - undirected
            }

            int[] ansHolder = new int[1]; // Mutable wrapper for max value

            // Separate DFS helper method
            dfs(0, 0, 0, val.clone(), adj, maxTime, ansHolder);

            return ansHolder[0];
      }

      // Separate DFS method: explores from src node with current time/value
      // constraints
      private void dfs(int src, int currTime, int currValue, int[] value,
                  List<int[]>[] adj, int maxTime, int[] ansHolder) {
            // Prune invalid paths that exceed time limit
            if (currTime > maxTime) {
                  return;
            }

            // Accumulate value of current node (only once due to zeroing)
            currValue += value[src];

            // Update global maximum when returning to node 0 (start)
            if (src == 0) {
                  ansHolder[0] = Math.max(ansHolder[0], currValue);
            }

            // Backup node value to prevent double-counting in subtree
            int temp = value[src];
            value[src] = 0; // Mark as visited

            // Recurse on all unvisited neighbors
            for (int[] neighbor : adj[src]) {
                  int nei = neighbor[0];
                  int cost = neighbor[1];
                  dfs(nei, currTime + cost, currValue, value, adj, maxTime, ansHolder);
            }

            // Backtrack: restore node value for other paths
            value[src] = temp;
      }
}
