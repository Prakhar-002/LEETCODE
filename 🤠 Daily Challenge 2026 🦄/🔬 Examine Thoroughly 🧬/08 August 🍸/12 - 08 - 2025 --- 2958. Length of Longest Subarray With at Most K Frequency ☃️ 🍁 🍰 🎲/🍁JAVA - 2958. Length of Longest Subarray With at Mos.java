//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2958

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.HashMap;
import java.util.Map;

class Solution {
      public int maxSubarrayLength(int[] nums, int k) {
            // Map to store frequencies of elements in the current sliding window
            Map<Integer, Integer> freq = new HashMap<>();

            int left = 0;
            int maxLen = 0;

            // Expand window using the right pointer
            for (int right = 0; right < nums.length; right++) {
                  freq.put(nums[right], freq.getOrDefault(nums[right], 0) + 1);

                  // Shrink window from the left if current element frequency exceeds k
                  while (freq.get(nums[right]) > k) {
                        freq.put(nums[left], freq.get(nums[left]) - 1);
                        left++;
                  }

                  // Update maximum length found so far
                  maxLen = Math.max(maxLen, right - left + 1);
            }

            return maxLen;
      }
}