//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2016

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int maximumDifference(int[] nums) {
            int ans = -1;             // Initialize answer to -1 (default if no valid diff)
            int preMin = nums[0];     // Initialize the minimum seen so far as the first element

            // Start from the second element
            for (int i = 1; i < nums.length; i++) {
                  if (nums[i] > preMin) {
                        // If current element is greater than previous minimum,
                        // compute the difference and update answer if it's greater
                        ans = Math.max(ans, nums[i] - preMin);
                  } else {
                        // Otherwise, update preMin to current element
                        preMin = nums[i];
                  }
            }

            return ans; // Return the max difference or -1 if none found
      }
}
