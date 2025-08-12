//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 90

//? ⌚ Time complexity ➺ O(n * 2 ^ n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var subsetsWithDup = function (nums) {
      // Sort the array so duplicates are next to each other
      nums.sort((a, b) => a - b);

      let res = [];    // Final list of all unique subsets
      let subset = []; // Temporary current subset

      function backtrack(i) {
            // ------------------------------------------------------
            // Base Case:
            // If we've processed all indices,
            // add a COPY of the current subset to results.
            // ------------------------------------------------------
            if (i >= nums.length) {
                  res.push([...subset]); // Spread to clone
                  return;
            }

            // ------------------------------------------------------
            // Decision 1: Include nums[i] in the current subset
            // ------------------------------------------------------
            subset.push(nums[i]);  // Add current element
            backtrack(i + 1);      // Move to next index
            subset.pop();          // Backtrack to remove last added element

            // ------------------------------------------------------
            // Skip over duplicate elements to avoid duplicate subsets
            // ------------------------------------------------------
            while (i + 1 < nums.length && nums[i] === nums[i + 1]) {
                  i++;
            }

            // ------------------------------------------------------
            // Decision 2: Exclude nums[i] and move to the next unique number
            // ------------------------------------------------------
            backtrack(i + 1);
      }

      // Start backtracking from index 0
      backtrack(0);

      return res;
};
