//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2348

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1) 

class Solution {
      public long zeroFilledSubarray(int[] nums) {
            // `total` accumulates the final count. Use `long` to prevent potential overflow.
            long total = 0;
            // `subArr` tracks the length of the current consecutive streak of zeros.
            long subArr = 0;

            // Iterate through each number in the array.
            for (int num : nums) {
                  if (num == 0) {
                        // If we find a zero, extend the current streak.
                        subArr++;
                        // A streak of `k` zeros adds `k` new subarrays ending at this position.
                        total += subArr;
                  } else {
                        // If the number is not zero, the streak is broken.
                        subArr = 0;
                  }
            }

            return total;
      }
}
