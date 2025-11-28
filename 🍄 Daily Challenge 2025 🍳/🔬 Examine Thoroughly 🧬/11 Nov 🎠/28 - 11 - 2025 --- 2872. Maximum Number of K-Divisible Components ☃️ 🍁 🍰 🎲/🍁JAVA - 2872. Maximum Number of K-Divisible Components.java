//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2872

//? ⌚ Time complexity ➺ O(V + E)  👉🏻  V = vertex

//? 🧺 Space complexity ➺ O(V + E) 👉🏻  E = edges

import java.util.*;

class Solution {
      public int maxKDivisibleComponents(int n, int[][] edges, int[] nodeValues, int k) {
            // Create an adjacency list to represent the graph
            Map<Integer, List<Integer>> graph = new HashMap<>();

            for (int i = 0; i < n; i++) {
                  graph.put(i, new ArrayList<>());
            }

            for (int[] edge : edges) {
                  graph.get(edge[0]).add(edge[1]);
                  graph.get(edge[1]).add(edge[0]);
            }

            // Initialize the count of k-divisible components
            int[] kDivisibleCount = new int[1];

            // Helper function to perform DFS
            dfs(0, -1, graph, nodeValues, k, kDivisibleCount);

            return kDivisibleCount[0];
      }

      private long dfs(int currentNode, int parentNode, Map<Integer, List<Integer>> graph, int[] nodeValues, int k,
                  int[] kDivisibleCount) {
            // Start with the value of the current node
            long subtreeSum = nodeValues[currentNode]; // Use long to prevent overflow

            // Traverse all children (connected nodes)
            for (int neighbor : graph.get(currentNode)) {
                  // Avoid revisiting the parent node
                  if (neighbor != parentNode) {
                        // Add the contribution of the subtree rooted at this child
                        subtreeSum += dfs(neighbor, currentNode, graph, nodeValues, k, kDivisibleCount);
                  }
            }

            // Check if the total sum of this subtree is divisible by k
            if (subtreeSum % k == 0) {
                  kDivisibleCount[0]++;
            }

            return subtreeSum;
      }
}