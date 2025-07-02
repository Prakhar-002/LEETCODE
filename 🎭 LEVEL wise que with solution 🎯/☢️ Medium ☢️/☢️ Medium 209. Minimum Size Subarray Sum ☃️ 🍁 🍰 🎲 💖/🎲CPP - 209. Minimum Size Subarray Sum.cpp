//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 209

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int minSubArrayLen(int target, vector<int> &nums) {
            int left = 0, sum = 0;
            int res = INT_MAX; // Initialize with large number

            for (int right = 0; right < nums.size(); ++right) {
                  sum += nums[right]; // Add current number to window sum

                  // Shrink window while condition is satisfied
                  while (sum >= target) {
                        res = min(res, right - left + 1); // Update result
                        sum -= nums[left];                // Remove leftmost value
                        left++;                           // Move left boundary right
                  }
            }

            return res == INT_MAX ? 0 : res; // If no window was found, return 0
      }
};
