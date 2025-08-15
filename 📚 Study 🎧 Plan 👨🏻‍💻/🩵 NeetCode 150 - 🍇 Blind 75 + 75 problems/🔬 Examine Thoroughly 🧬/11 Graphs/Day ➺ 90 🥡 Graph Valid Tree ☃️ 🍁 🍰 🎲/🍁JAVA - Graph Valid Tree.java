//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 261

//? ⌚ Time complexity ➺ O(E + V)

//? 🧺 Space complexity ➺ O(E + V)

import java.util.*;

class Solution {
      public boolean validTree(int n, int[][] edges) {
            // ----------------------------------------------------------
            // Condition 1: A valid tree must have exactly n - 1 edges
            // ----------------------------------------------------------
            if (edges.length != n - 1) {
                  return false;
            }

            // Create an adjacency list
            List<List<Integer>> adj = new ArrayList<>();
            for (int i = 0; i < n; i++)
                  adj.add(new ArrayList<>());
            for (int[] edge : edges) {
                  adj.get(edge[0]).add(edge[1]);
                  adj.get(edge[1]).add(edge[0]);
            }

            Set<Integer> visit = new HashSet<>();

            // ----------------------------------------------------------
            // Condition 2: Graph must be fully connected and have no cycles
            // ----------------------------------------------------------
            return dfs(0, -1, adj, visit) && visit.size() == n;
      }

      // ----------------------------------------------------------
      // DFS helper to check for cycles
      // ----------------------------------------------------------
      private boolean dfs(int node, int par, List<List<Integer>> adj, Set<Integer> visit) {
            // If we visit a node already in our set, we found a cycle
            if (visit.contains(node)) {
                  return false;
            }
            visit.add(node);

            for (int nei : adj.get(node)) {
                  // Skip the neighbor if it's the parent node
                  if (nei == par) {
                        continue;
                  }
                  // If a recursive call finds a cycle, propagate False
                  if (!dfs(nei, node, adj, visit)) {
                        return false;
                  }
            }
            return true; 
      }
}
