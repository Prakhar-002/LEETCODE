//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3381

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public long maxSubarraySum(int[] nums, int k) {
            // prefSum keeps track of prefix sum up to current index
            long prefSum = 0;

            // subMax will store the maximum subarray sum with length multiple of k
            long subMax = Long.MIN_VALUE;

            // minSoFar stores the minimum prefix sum for each (index mod k)
            // This helps track subarrays whose lengths differ by multiples of k
            long[] minSoFar = new long[k];

            // Initialize minSoFar with large positive values so comparisons work correctly
            Arrays.fill(minSoFar, Long.MAX_VALUE / 2);

            // For 0-length prefix (before processing any element),
            // we implicitly consider prefixSum = 0 at index -1, which corresponds to
            // (k-1)%k
            // This ensures valid subarray lengths that are multiples of k
            minSoFar[(k - 1) % k] = 0;

            // Traverse the array and calculate prefix sums
            for (int i = 0; i < nums.length; i++) {
                  // Update running prefix sum
                  prefSum += nums[i];

                  // For each prefix, consider the best possible min prefix sum
                  // whose index has the same remainder mod k
                  // This ensures (i - j) is a multiple of k, making subarray length valid
                  subMax = Math.max(subMax, prefSum - minSoFar[i % k]);

                  // Update the minimum prefix sum for this modulo class
                  minSoFar[i % k] = Math.min(minSoFar[i % k], prefSum);
            }

            // Return the maximum subarray sum found
            return subMax;
      }
}
