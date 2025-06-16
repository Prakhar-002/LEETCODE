//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2016

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int maximumDifference(vector<int> &nums) {
            int ans = -1;          // Initialize result to -1 (if no valid difference found)
            int pre_min = nums[0]; // Initialize the smallest value seen so far

            // Iterate through the array starting from the second element
            for (int i = 1; i < nums.size(); ++i) {
                  if (nums[i] > pre_min) {
                        // If current number is greater than the minimum so far, update the answer
                        ans = max(ans, nums[i] - pre_min);
                  }
                  else {
                        // If current number is smaller or equal, update pre_min
                        pre_min = nums[i];
                  }
            }

            return ans; // Return the maximum difference found or -1 if none
      }
};
