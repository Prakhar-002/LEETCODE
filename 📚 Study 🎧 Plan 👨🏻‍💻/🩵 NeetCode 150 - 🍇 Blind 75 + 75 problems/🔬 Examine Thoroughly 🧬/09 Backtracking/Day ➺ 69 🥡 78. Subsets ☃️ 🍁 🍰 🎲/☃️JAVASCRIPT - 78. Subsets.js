//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 78

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var subsets = function (nums) {
      // Final list to store all subsets
      let res = [];
      // Temporary list to store the current subset during building
      let subset = [];

      function dfs(i) {
            // ----------------------------------------------------------
            // Base Case:
            // When index i reaches nums.length,
            // push a copy of current subset into the results and return.
            // ----------------------------------------------------------
            if (i >= nums.length) {
                  res.push([...subset]); // Copy to avoid mutation
                  return;
            }

            // ----------------------------------------------------------
            // Decision 1: Include nums[i] in the current subset
            // ----------------------------------------------------------
            subset.push(nums[i]);   // Add current element
            dfs(i + 1);             // Move to next index

            // ----------------------------------------------------------
            // Decision 2: Exclude nums[i] (Backtrack)
            // ----------------------------------------------------------
            subset.pop();           // Remove last element added
            dfs(i + 1);             // Move to next index
      }

      // Start DFS recursion from index 0
      dfs(0);

      // Return all generated subsets
      return res;
};
