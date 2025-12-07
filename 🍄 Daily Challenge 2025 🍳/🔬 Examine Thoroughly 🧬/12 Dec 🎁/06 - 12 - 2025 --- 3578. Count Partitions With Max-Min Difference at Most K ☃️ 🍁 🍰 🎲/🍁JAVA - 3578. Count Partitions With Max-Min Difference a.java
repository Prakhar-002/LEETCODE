//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3578

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int countPartitions(int[] nums, int k) {
            int n = nums.length;
            long MOD = 1000000007L; // Modulo 10^9+7 for large answers

            // dp[i] = number of ways to partition prefix nums[0..i-1]
            long[] dp = new long[n + 1];
            // prefix[i] = sum(dp[0] + dp[1] + ... + dp[i])
            long[] prefix = new long[n + 1];

            // TreeMap maintains sorted order, cnt[num] = frequency in current window
            TreeMap<Integer, Integer> cnt = new TreeMap<>();

            // Base case: empty array has 1 way to partition (do nothing)
            dp[0] = 1;
            prefix[0] = 1;

            int j = 0; // Left pointer of sliding window
            for (int i = 0; i < n; i++) {
                  // Add nums[i] to current window
                  cnt.put(nums[i], cnt.getOrDefault(nums[i], 0) + 1);

                  // Shrink window from left until max - min <= k
                  while (j <= i && cnt.lastKey() - cnt.firstKey() > k) {
                        // Remove nums[j] from window
                        cnt.put(nums[j], cnt.get(nums[j]) - 1);
                        if (cnt.get(nums[j]) == 0) {
                              cnt.remove(nums[j]); // Clean up zero-count entries
                        }
                        j++;
                  }

                  // dp[i+1] = number of valid ways ending at position i
                  // = sum of dp[j] to dp[i] (all valid starting points in current window)
                  // Use prefix sums for O(1) range query
                  long prevPrefixSum = (j > 0) ? prefix[j - 1] : 0;
                  dp[i + 1] = (prefix[i] - prevPrefixSum + MOD) % MOD;

                  // Update prefix sum for next iteration
                  prefix[i + 1] = (prefix[i] + dp[i + 1]) % MOD;
            }

            // dp[n] = total ways to partition entire array
            return (int) dp[n];
      }
}
