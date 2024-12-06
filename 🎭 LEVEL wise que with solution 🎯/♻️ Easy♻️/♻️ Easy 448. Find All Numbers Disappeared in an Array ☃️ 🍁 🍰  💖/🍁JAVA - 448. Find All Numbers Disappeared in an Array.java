//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 448

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.ArrayList;
import java.util.List;

class Solution {
      public List<Integer> findDisappearedNumbers(int[] nums) {
            // Initialize the result list to store missing numbers
            List<Integer> res = new ArrayList<>();

            // Iterate over the input array to mark the presence of numbers
            for (int n : nums) {
                  // Compute the index corresponding to the absolute value of the number
                  int i = Math.abs(n) - 1;
                  // If the number at the computed index is positive, mark it as negative
                  if (nums[i] > 0) {
                        nums[i] = -nums[i];
                  }
            }

            // Iterate over the modified array to find missing numbers
            for (int i = 0; i < nums.length; i++) {
                  // If a number is positive, its index + 1 is missing in the input
                  if (nums[i] > 0) {
                        res.add(i + 1);
                  }
            }

            // Return the list of missing numbers
            return res;
      }
}