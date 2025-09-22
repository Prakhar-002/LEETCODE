//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3005

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.HashMap;
import java.util.Map;

class Solution {
      public int maxFrequencyElements(int[] nums) {
            Map<Integer, Integer> freq = new HashMap<>(); // Count frequency of each element

            for (int num : nums) {
                  freq.put(num, freq.getOrDefault(num, 0) + 1);
            }

            int maxFreq = 0;
            int totalFreq = 0;

            // Find the maximum frequency
            for (int val : freq.values()) {
                  if (val > maxFreq) {
                        maxFreq = val;
                        totalFreq = val; // Reset total to current max frequency
                  } else if (val == maxFreq) {
                        totalFreq += val; // Add frequency of elements with max frequency
                  }
            }

            return totalFreq;
      }
}
