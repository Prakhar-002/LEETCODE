//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2089

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

class Solution {
      public List<Integer> targetIndices(int[] nums, int target) {
            // Sort array in non-decreasing order
            Arrays.sort(nums);

            List<Integer> res = new ArrayList<>();

            // Iterate through the sorted array to find matching target indices
            for (int i = 0; i < nums.length; i++) {
                  if (nums[i] == target) {
                        res.add(i);
                  }
            }

            return res;
      }
}