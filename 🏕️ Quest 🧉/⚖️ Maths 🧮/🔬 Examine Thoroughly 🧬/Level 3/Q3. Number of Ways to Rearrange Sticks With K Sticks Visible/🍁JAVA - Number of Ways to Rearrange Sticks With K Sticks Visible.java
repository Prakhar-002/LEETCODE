//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L3 Q3

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

import java.util.HashMap;
import java.util.Map;

class Solution {
      private static final int MOD = 1000000007;
      private Map<String, Integer> memo = new HashMap<>();

      // Helper method with memoization key built from parameters
      public int rearrangeSticks(int n, int k) {
            // Base cases
            if (n == k) return 1;  // Only one way if all sticks visible
            if (k == 0) return 0;  // No way to have zero visible sticks when n > 0

            String key = n + "," + k; 
            if (memo.containsKey(key))
                  return memo.get(key);

            // Recursive relation:
            // 1) Tallest stick at front -> arrange remaining (n-1, k-1)
            // 2) Tallest stick not front -> arrange (n-1, k) * (n-1) positions
            long result = ((long)rearrangeSticks(n - 1, k - 1) + 
                           (long)rearrangeSticks(n - 1, k) * (n - 1)) % MOD;

            memo.put(key, (int) result);
            return (int) result;
      }
}
