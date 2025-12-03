//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L4.1 Q2

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public int reductionOperations(int[] nums) {
            int n = nums.length;

            // Sort the array so that equal elements are adjacent and values are non-decreasing
            Arrays.sort(nums);

            int operations = 0;  // Total number of reduction operations

            // Start from index 1 and compare with previous element
            for (int i = 1; i < n; i++) {
                  // When a new distinct value appears at index i,
                  // all elements from i to n-1 are strictly larger than the minimum
                  // and each will need one additional operation level.
                  if (nums[i] != nums[i - 1]) {
                        operations += n - i;
                  }
            }

            return operations;
      }
}
