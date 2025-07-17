//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3202

//? ⌚ Time complexity ➺ O(k^2 + n * k) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(k ^ 2)

class Solution {
public:
      int maximumLength(vector<int>& nums, int k) {
            // Create a 2D vector for dp with size k x k initialized to 0
            vector<vector<int>> dp(k, vector<int>(k, 0));

            // Variable to store the result
            int res = 0;

            // Iterate through the nums array
            for (int num : nums) {
                  num %= k; // Get the modulo k value

                  // Try each possible previous modulo value
                  for (int prev = 0; prev < k; ++prev) {
                        // Update dp by extending the alternating pattern
                        dp[prev][num] = dp[num][prev] + 1;

                        // Update maximum result if this is the longest so far
                        res = max(res, dp[prev][num]);
                  }
            }

            // Return the maximum length found
            return res;
      }
};
