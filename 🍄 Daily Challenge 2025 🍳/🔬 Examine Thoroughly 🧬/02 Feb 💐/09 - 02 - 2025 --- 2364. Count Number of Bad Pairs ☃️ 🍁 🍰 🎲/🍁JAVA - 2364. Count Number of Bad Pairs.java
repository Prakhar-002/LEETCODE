//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2364

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public long countBadPairs(int[] nums) {
            // Initialize variables for total pairs and good pairs
            long goodPair = 0;
            long totalPair = 0;

            // Map to keep track of occurrences of (nums[i] - i)
            Map<Integer, Long> pair_count = new HashMap<>();

            // Iterate through the array
            for (int i = 0; i < nums.length; i++) {
                  // Add index to total pairs count
                  totalPair += i;

                  // Count valid pairs using the map
                  goodPair += pair_count.getOrDefault(nums[i] - i, 0L);

                  // Update the map with current (nums[i] - i) value
                  pair_count.put(nums[i] - i, pair_count.getOrDefault(nums[i] - i, 0L) + 1);
            }

            // Return the number of bad pairs
            return totalPair - goodPair;
      }
}
