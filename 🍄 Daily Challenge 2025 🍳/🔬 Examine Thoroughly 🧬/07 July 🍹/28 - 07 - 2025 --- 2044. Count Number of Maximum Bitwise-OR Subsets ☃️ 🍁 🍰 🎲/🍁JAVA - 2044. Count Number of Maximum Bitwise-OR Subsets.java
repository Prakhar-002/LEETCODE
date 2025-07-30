//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2044

//? ⌚ Time complexity ➺ O(n * Max) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(2 ^ 17)

class Solution {
      public int countMaxOrSubsets(int[] nums) {
            // Initialize the max OR value
            int maxOr = 0;

            // Create a DP array to count subsets for each OR value
            // Size is 2^17 since max element in nums ≤ 10^5 (fits in 17 bits)
            int[] dp = new int[1 << 17];

            // Empty subset has OR value 0
            dp[0] = 1;

            // Traverse each number in the input array
            for (int num : nums) {
                  // Traverse from current maxOr to 0 (reverse to prevent overwrite)
                  for (int i = maxOr; i >= 0; i--) {
                        // If there are subsets with OR value i
                        if (dp[i] > 0) {
                              // Add those subsets to the new OR value formed by including num
                              dp[i | num] += dp[i];
                        }
                  }

                  // Update the overall max OR value
                  maxOr |= num;
            }

            // Return the number of subsets with OR value equal to maxOr
            return dp[maxOr];
      }
}
