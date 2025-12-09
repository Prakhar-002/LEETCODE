//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3583

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int specialTriplets(int[] nums) {
            final int MOD = 1000000007;

            // Count frequency of each number
            Map<Integer, Integer> numCnt = new HashMap<>();
            for (int num : nums) {
                  numCnt.put(num, numCnt.getOrDefault(num, 0) + 1);
            }

            // partials[x] = count of x seen so far
            Map<Integer, Integer> partials = new HashMap<>();

            long ans = 0;

            for (int n : nums) {
                  int target = n * 2; // Looking for x where x*2 = n (x = n/2)

                  // Left: how many target appeared before current n
                  long lCnt = partials.getOrDefault(target, 0);

                  // Update partials for current n
                  partials.put(n, partials.getOrDefault(n, 0) + 1);

                  // Right: how many target remain after current n
                  long rCnt = numCnt.getOrDefault(target, 0) - partials.getOrDefault(target, 0);

                  // Add triplets contribution
                  ans = (ans + lCnt * rCnt) % MOD;
            }

            return (int) ans;
      }
}
