//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L8.3 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int kConcatenationMaxSum(int[] arr, int k) {
            final int MOD = 1000000007;

            // If all elements are <= 0, maximum subarray sum is 0
            int maxVal = arr[0];
            for (int x : arr) {
                  if (x > maxVal) maxVal = x;
            }
            if (maxVal <= 0) {
                  return 0;
            }

            // sm = total sum of one copy of arr
            long sm = 0;
            for (int x : arr) {
                  sm += x;
            }

            // ct = current sum of subarray ending at current element
            long ct = 0;
            // mx = maximum subarray sum seen so far
            long mx = 0;

            // If k > 1, we consider two copies of arr (arr + arr)
            // This is enough to capture the best subarray that wraps from the end of one copy to the start of the next
            if (k > 1) {
                  // Run Kadane on arr + arr
                  for (int rep = 0; rep < 2; rep++) {
                        for (int n : arr) {
                              // Either extend the current subarray or start a new one from 0
                              ct = Math.max(ct + n, 0);
                              // Update the maximum subarray sum seen so far
                              mx = Math.max(mx, ct);
                        }
                  }
            } else {
                  // k == 1: run Kadane on single copy
                  for (int n : arr) {
                        ct = Math.max(ct + n, 0);
                        mx = Math.max(mx, ct);
                  }
            }

            // If k <= 1, we only have one copy, so answer is mx
            // If k > 1 and sm > 0, we can add (k-2) full copies of the array in the middle
            //   because the best subarray can wrap around and include the middle copies
            // Example: best subarray = [suffix of first copy] + [full middle copies] + [prefix of last copy]
            long result = mx;
            if (k > 1 && sm > 0) {
                  result = (mx + (k - 2) * sm) % MOD;
            }
            return (int) (result % MOD);
      }
}
