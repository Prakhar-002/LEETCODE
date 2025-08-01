//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2293

//? ⌚ Time complexity ➺ O(n * 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int minMaxGame(int[] nums) {
            // Keep reducing the array until only one element remains
            while (nums.length > 1) {
                  int[] newNums = new int[nums.length / 2];

                  // Process each pair
                  for (int i = 0; i < newNums.length; i++) {
                        if (i % 2 == 0) {
                              // Even index: take min of the pair
                              newNums[i] = Math.min(nums[2 * i], nums[2 * i + 1]);
                        } else {
                              // Odd index: take max of the pair
                              newNums[i] = Math.max(nums[2 * i], nums[2 * i + 1]);
                        }
                  }

                  // Update nums to the newly computed array
                  nums = newNums;
            }

            // Final element is the answer
            return nums[0];
      }
}
