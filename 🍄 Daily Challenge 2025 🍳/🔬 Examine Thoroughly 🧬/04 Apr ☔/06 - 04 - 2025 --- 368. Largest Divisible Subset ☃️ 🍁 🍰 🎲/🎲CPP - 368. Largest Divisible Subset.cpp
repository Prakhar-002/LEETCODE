//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 368

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      vector<int> largestDivisibleSubset(vector<int>& nums) {
            sort(nums.begin(), nums.end()); // Sort array to ensure divisibility order

            int n = nums.size(); // Length of input array

            vector<int> dp(n, 1);       // dp[i] stores length of subset ending at nums[i]
            vector<int> parent(n, -1);  // parent[i] stores previous index in chain

            int maxLen = 0;             // Length of longest subset
            int maxIndex = -1;          // Ending index of longest subset

            for (int i = 0; i < n; ++i) {
                  for (int j = 0; j < i; ++j) {
                        // Check if nums[i] divisible by nums[j]
                        if (nums[i] % nums[j] == 0 && dp[j] + 1 > dp[i]) {
                              dp[i] = dp[j] + 1;     // Update dp for longer subset
                              parent[i] = j;         // Record parent index
                        }
                  }
                  // Track longest subset so far
                  if (dp[i] > maxLen) {
                        maxLen = dp[i];
                        maxIndex = i;
                  }
            }

            vector<int> resSet;  // Result subset

            // Backtrack from maxIndex using parent array
            while (maxIndex != -1) {
                  resSet.push_back(nums[maxIndex]); // Add current number
                  maxIndex = parent[maxIndex];   // Move to parent
            }

            return resSet; // Return the largest divisible subset
      }
};
