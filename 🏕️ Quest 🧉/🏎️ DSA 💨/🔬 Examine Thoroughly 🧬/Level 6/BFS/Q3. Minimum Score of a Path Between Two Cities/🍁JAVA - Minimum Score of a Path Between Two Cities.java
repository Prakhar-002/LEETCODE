//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.3 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int minScore(int n, int[][] roads) {
            // Adjacency list: for each city, store pairs (neighbor, distance)
            List<List<int[]>> adj = new ArrayList<>();
            for (int i = 0; i <= n; i++) {
                  adj.add(new ArrayList<>());
            }

            // Build undirected graph
            for (int[] road : roads) {
                  int src = road[0], dest = road[1], dist = road[2];
                  adj.get(src).add(new int[] { dest, dist });
                  adj.get(dest).add(new int[] { src, dist });
            }

            boolean[] visited = new boolean[n + 1];
            int[] res = { Integer.MAX_VALUE }; // Use array to mutate inside DFS

            // DFS to traverse all cities reachable from 1
            dfs(1, adj, visited, res);

            return res[0];
      }

      // DFS helper: update global minimum edge distance in component of node
      private void dfs(int node, List<List<int[]>> adj, boolean[] visited, int[] res) {
            if (visited[node]) {
                  return; // Already processed this node
            }

            visited[node] = true;

            for (int[] edge : adj.get(node)) {
                  int nei = edge[0];
                  int dist = edge[1];

                  // Update minimum distance seen so far
                  res[0] = Math.min(res[0], dist);

                  // Continue DFS from neighbor
                  dfs(nei, adj, visited, res);
            }
      }
}
