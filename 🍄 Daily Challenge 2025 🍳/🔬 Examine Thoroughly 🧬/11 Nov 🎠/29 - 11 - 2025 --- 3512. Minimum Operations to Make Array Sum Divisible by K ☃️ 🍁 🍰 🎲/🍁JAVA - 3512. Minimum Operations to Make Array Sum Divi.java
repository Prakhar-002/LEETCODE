//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3512

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int minOperations(int[] nums, int k) {
            // Calculate total sum of all array elements
            int totalSum = 0;
            for (int num : nums) {
                  totalSum += num;
            }

            // The minimal number of operations is the remainder when
            // total sum is divided by k (each operation changes sum by 1 modulo k)
            // Use long to prevent integer overflow for large arrays
            return totalSum % k;
      }
}
