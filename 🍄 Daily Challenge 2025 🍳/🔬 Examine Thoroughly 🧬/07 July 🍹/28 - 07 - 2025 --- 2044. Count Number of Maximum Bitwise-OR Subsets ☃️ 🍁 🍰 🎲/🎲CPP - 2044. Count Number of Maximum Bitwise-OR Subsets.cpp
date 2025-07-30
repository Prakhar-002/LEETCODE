//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2044

//? ⌚ Time complexity ➺ O(n * Max) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(2 ^ 17)

class Solution {
public:
      int countMaxOrSubsets(vector<int>& nums) {
            // Initialize max OR value
            int maxOr = 0;

            // Create a DP array to hold counts of OR values
            // Size is 2^17 for all possible OR values within 17 bits
            vector<int> dp(1 << 17, 0);

            // Base case: one empty subset with OR value 0
            dp[0] = 1;

            // Iterate over each number in nums
            for (int num : nums) {
                  // Traverse in reverse to avoid using updated values too early
                  for (int i = maxOr; i >= 0; --i) {
                        if (dp[i] > 0) {
                              // Add dp[i] to new OR value formed with current num
                              dp[i | num] += dp[i];
                        }
                  }
                  // Update max OR value
                  maxOr |= num;
            }

            // Return the count of subsets with OR equal to maxOr
            return dp[maxOr];
      }
};
