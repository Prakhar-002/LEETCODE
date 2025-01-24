//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 802

//? ⌚ Time complexity ➺ O(V + E) 👉🏻  V = Vertex Of Graph

//? 🧺 Space complexity ➺ O(V)      ->  E = Edges Of Graph

import java.util.*;

public class Solution {
      // DFS function to check if a node is safe
      private boolean dfs(int node, int[][] graph, Map<Integer, Boolean> safe) {
            // If the result for this node is already computed, return it
            if (safe.containsKey(node)) {
                  return safe.get(node);
            }

            // Assume the current node is not safe
            safe.put(node, false);

            // Explore all neighbors of the current node
            for (int neighbor : graph[node]) {
                  if (!dfs(neighbor, graph, safe)) {
                        return false;
                  }
            }

            // If all neighbors are safe, the current node is safe
            safe.put(node, true);
            return true;
      }

      public List<Integer> eventualSafeNodes(int[][] graph) {
            int n = graph.length;
            Map<Integer, Boolean> safe = new HashMap<>();
            List<Integer> safeNodes = new ArrayList<>();

            // Main logic
            for (int i = 0; i < n; i++) {
                  if (dfs(i, graph, safe)) {
                        safeNodes.add(i);
                  }
            }

            return safeNodes;
      }
}
