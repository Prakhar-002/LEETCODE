//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 787

//? ⌚ Time complexity ➺ O(n + (m * k))

//? 🧺 Space complexity ➺ O(n)

import java.util.Arrays;
import java.util.List; // Assuming input might be List<List<Integer>>, but usually it's int[][]

class Solution {
      public int findCheapestPrice(int n, int[][] flights, int src, int dst, int k) {
            // ----------------------------------------------------------
            // Step 1: Initialization (Bellman-Ford)
            // ----------------------------------------------------------
            // This problem is equivalent to finding the shortest path in a weighted graph
            // with a constraint on the number of edges (at most k+1 edges).
            // The Bellman-Ford algorithm is well-suited for this.

            // `prices[i]` will store the minimum cost to reach city `i` from `src`.
            // Initialize all prices to infinity, as we haven't found any paths yet.
            // Using Integer.MAX_VALUE to represent infinity.
            int[] prices = new int[n];
            Arrays.fill(prices, Integer.MAX_VALUE);
            // The cost to reach the source city `src` from itself is 0.
            prices[src] = 0;

            // ----------------------------------------------------------
            // Step 2: Relax Edges Iteratively
            // ----------------------------------------------------------
            // The Bellman-Ford algorithm works by iteratively relaxing edges.
            // We run the main loop `k + 1` times. After `i` iterations, `prices[j]` will hold
            // the cost of the shortest path from `src` to `j` using at most `i` edges.
            for (int i = 0; i <= k; i++) {
                  // Create a temporary copy of the prices from the previous iteration.
                  // This is crucial because each iteration must only use path costs calculated
                  // in the *previous* step to ensure the edge count constraint is met.
                  int[] tmpPrices = Arrays.copyOf(prices, n);

                  // Relax all edges by checking every flight.
                  for (int[] flight : flights) { // flight = [s, d, p]
                        int s = flight[0]; // source
                        int d = flight[1]; // destination
                        int p = flight[2]; // price

                        // We can only consider a flight from city `s` if `s` is already reachable
                        // (i.e., its price is not infinity).
                        if (prices[s] == Integer.MAX_VALUE) {
                              continue;
                        }

                        // Check if the path through `s` to `d` is cheaper than any path found so far.
                        // The cost of the new path is the cost to reach `s` (prices[s]) plus the
                        // cost of the flight from `s` to `d` (p).
                        // We update `tmpPrices[d]` to avoid using results from the current iteration.
                        if (prices[s] + p < tmpPrices[d]) {
                              tmpPrices[d] = prices[s] + p;
                        }
                  }
                  // After checking all flights, update the main `prices` array for the next iteration.
                  prices = tmpPrices;
            }

            // ----------------------------------------------------------
            // Step 3: Return the Result
            // ----------------------------------------------------------
            // After `k + 1` iterations, `prices[dst]` holds the minimum cost to reach the
            // destination with at most `k` stops (k+1 edges).
            // If the price is still infinity, the destination is unreachable within the given constraints.
            return prices[dst] == Integer.MAX_VALUE ? -1 : prices[dst];
      }
}
