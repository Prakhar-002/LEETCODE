//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2044

//? ⌚ Time complexity ➺ O(2^n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      private int res = 0;
      private int max_or = 0;

      public int countMaxOrSubsets(int[] nums) {
            // Compute the OR value for the entire array
            for (int num : nums) {
                  max_or |= num;
            }

            // Start the DFS from the 0th index with an OR value of 0
            dfs(nums, 0, 0);
            return res;
      }

      // Depth-first search (DFS) helper function
      private void dfs(int[] nums, int i, int cur_or) {
            // Base case: if we've considered all elements
            if (i == nums.length) {
                  // Increment the result if current OR equals the max OR
                  res += (cur_or == max_or) ? 1 : 0;
                  return;
            }

            // Recursively explore two cases: skipping the current element
            dfs(nums, i + 1, cur_or);

            // Including the current element in the OR operation
            dfs(nums, i + 1, cur_or | nums[i]);
      }
}
