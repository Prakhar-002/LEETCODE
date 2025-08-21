//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1504

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var numSubmat = function (mat) {
      const rows = mat.length, cols = mat[0].length;
      // heights[c]: consecutive 1s height ending at current row for column c
      const heights = new Array(cols).fill(0);
      let res = 0;

      for (let r = 0; r < rows; r++) {
            // Update histogram heights for this row
            for (let c = 0; c < cols; c++) {
                  heights[c] = (mat[r][c] === 0) ? 0 : heights[c] + 1;
            }

            // Monotonic stack entries: [index j, cumulative count up to j, height at j]
            // Sentinel: j = -1, cumulative = 0, height = -1
            const stack = [[-1, 0, -1]];

            // For each column, compute number of all-1 submatrices ending at this row and at column c
            for (let c = 0; c < cols; c++) {
                  const h = heights[c];

                  // Maintain increasing heights
                  while (stack[stack.length - 1][2] >= h) {
                        stack.pop();
                  }

                  // Top: (j, prev, hj) where hj < h
                  const [j, prev] = stack[stack.length - 1];

                  // cur = total submatrices ending at this row with right boundary at c
                  const cur = prev + (c - j) * h;

                  // Push current state and accumulate
                  stack.push([c, cur, h]);
                  res += cur;
            }
      }
      return res;
};
