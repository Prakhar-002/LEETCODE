//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2333

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = max_diff

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public long minSumSquareDiff(int[] nums1, int[] nums2, int k1, int k2) {
            int n = nums1.length;

            int[] diff = new int[n];
            int maxDiff = 0;

            // Compute absolute differences and locate the maximum difference
            for (int i = 0; i < n; i++) {
                  diff[i] = Math.abs(nums1[i] - nums2[i]);
                  maxDiff = Math.max(maxDiff, diff[i]);
            }

            // countDiff[d] stores the count of indices with difference d
            int[] countDiff = new int[maxDiff + 1];
            for (int d : diff) {
                  countDiff[d]++;
            }

            // Total modification budget
            long K = (long) k1 + k2;

            // Greedily reduce the highest differences first
            for (int currDiff = maxDiff; currDiff > 0 && K > 0; currDiff--) {
                  int countOps = (int) Math.min(countDiff[currDiff], K);

                  countDiff[currDiff] -= countOps;
                  countDiff[currDiff - 1] += countOps;
                  K -= countOps;
            }

            // Accumulate total squared difference sum
            long result = 0;
            for (long d = 1; d <= maxDiff; d++) {
                  result += countDiff[(int) d] * d * d;
            }

            return result;
      }
}