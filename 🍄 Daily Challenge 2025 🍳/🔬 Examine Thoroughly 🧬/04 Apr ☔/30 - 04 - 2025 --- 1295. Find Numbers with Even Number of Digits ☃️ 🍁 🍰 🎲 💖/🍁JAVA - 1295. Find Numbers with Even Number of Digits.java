//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1295

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int findNumbers(int[] nums) {
            int res = 0; // To store the count of numbers with even number of digits

            for (int num : nums) {
                  // Check if num has even digits (2, 4, or 6 digits)
                  if ((num > 9 && num < 100) || (num > 999 && num < 10000) || num == 100000) {
                        res++; // Increment result if num has even number of digits
                  }
            }

            return res; // Return final count
      }
}
