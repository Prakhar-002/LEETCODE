//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 268

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int missingNumber(int[] nums) {
            int n = nums.length;

            // Expected sum of numbers from 0 to n using formula n * (n + 1) / 2
            // Uses long to avoid potential integer overflow for large n
            long expectedSum = (long) n * (n + 1) / 2;

            // Actual sum of elements in the array
            long actualSum = 0;
            for (int num : nums) {
                  actualSum += num;
            }

            // The difference is the missing number
            return (int) (expectedSum - actualSum);
      }
}
