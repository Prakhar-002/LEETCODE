//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L7 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int singleNumber(int[] nums) {
            int ones = 0;  // Bits that have appeared exactly once so far
            int twos = 0;  // Bits that have appeared exactly twice so far

            for (int num : nums) {
                  // Add bits to 'ones' which appear in num and not in 'twos'
                  ones = (ones ^ (num & ~twos));
                  // Add bits to 'twos' which appear in num and not in updated 'ones'
                  twos = (twos ^ (num & ~ones));
            }
            // Bits in 'ones' represent the unique number appearing once
            return ones;
      }
}
