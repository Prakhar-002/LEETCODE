//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 78

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*; 

class Solution {
      public List<List<Integer>> subsets(int[] nums) {
            // Final list to store all subsets
            List<List<Integer>> res = new ArrayList<>();
            // Temporary list to store current subset while building
            List<Integer> subset = new ArrayList<>();

            // Start DFS from index 0
            dfs(0, nums, subset, res);

            // Return all generated subsets
            return res;
      }

      private void dfs(int i, int[] nums, List<Integer> subset, List<List<Integer>> res) {
            // ----------------------------------------------------------
            // Base Case:
            // When index i reaches nums.length,
            // add a copy of the current subset to results and return.
            // ----------------------------------------------------------
            if (i >= nums.length) {
                  res.add(new ArrayList<>(subset)); // Append copy to avoid reference issues
                  return;
            }

            // ----------------------------------------------------------
            // Decision 1: Include nums[i] in the current subset
            // ----------------------------------------------------------
            subset.add(nums[i]); // Take current element
            dfs(i + 1, nums, subset, res); // Move to next index

            // ----------------------------------------------------------
            // Decision 2: Exclude nums[i] (Backtrack)
            // ----------------------------------------------------------
            subset.remove(subset.size() - 1); // Remove last added element
            dfs(i + 1, nums, subset, res); // Move to next index
      }
}
