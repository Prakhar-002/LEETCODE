//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3151

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      // Function to check if an array is "special"
      public boolean isArraySpecial(int[] nums) {
            // Iterate through the array, checking adjacent elements
            for (int i = 0; i < nums.length - 1; i++) {
                  // If the sum of two adjacent elements is even, return false
                  if ((nums[i] + nums[i + 1]) % 2 == 0) {
                        return false;
                  }
            }
            // If no adjacent even sums were found, return true
            return true;
      }
}
