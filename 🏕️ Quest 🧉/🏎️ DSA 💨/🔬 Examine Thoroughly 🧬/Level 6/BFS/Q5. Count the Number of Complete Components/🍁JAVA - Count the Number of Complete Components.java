//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.3 Q5

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. od nodes

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int countCompleteComponents(int n, int[][] edges) {
            // Build adjacency list for undirected graph
            List<List<Integer>> adj = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                  adj.add(new ArrayList<>());
            }

            for (int[] e : edges) {
                  int u = e[0], v = e[1];
                  adj.get(u).add(v);
                  adj.get(v).add(u);
            }

            boolean[] visited = new boolean[n];
            int completeCount = 0;

            // DFS to collect all nodes in a connected component starting from 'node'
            for (int v = 0; v < n; v++) {
                  if (!visited[v]) {
                        List<Integer> component = new ArrayList<>();
                        dfs(v, adj, visited, component);

                        int size = component.size();
                        boolean isComplete = true;

                        // In a complete component, every node has degree size-1
                        for (int node : component) {
                              if (adj.get(node).size() != size - 1) {
                                    isComplete = false;
                                    break;
                              }
                        }

                        if (isComplete) {
                              completeCount++;
                        }
                  }
            }

            return completeCount;
      }

      // Helper DFS to gather all nodes in the current component
      private void dfs(int node, List<List<Integer>> adj,
                  boolean[] visited, List<Integer> component) {
            if (visited[node]) {
                  return;
            }

            visited[node] = true;
            component.add(node);

            for (int nei : adj.get(node)) {
                  if (!visited[nei]) {
                        dfs(nei, adj, visited, component);
                  }
            }
      }
}
