//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2574

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int[] leftRightDifference(int[] nums) {
            // Start with total sum on the right, nothing on the left
            int rightSum = 0;
            for (int num : nums)
                  rightSum += num;

            int leftSum = 0;
            int[] res = new int[nums.length];

            for (int i = 0; i < nums.length; i++) {
                  // Remove current element from right before comparing
                  rightSum -= nums[i];

                  res[i] = Math.abs(leftSum - rightSum);

                  // Add current element to left for next iteration
                  leftSum += nums[i];
            }

            return res;
      }
}