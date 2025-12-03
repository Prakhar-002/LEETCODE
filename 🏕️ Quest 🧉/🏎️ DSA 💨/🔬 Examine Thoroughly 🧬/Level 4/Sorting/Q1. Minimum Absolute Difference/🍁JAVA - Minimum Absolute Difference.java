//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L4.1 Q1

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public List<List<Integer>> minimumAbsDifference(int[] arr) {
            // Sort the array so minimum absolute difference will be between neighbors
            Arrays.sort(arr);

            int n = arr.length;
            int minDiff = Integer.MAX_VALUE; // Track global minimum difference

            // First pass: find the minimum difference between adjacent elements
            for (int i = 1; i < n; i++) {
                  minDiff = Math.min(minDiff, arr[i] - arr[i - 1]);
            }

            // Second pass: collect all adjacent pairs that match minDiff
            List<List<Integer>> res = new ArrayList<>();
            for (int i = 1; i < n; i++) {
                  if (arr[i] - arr[i - 1] == minDiff) {
                        res.add(Arrays.asList(arr[i - 1], arr[i]));
                  }
            }

            return res;
      }
}
