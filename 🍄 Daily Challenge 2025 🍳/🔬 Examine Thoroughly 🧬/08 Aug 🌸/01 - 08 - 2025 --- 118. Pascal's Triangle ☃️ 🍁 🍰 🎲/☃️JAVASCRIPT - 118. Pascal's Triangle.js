//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 118

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * n)

var generate = function (numRows) {
      // Initialize result with the first row [1]
      const res = [[1]];

      // Generate rows 2 to numRows
      for (let i = 1; i < numRows; i++) {
            const prev = res[i - 1];
            const row = [];

            // First element is always 1
            row.push(1);

            // Compute middle values by summing adjacent elements
            for (let j = 1; j < prev.length; j++) {
                  row.push(prev[j - 1] + prev[j]);
            }

            // Last element is also 1
            row.push(1);

            // Add row to result
            res.push(row);
      }

      return res;
};
