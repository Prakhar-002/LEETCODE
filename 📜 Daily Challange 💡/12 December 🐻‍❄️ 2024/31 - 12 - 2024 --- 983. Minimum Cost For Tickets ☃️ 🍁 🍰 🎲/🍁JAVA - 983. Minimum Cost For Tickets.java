//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 983

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(days)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int mincostTickets(int[] days, int[] costs) {
            // Create a map to store the minimum cost for a given day index.
            // dp.get(days.length) is initialized to 0 because no cost is needed when no days are left.
            Map<Integer, Integer> dp = new HashMap<>();
            dp.put(days.length, 0);

            // Define a helper function to calculate the minimum cost.
            return dfs(0, days, costs, dp);
      }

      private int dfs(int i, int[] days, int[] costs, Map<Integer, Integer> dp) {
            // If the minimum cost for index `i` is already calculated, return it.
            if (dp.containsKey(i)) {
                  return dp.get(i);
            }

            // Initialize the minimum cost for this index to infinity.
            int minCost = Integer.MAX_VALUE;

            // Iterate through the ticket options.
            for (int k = 0; k < costs.length; k++) {
                  int cost = costs[k];
                  int duration = (k == 0) ? 1 : (k == 1) ? 7 : 30; // Duration based on ticket type.

                  // Move `j` to the first day outside the current ticket's duration.
                  int j = i;
                  while (j < days.length && days[j] < days[i] + duration) {
                        j++;
                  }

                  // Calculate the minimum cost considering the current ticket.
                  minCost = Math.min(minCost, cost + dfs(j, days, costs, dp));
            }

            // Store the result in the map and return it.
            dp.put(i, minCost);
            return minCost;
      }
}
