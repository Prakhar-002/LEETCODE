//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1640

//? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(piles)

//? 🧺 Space complexity ➺ O(n ^ n)

import java.util.*;

class Solution {
      private Map<String, Integer> dp;

      public int stoneGameII(int[] piles) {
            dp = new HashMap<>();
            return getStone(true, 0, 1, piles);
      }

      private int getStone(boolean alice, int idx, int M, int[] piles) {
            // Base case: if we've reached the end of the piles, no more stones can be taken
            if (idx == piles.length) {
                  return 0;
            }

            // Check if the result for this state is already computed
            String key = alice + "," + idx + "," + M;
            if (dp.containsKey(key)) {
                  return dp.get(key);
            }

            // Initialize the result based on who's turn it is
            int aliceStone = alice ? 0 : Integer.MAX_VALUE;

            int totalStone = 0; // Total number of stones taken in this turn

            // Consider taking x piles where x ranges from 1 to 2 * M
            for (int x = 1; x <= 2 * M && idx + x <= piles.length; x++) {
                  // Add stones from the current pile to totalStone
                  totalStone += piles[idx + x - 1];

                  // Recursively calculate the score for the next state
                  if (alice) {
                        aliceStone = Math.max(aliceStone,
                                    totalStone + getStone(!alice, idx + x, Math.max(M, x), piles));
                  } else {
                        aliceStone = Math.min(aliceStone, getStone(!alice, idx + x, Math.max(M, x), piles));
                  }
            }

            // Store the result in the memoization map
            dp.put(key, aliceStone);

            return aliceStone;
      }
}
