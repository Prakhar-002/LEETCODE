//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2845

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(min(n, modulo))

import java.util.HashMap;
import java.util.Map;

class Solution {
      public long countInterestingSubarrays(List<Integer> nums, int modulo, int k) {
            int n = nums.size(); // Length of the array
            Map<Integer, Long> cnt = new HashMap<>(); // Map to store prefix mod counts
            cnt.put(0, 1L); // Initialize prefix 0 with count 1
            long res = 0; // Result to store total interesting subarrays
            int prefix = 0; // Prefix sum counter

            for (int i = 0; i < n; i++) {
                  // If current number satisfies nums[i] % modulo == k, increment prefix
                  if (nums.get(i) % modulo == k) {
                        prefix++;
                  }

                  // Add count of (prefix - k + modulo) % modulo from map
                  res += cnt.getOrDefault((prefix - k + modulo) % modulo, 0L);

                  // Update the map with current prefix % modulo
                  cnt.put(prefix % modulo, cnt.getOrDefault(prefix % modulo, 0L) + 1);
            }

            return res; // Return total interesting subarrays
      }
}
