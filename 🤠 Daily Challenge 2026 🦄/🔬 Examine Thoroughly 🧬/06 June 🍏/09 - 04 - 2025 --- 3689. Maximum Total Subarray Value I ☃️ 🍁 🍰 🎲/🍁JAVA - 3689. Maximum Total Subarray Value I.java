//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3689

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public long maxTotalValue(int[] nums, int k) {
            int max = nums[0];
            int min = nums[0];

            // Find max and min in a single pass
            for (int num : nums) {
                  if (num > max)
                        max = num;
                  if (num < min)
                        min = num;
            }

            // Spread between max and min scaled by k gives the answer
            return (long) (max - min) * k;
      }
}