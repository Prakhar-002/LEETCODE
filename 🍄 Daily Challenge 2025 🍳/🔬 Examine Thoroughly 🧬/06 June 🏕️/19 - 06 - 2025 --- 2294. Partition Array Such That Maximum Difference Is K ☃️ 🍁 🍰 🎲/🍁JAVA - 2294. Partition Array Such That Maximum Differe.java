//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2294

//? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public int partitionArray(int[] nums, int k) {
            // Sort the array to process elements in non-decreasing order
            Arrays.sort(nums);

            // Pointer to traverse the array
            int i = 0;

            // Counter for the number of subsequences
            int subsequence = 0;

            // Iterate through the array to form subsequences
            while (i < nums.length) {
                  // Start a new subsequence from the current index
                  int index = i;

                  // Extend the subsequence as long as the difference between
                  // the current element and the first element in the subsequence is <= k
                  while (i < nums.length && nums[index] + k >= nums[i]) {
                        i++;
                  }

                  // Increment the count of subsequences
                  subsequence++;
            }

            return subsequence;
      }
}