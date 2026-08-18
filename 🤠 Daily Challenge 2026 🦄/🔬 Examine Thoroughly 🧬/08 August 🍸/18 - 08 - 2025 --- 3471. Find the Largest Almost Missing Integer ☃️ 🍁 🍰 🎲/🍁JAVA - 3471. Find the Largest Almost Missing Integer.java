//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3471

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.HashMap;
import java.util.Map;

class Solution {
      public int largestInteger(int[] nums, int k) {
            int n = nums.length;

            // Frequency map to count occurrences of each element
            Map<Integer, Integer> freq = new HashMap<>();
            for (int num : nums) {
                  freq.put(num, freq.getOrDefault(num, 0) + 1);
            }

            // Case 1: k == 1, any element with frequency 1 appears in exactly one subarray of size 1
            if (k == 1) {
                  int maxVal = -1;
                  for (int num : nums) {
                        if (freq.get(num) == 1) {
                              maxVal = Math.max(maxVal, num);
                        }
                  }
                  return maxVal;
            }

            // Case 2: k == n, there is only one subarray of size n containing all elements
            if (k == n) {
                  int maxVal = -1;
                  for (int num : nums) {
                        maxVal = Math.max(maxVal, num);
                  }
                  return maxVal;
            }

            // Case 3: 1 < k < n, only unique boundary elements appear in exactly one subarray of size k
            int ans = -1;

            if (freq.get(nums[0]) == 1) {
                  ans = Math.max(ans, nums[0]);
            }

            if (freq.get(nums[n - 1]) == 1) {
                  ans = Math.max(ans, nums[n - 1]);
            }

            return ans;
      }
}