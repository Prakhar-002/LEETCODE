//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2444

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public long countSubarrays(int[] nums, int minK, int maxK) {
            // pMin: last index where nums[i] == minK
            // pMax: last index where nums[i] == maxK
            // bad: last index where nums[i] is out of [minK, maxK] range
            int pMin = -1, pMax = -1, bad = -1;
            long ans = 0; // To store the total count

            // Traverse the array
            for (int i = 0; i < nums.length; i++) {
                  int num = nums[i];

                  // Update pMin if current number is minK
                  if (num == minK) {
                        pMin = i;
                  }

                  // Update pMax if current number is maxK
                  if (num == maxK) {
                        pMax = i;
                  }

                  // Update bad if number is outside [minK, maxK]
                  if (num < minK || num > maxK) {
                        bad = i;
                  }

                  // If both minK and maxK have been seen at least once
                  if (pMin != -1 && pMax != -1) {
                        // Add the number of valid subarrays ending at i
                        ans += Math.max(0, Math.min(pMin, pMax) - bad);
                  }
            }

            // Return total number of valid subarrays
            return ans;
      }
}
