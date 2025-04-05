//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1863

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int subsetXORSum(vector<int>& nums) {
            // Store the bitwise OR of all elements
            int xorSum = 0;

            for (int num : nums) {
                  xorSum |= num;
            }

            // Total subset XOR sum = xorSum * 2^(nums.size() - 1)
            return xorSum * (1 << (nums.size() - 1));
      }
};
