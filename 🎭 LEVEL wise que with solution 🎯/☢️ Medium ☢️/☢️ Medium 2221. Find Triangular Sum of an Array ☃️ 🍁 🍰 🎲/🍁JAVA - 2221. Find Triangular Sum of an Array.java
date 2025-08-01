//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2221

//? ⌚ Time complexity ➺ O(n * 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int triangularSum(int[] nums) {
            // Continue until the array is reduced to one element
            while (nums.length > 1) {
                  // Create a new array with one less element
                  int[] temp = new int[nums.length - 1];

                  // Fill the new array with pairwise mod-10 sums
                  for (int i = 0; i < temp.length; i++) {
                        temp[i] = (nums[i] + nums[i + 1]) % 10;
                  }

                  // Replace the original array with the reduced one
                  nums = temp;
            }

            // Return the only remaining element
            return nums[0];
      }
}
