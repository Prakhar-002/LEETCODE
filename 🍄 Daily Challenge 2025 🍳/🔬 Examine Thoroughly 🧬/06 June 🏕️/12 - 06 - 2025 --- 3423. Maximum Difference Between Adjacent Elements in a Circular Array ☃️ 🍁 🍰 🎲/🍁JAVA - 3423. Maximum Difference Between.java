//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3423

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      // Function to find the maximum adjacent difference in the array
      public int maxAdjacentDistance(int[] nums) {
            int n = nums.length; // Get the length of the array
            int maxDiff = Math.abs(nums[n - 1] - nums[0]); // Initialize maxDiff with the difference between first and last element

            // Iterate through the array to find the max adjacent difference
            for (int i = 1; i < n; i++) {
                  maxDiff = Math.max(maxDiff, Math.abs(nums[i] - nums[i - 1]));
            }

            return maxDiff; // Return the maximum adjacent difference
      }
}