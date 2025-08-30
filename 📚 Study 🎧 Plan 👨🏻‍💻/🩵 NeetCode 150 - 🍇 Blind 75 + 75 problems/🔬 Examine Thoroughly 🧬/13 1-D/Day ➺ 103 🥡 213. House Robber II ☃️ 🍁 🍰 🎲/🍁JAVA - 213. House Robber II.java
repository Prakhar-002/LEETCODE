//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 213

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

public class Solution {
      public int rob(int[] nums) {
            // Edge case: Only one house, rob it!
            if (nums.length == 1) {
                  return nums[0];
            }

            // Main idea: You can't rob both the first and last house (circle).
            // Option 1: Rob houses from index 1 to the end (skip first house).
            // Option 2: Rob houses from the start to second last (skip last house).
            // The single house case is already handled.
            // Take the max among these two scenarios.
            return Math.max(robber(nums, 1, nums.length), robber(nums, 0, nums.length - 1));
      }

      // Helper for the standard House Robber (linear array of houses)
      private int robber(int[] nums, int start, int end) {
            int rob1 = 0, rob2 = 0;
            // For each house amount:
            for (int i = start; i < end; i++) {
                  // rob2: Max money by either (previous max rob) or (current + rob1)
                  int temp = rob2;
                  rob2 = Math.max(rob1 + nums[i], rob2);
                  rob1 = temp;
            }
            // Return the max money rob-able from these houses
            return rob2;
      }
}
