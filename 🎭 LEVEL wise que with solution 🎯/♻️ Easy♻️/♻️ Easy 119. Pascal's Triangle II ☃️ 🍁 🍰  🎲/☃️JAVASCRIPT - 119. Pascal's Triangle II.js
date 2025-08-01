//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 119

//? ⌚ Time complexity ➺ O(rowIdx * 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var getRow = function (rowIndex) {
      // Start with the first row [1]
      let res = [1];

      // Build rows up to the given index
      for (let i = 0; i < rowIndex; i++) {
            // Initialize next row with 0s of length +1
            const next = new Array(res.length + 1).fill(0);

            // Fill the next row using current row values
            for (let j = 0; j < res.length; j++) {
                  next[j] += res[j];
                  next[j + 1] += res[j];
            }

            // Move to the next row
            res = next;
      }

      return res;
};
