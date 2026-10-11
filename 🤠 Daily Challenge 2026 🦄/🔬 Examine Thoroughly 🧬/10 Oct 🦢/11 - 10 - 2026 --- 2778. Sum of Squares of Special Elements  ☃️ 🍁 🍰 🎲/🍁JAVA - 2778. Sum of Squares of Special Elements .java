//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2778

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int sumOfSquares(int[] nums) {
            int res = 0;
            int n = nums.length;

            // Loop using 1-based indexing to check each element
            for (int i = 1; i <= n; i++) {
                  // Check if index i divides array length n
                  if (n % i == 0) {
                        res += nums[i - 1] * nums[i - 1];
                  }
            }

            return res;
      }
}