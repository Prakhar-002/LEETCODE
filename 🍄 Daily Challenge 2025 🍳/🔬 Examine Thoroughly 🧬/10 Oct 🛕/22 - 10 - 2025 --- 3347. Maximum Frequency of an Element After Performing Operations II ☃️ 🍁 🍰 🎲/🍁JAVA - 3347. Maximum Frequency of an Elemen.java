//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3347

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {

      /**
       * Computes the maximum frequency of an element in nums after applying
       * operations
       * to adjust elements by up to k, using at most numOperations.
       *
       * @param nums          Array of integers
       * @param k             Adjustment range for each element
       * @param numOperations Maximum allowed operations
       * @return Maximum frequency achievable after operations
       */
      public int maxFrequency(int[] nums, int k, int numOperations) {
            Arrays.sort(nums); // Sort array for efficient binary search and grouping

            int ans = 0; // Track the maximum frequency found
            Map<Integer, Integer> numCount = new HashMap<>(); // Frequency of distinct values
            int lastNumIndex = 0; // Start index of current group of identical numbers

            // Calculate frequencies for each distinct number in sorted array and add
            // candidate modes
            for (int i = 0; i < nums.length; i++) {
                  if (nums[i] != nums[lastNumIndex]) {
                        int count = i - lastNumIndex;
                        numCount.put(nums[lastNumIndex], count);
                        ans = Math.max(ans, count);
                        addMode(nums[lastNumIndex], k, nums, numCount);
                        lastNumIndex = i;
                  }
            }
            // Record frequency and modes for last number group
            int count = nums.length - lastNumIndex;
            numCount.put(nums[lastNumIndex], count);
            ans = Math.max(ans, count);
            addMode(nums[lastNumIndex], k, nums, numCount);

            // Create a sorted list of candidate values (modes) for optimization
            List<Integer> sortedModes = new ArrayList<>(numCount.keySet());
            Collections.sort(sortedModes);

            // For each candidate mode, calculate achievable frequency within ±k range
            for (int mode : sortedModes) {
                  int left = leftBound(nums, mode - k);
                  int right = rightBound(nums, mode + k);
                  if (right < left)
                        continue;

                  int tempAns;
                  if (numCount.containsKey(mode)) {
                        // Maximum frequency is limited by the count of mode & operations allowed
                        tempAns = Math.min(right - left + 1, numCount.get(mode) + numOperations);
                  } else {
                        // If mode not in nums, only operations can create new frequency up to
                        // numOperations
                        tempAns = Math.min(right - left + 1, numOperations);
                  }
                  ans = Math.max(ans, tempAns);
            }

            return ans;
      }

      // Add mode candidates: value, value-k, and value+k if in range of nums
      private void addMode(int value, int k, int[] nums, Map<Integer, Integer> numCount) {
            numCount.putIfAbsent(value - k, 0);
            numCount.putIfAbsent(value + k, 0);
      }

      // Find left bound of 'val' using binary search: smallest index >= val
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

      // Find right bound of 'val' using binary search: largest index <= val
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
