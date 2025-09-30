//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2221

//? ⌚ Time complexity ➺ O(n * 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int triangularSum(vector<int>& nums) {
            // Continue the reduction until only one number remains
            while (nums.size() > 1) {
                  // Temporary array for storing reduced values
                  vector<int> temp(nums.size() - 1, 0);

                  // Compute (a + b) % 10 for all adjacent pairs
                  for (int i = 0; i < temp.size(); ++i) {
                        temp[i] = (nums[i] + nums[i + 1]) % 10;
                  }

                  // Update nums to the new reduced array
                  nums = temp;
            }

            // Return the final single element
            return nums[0];
      }
};
