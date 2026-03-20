//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3567

//? ⌚ Time complexity ➺ O((m-k+1) * (n-k+1) * k^2 * log(k^2)) 👉🏻 sorting unique values per subMatrix

//? 🧺 Space complexity ➺ O(k^2) 👉🏻 storing unique values for each subMatrix

var minAbsDiff = function (grid, k) {
      const ROWS = grid.length;
      const COLS = grid[0].length;

      // Result matrix dimensions shrink by k-1 on each side
      const res = Array.from(
            { length: ROWS - k + 1 },
            () => new Array(COLS - k + 1).fill(0)
      );

      for (let i = 0; i <= ROWS - k; i++) {
            for (let j = 0; j <= COLS - k; j++) {

                  // ---------- Collect unique values in k×k submatrix ----------
                  const values = new Set();
                  for (let x = i; x < i + k; x++) {
                        for (let y = j; y < j + k; y++) {
                              values.add(grid[x][y]);
                        }
                  }

                  // ---------- Convert to sorted array for indexed access ----------
                  const arr = [...values].sort((a, b) => a - b);

                  // If only 1 unique value, min diff is 0
                  if (arr.length <= 1) {
                        res[i][j] = 0;
                        continue;
                  }

                  // ---------- Find minimum difference between adjacent values ----------
                  let minDiff = Infinity;
                  for (let t = 0; t < arr.length - 1; t++) {
                        minDiff = Math.min(minDiff, arr[t + 1] - arr[t]);
                  }

                  res[i][j] = minDiff;
            }
      }

      return res;
};