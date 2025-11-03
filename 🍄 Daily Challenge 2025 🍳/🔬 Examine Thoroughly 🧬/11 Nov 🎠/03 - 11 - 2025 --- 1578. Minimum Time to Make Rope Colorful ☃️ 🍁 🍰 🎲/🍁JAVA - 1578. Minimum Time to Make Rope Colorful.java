//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1578

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(colors)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int minCost(String colors, int[] neededTime) {
            int res = 0; // Stores the total minimum removal time
            int l = 0; // Left pointer to the start of the current color segment

            // Iterate through colors with right pointer
            for (int r = 1; r < colors.length(); r++) {
                  if (colors.charAt(r) == colors.charAt(l)) {
                        // Same color found, remove the one with smaller needed time
                        if (neededTime[l] < neededTime[r]) {
                              res += neededTime[l]; // Remove left color
                              l = r; // Move left pointer to current (larger cost)
                        } else {
                              res += neededTime[r]; // Remove right color
                              // Left pointer stays to potentially compare with next duplicates
                        }
                  } else {
                        // Different color found, reset left pointer to current
                        l = r;
                  }
            }
            return res;
      }
}
