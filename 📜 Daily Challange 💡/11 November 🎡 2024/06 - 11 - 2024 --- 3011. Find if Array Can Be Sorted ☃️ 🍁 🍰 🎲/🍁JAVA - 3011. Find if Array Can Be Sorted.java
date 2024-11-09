//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3011

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public boolean canSortArray(int[] nums) {
            // Initialize curMin and curMax as the first element of nums
            int curMin = nums[0];
            int curMax = nums[0];
            // prevMax will track the maximum of the previous "bit count" block
            int prevMax = Integer.MIN_VALUE;

            // Loop through each number n in the array nums
            for (int n : nums) {
                  // Check if the bit count of n matches curMin's bit count
                  if (Integer.bitCount(n) == Integer.bitCount(curMin)) {
                        // Update curMin and curMax for this "bit count" block
                        curMin = Math.min(curMin, n);
                        curMax = Math.max(curMax, n);
                  } else {
                        // If curMin is less than prevMax, return false as sorting isn't possible
                        if (curMin < prevMax) {
                              return false;
                        }
                        // Update prevMax to the max of the completed block
                        prevMax = curMax;
                        // Reset curMin and curMax for the new "bit count" block
                        curMin = n;
                        curMax = n;
                  }
            }

            // Final check to ensure last block's curMin is >= prevMax
            return curMin >= prevMax;
      }
}
