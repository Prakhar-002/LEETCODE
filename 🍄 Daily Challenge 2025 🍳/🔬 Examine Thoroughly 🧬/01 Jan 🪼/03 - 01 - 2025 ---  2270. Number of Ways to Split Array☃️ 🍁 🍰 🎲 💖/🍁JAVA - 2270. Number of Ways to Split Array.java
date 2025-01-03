//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2770

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int waysToSplitArray(int[] nums) {
            // Calculate the total sum of the array, which will serve as the initial right sum
            long rightSum = 0;
            for (int num : nums) {
                  rightSum += num;
            }

            // Initialize a counter for the number of valid splits
            int splits = 0;

            // Initialize the left sum as 0
            long leftSum = 0;

            // Iterate through the array up to the second-to-last element
            for (int i = 0; i < nums.length - 1; i++) {
                  // Add the current element to the left sum
                  leftSum += nums[i];

                  // Subtract the current element from the right sum
                  rightSum -= nums[i];

                  // Check if the left sum is greater than or equal to the right sum
                  if (leftSum >= rightSum) {
                        // If the condition is met, increment the split counter
                        splits++;
                  }
            }

            // Return the total number of valid splits
            return splits;
      }
}
