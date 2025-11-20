//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L6 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int singleNumber(int[] nums) {
            int xorNum = 0; // Initialize XOR accumulator to zero

            // Loop through each number in the array
            for (int n : nums) {
                  // XOR current number with accumulator
                  // Pairs cancel out (n ^ n = 0), leaving the unique number
                  xorNum ^= n;
            }

            // Result holds the single number that does not have a duplicate
            return xorNum;
      }
}
