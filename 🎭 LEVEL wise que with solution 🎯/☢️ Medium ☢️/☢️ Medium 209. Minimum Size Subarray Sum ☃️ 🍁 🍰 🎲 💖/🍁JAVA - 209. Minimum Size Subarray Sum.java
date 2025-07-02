//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 209

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int minSubArrayLen(int target, int[] nums) {
            int left = 0, sum = 0;
            int res = Integer.MAX_VALUE; // Initialize result with maximum possible value

            for (int right = 0; right < nums.length; right++) {
                  sum += nums[right]; // Add current element to the sum

                  // Try to shrink the window from the left while sum ≥ target
                  while (sum >= target) {
                        res = Math.min(res, right - left + 1); // Update result
                        sum -= nums[left]; // Shrink from the left
                        left++;
                  }
            }

            return res == Integer.MAX_VALUE ? 0 : res; // Return 0 if no valid subarray was found
      }
}
