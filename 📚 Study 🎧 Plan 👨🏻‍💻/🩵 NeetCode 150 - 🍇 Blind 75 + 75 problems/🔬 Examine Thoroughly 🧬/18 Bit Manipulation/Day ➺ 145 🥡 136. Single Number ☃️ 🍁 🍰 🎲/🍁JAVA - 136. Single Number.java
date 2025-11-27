//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 136

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

public class Solution {
      /**
       * Finds the single number in an array where every element except one appears
       * twice.
       * XORing all elements cancels out duplicates, leaving the unique element.
       */
      public int singleNumber(int[] nums) {
            int xorNum = 0; // Initialize XOR accumulator

            // XOR all numbers - duplicates cancel out (n ^ n = 0)
            for (int n : nums) {
                  xorNum ^= n;
            }

            // Result is the single number (0 ^ single = single)
            return xorNum;
      }
}
