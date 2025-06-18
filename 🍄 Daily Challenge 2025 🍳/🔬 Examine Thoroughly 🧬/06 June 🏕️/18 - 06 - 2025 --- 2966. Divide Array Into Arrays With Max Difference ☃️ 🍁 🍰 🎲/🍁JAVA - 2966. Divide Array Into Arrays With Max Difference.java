//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2966

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public int[][] divideArray(int[] nums, int k) {
            // Step 1: Sort the array so that elements close in value are grouped together
            Arrays.sort(nums);

            int n = nums.length;
            // Since every group has 3 elements, total groups = n / 3
            int[][] res = new int[n / 3][3];
            int idx = 0;

            // Step 2: Iterate through the sorted array in steps of 3
            for (int i = 0; i < n; i += 3) { 
                  // Step 3: Check if this group of 3 elements is valid
                  // A group is valid if max - min <= k
                  if (nums[i + 2] - nums[i] > k) {
                        return new int[0][0]; // Invalid group found, return empty array
                  }

                  // Step 4: Store the valid triplet in the result
                  res[idx][0] = nums[i];
                  res[idx][1] = nums[i + 1];
                  res[idx][2] = nums[i + 2];
                  idx++;
            }

            return res; // Step 5: Return all valid triplets
      }
}
