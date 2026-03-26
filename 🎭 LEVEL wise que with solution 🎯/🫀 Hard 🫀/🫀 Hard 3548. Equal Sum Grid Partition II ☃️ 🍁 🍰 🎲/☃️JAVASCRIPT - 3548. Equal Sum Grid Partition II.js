//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3548

// ? ⌚ Time complexity ➺ O(n * m)

// ? 🧺 Space complexity ➺ O(n * m)

var canPartitionGrid = function (grid) {
      let total = 0;
      const m = grid.length;
      const n = grid[0].length;

      // ---------- Check if any horizontal cut yields equal halves ----------
      function checkHorCuts(grid) {
            const rows = grid.length;
            const cols = grid[0].length;
            const seen = new Set();
            let top = 0;

            for (let i = 0; i < rows - 1; i++) {
                  for (let j = 0; j < cols; j++) {
                        seen.add(grid[i][j]);
                        top += grid[i][j];
                  }

                  const bottom = total - top;
                  const diff = top - bottom;

                  // Exact equal split
                  if (diff === 0)
                        return true;
                  // Diff matches a corner or edge value (boundary adjustment check)
                  if (diff === grid[0][0])
                        return true;
                  if (diff === grid[0][cols - 1])
                        return true;
                  if (diff === grid[i][0])
                        return true;
                  // Diff matches any previously seen value (non-first row, multi-col)
                  if (i > 0 && cols > 1 && seen.has(diff))
                        return true;
            }

            return false;
      }

      // ---------- Reverse rows of grid in-place ----------
      function reverseGrid(grid) {
            let top = 0, bottom = grid.length - 1;
            while (top < bottom) {
                  [grid[top], grid[bottom]] = [grid[bottom], grid[top]];
                  top++;
                  bottom--;
            }
      }

      // ---------- Compute grand total ----------
      for (let i = 0; i < m; i++)
            for (let j = 0; j < n; j++)
                  total += grid[i][j];

      // ---------- Horizontal cuts (top-down) ----------
      if (checkHorCuts(grid))
            return true;

      // ---------- Horizontal cuts (bottom-up via reverse) ----------
      reverseGrid(grid);
      if (checkHorCuts(grid))
            return true;
      reverseGrid(grid);    // restore original orientation

      // ---------- Build transpose for vertical cut checks ----------
      const transposeGrid = Array.from({ length: n }, () => new Array(m).fill(0));
      for (let i = 0; i < m; i++)
            for (let j = 0; j < n; j++)
                  transposeGrid[j][i] = grid[i][j];

      // ---------- Vertical cuts (left-to-right) ----------
      if (checkHorCuts(transposeGrid))
            return true;

      // ---------- Vertical cuts (right-to-left via reverse) ----------
      reverseGrid(transposeGrid);
      return checkHorCuts(transposeGrid);
};