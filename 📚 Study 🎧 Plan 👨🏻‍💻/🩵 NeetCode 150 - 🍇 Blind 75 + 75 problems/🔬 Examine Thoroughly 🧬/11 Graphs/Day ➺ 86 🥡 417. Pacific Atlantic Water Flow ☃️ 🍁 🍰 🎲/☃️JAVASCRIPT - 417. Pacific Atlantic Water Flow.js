//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 417

//? ⌚ Time complexity ➺ O(m * n)

//? 🧺 Space complexity ➺ O(m * n)

var pacificAtlantic = function (heights) {
      const ROWS = heights.length, COLS = heights[0].length;
      const pac = new Set(); // Pacific reachable
      const atl = new Set(); // Atlantic reachable

      // ----------------------------------------------------------
      // DFS function to mark reachable cells from a given ocean
      // ----------------------------------------------------------
      function dfs(r, c, visit, prevHeight) {
            // Check boundaries, visited set, and non-decreasing height condition
            if (r < 0 || c < 0 || r >= ROWS || c >= COLS ||
                  visit.has(r + "," + c) || heights[r][c] < prevHeight) {
                  return;
            }
            visit.add(r + "," + c);
            // DFS in 4 directions
            dfs(r + 1, c, visit, heights[r][c]);
            dfs(r - 1, c, visit, heights[r][c]);
            dfs(r, c + 1, visit, heights[r][c]);
            dfs(r, c - 1, visit, heights[r][c]);
      }

      // ----------------------------------------------------------
      // Step 1: DFS from Pacific (top row, left col) and Atlantic (bottom row, right col)
      // ----------------------------------------------------------
      for (let c = 0; c < COLS; c++) {
            dfs(0, c, pac, heights[0][c]);
            dfs(ROWS - 1, c, atl, heights[ROWS - 1][c]);
      }
      for (let r = 0; r < ROWS; r++) {
            dfs(r, 0, pac, heights[r]);
            dfs(r, COLS - 1, atl, heights[r][COLS - 1]);
      }

      // ----------------------------------------------------------
      // Step 2: Intersection of Pacific and Atlantic reachable cells
      // ----------------------------------------------------------
      const res = [];
      for (let r = 0; r < ROWS; r++) {
            for (let c = 0; c < COLS; c++) {
                  if (pac.has(r + "," + c) && atl.has(r + "," + c)) {
                        res.push([r, c]);
                  }
            }
      }
      return res;
};
