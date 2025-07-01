//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2202

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int maximumTop(int[] nums, int k) {
            int n = nums.length;

            // Case 1: If there is only one element and k is odd, we cannot leave the stack
            // non-empty
            if (n == 1 && k % 2 == 1)
                  return -1;

            // Case 2: No operations allowed, return the current top
            if (k == 0)
                  return nums[0];

            // Case 3: If only one operation allowed, remove top and return next (if it
            // exists)
            if (k == 1) {
                  return (n > 1) ? nums[1] : -1;
            }

            // General case: we can remove up to (k - 1) elements and put one back
            int maxVal = Integer.MIN_VALUE;
            int limit = Math.min(n, k - 1); // Can't go beyond array bounds

            for (int i = 0; i < limit; i++) {
                  maxVal = Math.max(maxVal, nums[i]);
            }

            // If k is less than the size of the array, consider pushing back nums[k]
            if (k < n) {
                  maxVal = Math.max(maxVal, nums[k]);
            }

            return maxVal;
      }
}
