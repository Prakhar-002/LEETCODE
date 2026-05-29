//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3300

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      // Extract and sum all digits of a number
      private int digitSum(int n) {
            int ans = 0;
            while (n > 0) {
                  ans += n % 10;    // Add last digit
                  n   /= 10;        // Remove last digit
            }

            return ans;
      }

      public int minElement(int[] nums) {
            int res = Integer.MAX_VALUE;

            for (int n : nums) {
                  // Track the minimum digit sum seen so far
                  res = Math.min(res, digitSum(n));
            }

            return res;
      }
}