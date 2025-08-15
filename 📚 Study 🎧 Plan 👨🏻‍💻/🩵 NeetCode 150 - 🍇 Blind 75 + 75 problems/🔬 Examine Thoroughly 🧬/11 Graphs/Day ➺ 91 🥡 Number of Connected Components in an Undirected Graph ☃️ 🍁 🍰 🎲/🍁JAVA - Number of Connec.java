//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 323

//? ⌚ Time complexity ➺ O(V + E)

//? 🧺 Space complexity ➺ O(V + E)

import java.util.*;

class Solution {
      public int countComponents(int n, int[][] edges) {
            // Create an adjacency list to represent the graph
            List<List<Integer>> adj = new ArrayList<>();
            for (int i = 0; i < n; i++)
                  adj.add(new ArrayList<>());
            // Use a boolean array to track visited nodes
            boolean[] visit = new boolean[n];

            // Build the adjacency list from the edge list
            for (int[] edge : edges) {
                  adj.get(edge[0]).add(edge[1]);
                  adj.get(edge[1]).add(edge[0]);
            }

            int res = 0; // Initialize component count

            // ----------------------------------------------------------
            // Iterate through each node to find unvisited components
            // ----------------------------------------------------------
            for (int node = 0; node < n; node++) {
                  // If the node has not been visited, it's a new component
                  if (!visit[node]) {
                        // Mark the starting node of the new component
                        visit[node] = true;
                        // Start DFS to visit all nodes in this component
                        dfs(node, adj, visit);
                        // Increment the component count
                        res++;
                  }
            }
            return res;
      }

      // ----------------------------------------------------------
      // DFS helper to traverse and mark all nodes in a component
      // ----------------------------------------------------------
      private void dfs(int node, List<List<Integer>> adj, boolean[] visit) {
            // Explore all neighbors of the current node
            for (int nei : adj.get(node)) {
                  // If a neighbor hasn't been visited yet
                  if (!visit[nei]) {
                        // Mark it as visited
                        visit[nei] = true;
                        // Recursively call DFS on the neighbor
                        dfs(nei, adj, visit);
                  }
            }
      }
}
