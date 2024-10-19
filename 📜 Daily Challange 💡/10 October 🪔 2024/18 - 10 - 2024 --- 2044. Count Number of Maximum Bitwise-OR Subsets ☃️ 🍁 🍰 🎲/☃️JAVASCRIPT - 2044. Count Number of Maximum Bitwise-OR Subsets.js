//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2044

//? ⌚ Time complexity ➺ O(2^n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var countMaxOrSubsets = function (nums) {
      // Variable to store the maximum OR value
      let maxOr = 0;

      // Compute the OR value for the entire array
      for (let num of nums) {
            maxOr |= num;
      }

      // Variable to store the count of subsets with OR equal to maxOr
      let res = 0;

      // Depth-first search (DFS) helper function
      const dfs = (i, curOr) => {
            // Base case: if we've considered all elements
            if (i === nums.length) {
                  // Increment the result if current OR equals the max OR
                  res += curOr === maxOr ? 1 : 0;
                  return;
            }

            // Recursively explore two cases: skipping the current element
            dfs(i + 1, curOr);

            // Including the current element in the OR operation
            dfs(i + 1, curOr | nums[i]);
      };

      // Start the DFS from the 0th index with an OR value of 0
      dfs(0, 0);
      return res;
};