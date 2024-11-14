//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2064

//? ⌚ Time complexity ➺ O(q * log(max(quantities))) 👉🏻  n = len(quantities)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      // check if we can distribute items with a max of 'x' items per store
      private boolean canDistribute(int x, int n, int[] quantities) {
            int stores = 0;
            for (int q : quantities) {
                  // Calculate required stores for each item quantity with max 'x' per store
                  stores += Math.ceil((double) q / x);
            }

            return stores <= n;
      }

      public int minimizedMaximum(int n, int[] quantities) {
            // Set binary search boundaries
            int l = 1, r = Arrays.stream(quantities).max().getAsInt();
            int maxX = 0;

            while (l <= r) {
                  int x = l + (r - l) / 2;

                  // If distribution is possible with 'x', try smaller values
                  if (canDistribute(x, n, quantities)) {
                        maxX = x;
                        r = x - 1;
                  } else {
                        // Otherwise, try larger values
                        l = x + 1;
                  }
            }

            return maxX;
      }
}
