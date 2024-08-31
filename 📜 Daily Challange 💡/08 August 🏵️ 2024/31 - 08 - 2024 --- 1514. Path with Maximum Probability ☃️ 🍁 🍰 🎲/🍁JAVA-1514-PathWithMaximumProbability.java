//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1514

//? ⌚ Time complexity ➺ O(n × E) ⚡ n = no. of nodes E = no. of edges 

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public double maxProbability(int n, int[][] edges, double[] succussProb, int start_node, int end_node) {
            //  An array to keep track of the maximum probability to reach each node from the start node
            double[] maxProb = new double[n];
            // Initialize the probability of reaching the start node to `1.0`
            maxProb[start_node] = 1.0;

            // The outer loop runs `n-1` times
            // principle similar to the Bellman-Ford algorithm for shortest paths 
            // but here it's used to maximize probabilities
            for (int i = 0; i < n - 1; i++) {
                  // A boolean flag to keep track of whether any update was made in the current iteration
                  boolean updated = false;

                  // For each edge we check probability
                  for (int j = 0; j < edges.length; j++) {
                        int u = edges[j][0];
                        int v = edges[j][1];
                        double prob = succussProb[j];

                        // if traveling through the edge increases 
                        // the probability of reaching the other end of the edge
                        if (maxProb[u] * prob > maxProb[v]) {
                              // it updates the probability
                              maxProb[v] = maxProb[u] * prob;
                              // sets the `updated` flag to `true`
                              updated = true;
                        }

                        // if traveling through the edge increases 
                        // the probability of reaching the other end of the edge
                        if (maxProb[v] * prob > maxProb[u]) {
                              // it updates the probability
                              maxProb[u] = maxProb[v] * prob;
                              // sets the `updated` flag to `true`
                              updated = true;
                        }
                  }

                  // If no updates were made in an iteration
                  if (!updated)
                        // (no probability can be maximized further) -> break the loop
                        break;
            }

            // Returns the maximum probability of reaching the `end_node` from the `start_node`
            return maxProb[end_node];
      }
}