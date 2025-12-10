//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.3 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      // DFS helper to check if there is a path from 'node' to 'destination'
      private boolean dfs(int node, int destination, List<List<Integer>> adj, boolean[] visited) {
            // If we reached the destination, path exists
            if (node == destination) {
                  return true;
            }

            // Mark current node as visited
            visited[node] = true;

            // Explore all neighbors
            for (int nei : adj.get(node)) {
                  if (!visited[nei]) {
                        if (dfs(nei, destination, adj, visited)) {
                              return true;
                        }
                  }
            }

            // No path to destination found from this branch
            return false;
      }

      public boolean validPath(int n, int[][] edges, int source, int destination) {
            // Build adjacency list for undirected graph
            List<List<Integer>> adj = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                  adj.add(new ArrayList<>());
            }

            // Populate adjacency list
            for (int[] edge : edges) {
                  int src = edge[0];
                  int dest = edge[1];
                  // Undirected: add both directions
                  adj.get(src).add(dest);
                  adj.get(dest).add(src);
            }

            // Visited array to avoid revisiting nodes
            boolean[] visited = new boolean[n];

            // Start DFS from source
            return dfs(source, destination, adj, visited);
      }
}
