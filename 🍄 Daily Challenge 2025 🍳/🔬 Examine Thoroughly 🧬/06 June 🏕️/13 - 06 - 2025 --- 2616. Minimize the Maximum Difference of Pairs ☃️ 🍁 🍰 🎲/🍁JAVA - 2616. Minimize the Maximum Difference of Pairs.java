//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2616

//? ⌚ Time complexity ➺ O(n*logV+ n*log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.Arrays;

class Solution {
      public int minimizeMax(int[] nums, int p) {
            Arrays.sort(nums); // Step 1: Sort array to find close pairs easily
            int n = nums.length;

            // Step 2: Set initial binary search range
            int left = 0;
            int right = nums[n - 1] - nums[0]; // Max possible difference

            // Step 3: Binary search to find minimum possible max difference
            while (left < right) {
                  int mid = left + (right - left) / 2;

                  // Step 4: Check if we can make at least p valid pairs
                  if (countValidPairs(nums, mid, p)) {
                        right = mid; // Try smaller max difference
                  } else {
                        left = mid + 1; // Try larger max difference
                  }
            }

            return left; // Final minimized maximum difference
      }

      // Separate function to check if at least p valid pairs can be formed
      private boolean countValidPairs(int[] nums, int threshold, int p) {
            int count = 0;
            int i = 0;
            int n = nums.length;

            while (i < n - 1) {
                  if (nums[i + 1] - nums[i] <= threshold) {
                        count++;
                        i++; // Skip paired index
                  }
                  i++; // Move to next index
            }

            return count >= p;
      }
}
