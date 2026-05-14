//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2784

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.HashMap;
import java.util.Map;

class Solution {
      public boolean isGood(int[] nums) {
            // Build frequency map for all numbers
            Map<Integer, Integer> countNum = new HashMap<>();
            int maxNum = 0;

            for (int num : nums) {
                  countNum.put(num, countNum.getOrDefault(num, 0) + 1);
                  // Track max while building the map
                  maxNum = Math.max(maxNum, num);
            }

            // Max value must appear exactly twice (as per problem definition)
            if (countNum.get(maxNum) != 2)
                  return false;

            // Every value from 1 to maxNum-1 must appear exactly once
            for (int i = maxNum - 1; i >= 1; i--) {
                  if (countNum.getOrDefault(i, 0) != 1)
                        return false;
            }

            return true;
      }
}