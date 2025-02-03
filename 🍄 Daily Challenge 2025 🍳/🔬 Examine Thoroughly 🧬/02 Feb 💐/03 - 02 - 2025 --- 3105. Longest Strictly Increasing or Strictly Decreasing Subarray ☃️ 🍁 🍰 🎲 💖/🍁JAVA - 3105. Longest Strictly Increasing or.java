//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3105

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int longestMonotonicSubarray(int[] nums) {
            // Variables to track increasing and decreasing subsequences
            int inc = 1, dec = 1; 
            int maxLength = 1;

            // Iterate to find the longest decreasing subarray
            for (int i = 1; i < nums.length; i++) {
                  if (nums[i] < nums[i - 1]) {
                        dec += 1; // Increment dec count if current element is smaller
                  } else {
                        dec = 1; // Reset dec count if the sequence breaks
                  }
                  maxLength = Math.max(maxLength, dec);
            }

            // Iterate to find the longest increasing subarray
            for (int i = 1; i < nums.length; i++) {
                  if (nums[i] > nums[i - 1]) {
                        inc += 1; // Increment inc count if current element is larger
                  } else {
                        inc = 1; // Reset inc count if the sequence breaks
                  }
                  maxLength = Math.max(maxLength, inc);
            }

            // Return the maximum length of either increasing or decreasing sequence
            return maxLength;
      }
}
