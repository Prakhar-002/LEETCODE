//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3202

//? ⌚ Time complexity ➺ O(k^2 + n * k) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(k ^ 2)

class Solution {
      public int maximumLength(int[] nums, int k) {
            // Create a 2D array dp[k][k], initialized to 0
            int[][] dp = new int[k][k];

            // Variable to hold the maximum length of the alternating pattern
            int res = 0;

            // Loop through each number in the array
            for (int num : nums) {
                  num %= k; // Convert number to its modulo k value

                  // Try all possible previous modulo values
                  for (int prev = 0; prev < k; prev++) {
                        // Transition: extend the alternating subsequence
                        dp[prev][num] = dp[num][prev] + 1;

                        // Update the result if current dp value is greater
                        res = Math.max(res, dp[prev][num]);
                  }
            }

            // Return the maximum subsequence length found
            return res;
      }
}
