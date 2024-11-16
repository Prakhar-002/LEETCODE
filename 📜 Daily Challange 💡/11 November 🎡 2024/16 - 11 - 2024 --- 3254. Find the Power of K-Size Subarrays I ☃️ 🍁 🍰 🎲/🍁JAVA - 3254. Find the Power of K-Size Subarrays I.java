//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3254

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public int[] resultsArray(int[] nums, int k) {
            // Initialize the results list to store the output
            int[] results = new int[nums.length - k + 1];
            int idx = 0;

            // Initialize the left pointer for the sliding window
            int l = 0;

            // Variable to keep track of the count of consecutive numbers
            int con_cnt = 1;

            // Iterate through the array with the right pointer
            for (int r = 0; r < nums.length; r++) {
                  // Check if the current and previous numbers are consecutive
                  if (r > 0 && nums[r - 1] + 1 == nums[r]) {
                        con_cnt++;
                  }

                  // If the window size exceeds k, update the left pointer
                  if (r - l + 1 > k) {
                        // Decrement con_cnt if the leftmost numbers were consecutive
                        if (nums[l] + 1 == nums[l + 1]) {
                              con_cnt--;
                        }
                        // Slide the window to the right
                        l++;
                  }

                  // If the window size is exactly k, calculate the result for this window
                  if (r - l + 1 == k) {
                        // Add the last number in the window if all are consecutive; otherwise, add -1
                        results[idx++] = con_cnt == k ? nums[r] : -1;
                  }
            }

            // Return the final results list
            return results;
      }
}

//!---------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n * k) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {

      // Helper function to check for consecutive numbers in the range [l, r]
      private int findMax(int[] nums, int l, int r) {
            for (int i = l; i < r; i++) {
                  // If two consecutive numbers are not successive, return -1
                  if (nums[i] + 1 != nums[i + 1]) {
                        return -1;
                  }
            }
            // Return the last number in the range if all are consecutive
            return nums[r];
      }

      public int[] resultsArray(int[] nums, int k) {
            // Initialize the result list to store the output
            int[] res = new int [nums.length - k + 1];
            int idx = 0;

            // Set the starting index for the sliding window
            int l = 0;

            // Iterate through nums using a sliding window of size k
            for (int r = k - 1; r < nums.length; r++) {
                  // Append the result of findMax for the current window [l, r]
                  res[idx++] = findMax(nums, l, r);
                  // Move the left pointer of the window one step to the right
                  l++;
            }

            // Return the final result list
            return res;
      }
}
