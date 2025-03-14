//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3356

// ? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(n)    👉🏻  m = len(queries)

class Solution {
      public int minZeroArray(int[] nums, int[][] queries) {
            int n = nums.length; // Length of the nums array
            int totalSum = 0; // Tracks the cumulative sum of differences applied
            int k = 0; // Number of operations needed
            int[] diffArr = new int[n + 1]; // Difference array to apply operations efficiently

            // Iterate through the nums array
            for (int i = 0; i < n; i++) {
                  // Ensure totalSum + diffArr[i] reaches nums[i]
                  while (totalSum + diffArr[i] < nums[i]) {
                        k++; // Increment operation count

                        // If more queries are required than available, return -1 (not possible)
                        if (k > queries.length) {
                              return -1;
                        }

                        int left = queries[k - 1][0]; // Left index of the range
                        int right = queries[k - 1][1]; // Right index of the range
                        int val = queries[k - 1][2]; // Value to add within range

                        // If range [left, right] covers index `i`, apply difference array update
                        if (right >= i) {
                              diffArr[Math.max(left, i)] += val; // Increase values from max(left, i)
                              diffArr[right + 1] -= val; // Decrease after right + 1
                        }
                  }

                  // Update total sum after applying the difference array
                  totalSum += diffArr[i];
            }

            return k; // Return the minimum number of queries required
      }
}
