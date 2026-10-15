//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2713

// ? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(n)

import java.util.HashSet;
import java.util.List;
import java.util.Set;

class Solution {
      public int sumCounts(List<Integer> nums) {
            int n = nums.size();
            int res = 0;

            // Loop over all starting positions i
            for (int i = 0; i < n; i++) {
                  Set<Integer> seen = new HashSet<>();
                  // Extend subarray to ending position j
                  for (int j = i; j < n; j++) {
                        // Track unique elements in subarray nums[i..j]
                        seen.add(nums.get(j));
                        int distinctCount = seen.size();
                        // Add square of distinct count
                        res += distinctCount * distinctCount;
                  }
            }

            return res;
      }
}