//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2293

//? ⌚ Time complexity ➺ O(n * 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int minMaxGame(vector<int>& nums) {
            // Keep reducing until only one element remains
            while (nums.size() > 1) {
                  vector<int> newNums(nums.size() / 2);

                  // Process each pair of elements
                  for (int i = 0; i < newNums.size(); ++i) {
                        if (i % 2 == 0) {
                              // Even index: take min of the pair
                              newNums[i] = min(nums[2 * i], nums[2 * i + 1]);
                        } else {
                              // Odd index: take max of the pair
                              newNums[i] = max(nums[2 * i], nums[2 * i + 1]);
                        }
                  }

                  // Replace original array with new array
                  nums = newNums;
            }

            // Return the last remaining number
            return nums[0];
      }
};
