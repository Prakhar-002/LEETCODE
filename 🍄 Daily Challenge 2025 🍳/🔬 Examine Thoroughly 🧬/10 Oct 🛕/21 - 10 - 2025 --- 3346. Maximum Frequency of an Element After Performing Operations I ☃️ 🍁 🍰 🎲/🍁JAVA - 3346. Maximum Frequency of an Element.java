//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3346

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*; 

class Solution {
      public int maxFrequency(int[] nums, int k, int numOperations) {
            Arrays.sort(nums); // Sort for binary search and grouping
            int ans = 0; // Track maximum frequency
            Map<Integer, Integer> numCount = new HashMap<>(); // Frequency map for distinct numbers
            int lastIndex = 0; // Start index of current distinct number group

            // Compute frequencies of distinct numbers
            for (int i = 0; i < nums.length; i++) {
                  if (nums[i] != nums[lastIndex]) {
                        int count = i - lastIndex;
                        numCount.put(nums[lastIndex], count);
                        ans = Math.max(ans, count);
                        lastIndex = i;
                  }
            }
            // Add frequency of last distinct number group
            int count = nums.length - lastIndex;
            numCount.put(nums[lastIndex], count);
            ans = Math.max(ans, count);

            // Iterate through all possible values in range [min(num), max(num)]
            for (int i = nums[0]; i <= nums[nums.length - 1]; i++) {
                  // Find boundaries with binary search for values in [i - k, i + k]
                  int left = leftBound(nums, i - k);
                  int right = rightBound(nums, i + k);
                  if (right < left)
                        continue;

                  // Calculate temporary max frequency for current i
                  int tempAns;
                  if (numCount.containsKey(i)) {
                        tempAns = Math.min(right - left + 1, numCount.get(i) + numOperations);
                  } else {
                        tempAns = Math.min(right - left + 1, numOperations);
                  }
                  ans = Math.max(ans, tempAns);
            }
            return ans;
      }

      // Finds the leftmost index where nums[index] >= val
      private int leftBound(int[] nums, int val) {
            int left = 0, right = nums.length - 1, res = nums.length;
            while (left <= right) {
                  int mid = left + (right - left) / 2;
                  if (nums[mid] >= val) {
                        res = mid;
                        right = mid - 1;
                  } else {
                        left = mid + 1;
                  }
            }
            return res;
      }

      // Finds the rightmost index where nums[index] <= val
      private int rightBound(int[] nums, int val) {
            int left = 0, right = nums.length - 1, res = -1;
            while (left <= right) {
                  int mid = left + (right - left) / 2;
                  if (nums[mid] <= val) {
                        res = mid;
                        left = mid + 1;
                  } else {
                        right = mid - 1;
                  }
            }
            return res;
      }
}
