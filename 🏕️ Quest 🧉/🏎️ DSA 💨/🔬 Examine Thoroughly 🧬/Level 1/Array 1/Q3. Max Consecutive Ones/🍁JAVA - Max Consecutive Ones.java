//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int findMaxConsecutiveOnes(int[] nums) {
            int maxOnes = 0;
            int left = 0;

            // Use sliding window approach to track longest run of 1s
            for (int right = 0; right < nums.length; right++) {
                  if (nums[right] == 0) {
                        // Reset left pointer to one position after current zero
                        left = right + 1;
                  } else {
                        // Update maxOnes with current window size if greater
                        maxOnes = Math.max(maxOnes, right - left + 1);
                  }
            }

            return maxOnes;
      }
}
