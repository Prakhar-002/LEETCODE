//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 90

//? ⌚ Time complexity ➺ O(n * 2 ^ n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public List<List<Integer>> subsetsWithDup(int[] nums) {
            // Sort the array so that duplicates are next to each other
            Arrays.sort(nums);

            List<List<Integer>> res = new ArrayList<>(); // Final list of all unique subsets
            List<Integer> subset = new ArrayList<>(); // Temporary current subset

            // Start the backtracking process from index 0
            backtrack(0, nums, subset, res);

            return res;
      }

      private void backtrack(int i, int[] nums, List<Integer> subset, List<List<Integer>> res) {
            // ------------------------------------------------------
            // Base Case: If we have reached the end of the array
            // append a COPY of the current subset to the results.
            // ------------------------------------------------------
            if (i >= nums.length) {
                  res.add(new ArrayList<>(subset)); // Must add a copy
                  return;
            }

            // ------------------------------------------------------
            // Decision 1: Include nums[i] in the current subset
            // ------------------------------------------------------
            subset.add(nums[i]); // Add current element
            backtrack(i + 1, nums, subset, res); // Recurse to next index
            subset.remove(subset.size() - 1); // Backtrack (remove last element)

            // ------------------------------------------------------
            // Skip over duplicate elements to avoid duplicate subsets
            // ------------------------------------------------------
            while (i + 1 < nums.length && nums[i] == nums[i + 1]) {
                  i++;
            }

            // ------------------------------------------------------
            // Decision 2: Exclude nums[i] and move to the next unique element
            // ------------------------------------------------------
            backtrack(i + 1, nums, subset, res);
      }
}
