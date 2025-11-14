//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2536

// ? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(n ^ 2)

function rangeAddQueries(n, queries) {
      // Initialize difference matrix with extra row and column
      const diff = Array.from({ length: n + 1 }, () => Array(n + 1).fill(0));

      // Apply difference array increments and decrements based on queries
      for (const [row1, col1, row2, col2] of queries) {
            diff[row1][col1] += 1;              // Start increment
            diff[row2 + 1][col1] -= 1;          // Cancel increment after bottom edge
            diff[row1][col2 + 1] -= 1;          // Cancel increment after right edge
            diff[row2 + 1][col2 + 1] += 1;      // Restore overlap correction
      }

      // Build final matrix by prefix summation and inclusion-exclusion
      const mat = Array.from({ length: n }, () => Array(n).fill(0));
      for (let i = 0; i < n; i++) {
            for (let j = 0; j < n; j++) {
                  const x1 = i === 0 ? 0 : mat[i - 1][j];
                  const x2 = j === 0 ? 0 : mat[i][j - 1];
                  const x3 = (i === 0 || j === 0) ? 0 : mat[i - 1][j - 1];
                  mat[i][j] = diff[i][j] + x1 + x2 - x3;
            }
      }

      return mat;  // Return updated matrix after all queries
}
