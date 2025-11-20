//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L6 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int singleNumber(vector<int>& nums) {
            int result = 0; // Initialize XOR accumulator

            // Loop through all numbers
            for (int num : nums) {
                  // XOR current number with result
                  // Duplicates cancel out, leaving the single number
                  result ^= num;
            }

            return result; // Unique element
      }
};
