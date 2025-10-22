//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3397

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var maxDistinctElements = function (nums, k) {
      nums.sort((a, b) => a - b);

      let count = 0;        // Counts maximum distinct elements assignable
      let prev = -Infinity; // Last assigned distinct value

      for (const num of nums) {
            // Compute feasible assigned value within allowed range and distinctness constraint
            let curr = Math.min(Math.max(num - k, prev + 1), num + k);

            if (curr > prev) {
                  count++;
                  prev = curr;  // Update last assigned value
            }
      }

      return count;
};
