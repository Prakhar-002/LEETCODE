//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3548

// ? ⌚ Time complexity ➺ O(n * m)

// ? 🧺 Space complexity ➺ O(n * m)

import java.util.HashSet;

class Solution {
      long total = 0;

      // ---------- Check if any horizontal cut yields equal halves ----------
      public boolean checkHorCuts(int[][] grid) {
            int m = grid.length;
            int n = grid[0].length;
            HashSet<Long> set = new HashSet<>();
            long top = 0;

            for (int i = 0; i < m - 1; i++) {
                  for (int j = 0; j < n; j++) {
                        set.add((long) grid[i][j]);
                        top += grid[i][j];
                  }

                  long bottom = total - top;
                  long diff = top - bottom;

                  // Exact equal split
                  if (diff == 0)
                        return true;
                  // Diff matches a corner or edge value (boundary adjustment check)
                  if (diff == grid[0][0])
                        return true;
                  if (diff == grid[0][n - 1])
                        return true;
                  if (diff == grid[i][0])
                        return true;
                  // Diff matches any previously seen value (non-first row, multi-col)
                  if (i > 0 && n > 1 && set.contains(diff))
                        return true;
            }

            return false;
      }

      // ---------- Reverse rows of grid in-place ----------
      private void reverse(int[][] grid) {
            int top = 0, bottom = grid.length - 1;
            while (top < bottom) {
                  int[] temp = grid[top];
                  grid[top] = grid[bottom];
                  grid[bottom] = temp;
                  top++;
                  bottom--;
            }
      }

      public boolean canPartitionGrid(int[][] grid) {
            int m = grid.length;
            int n = grid[0].length;

            // ---------- Compute grand total ----------
            for (int i = 0; i < m; i++)
                  for (int j = 0; j < n; j++)
                        total += grid[i][j];

            // ---------- Horizontal cuts (top-down) ----------
            if (checkHorCuts(grid))
                  return true;

            // ---------- Horizontal cuts (bottom-up via reverse) ----------
            reverse(grid);
            if (checkHorCuts(grid))
                  return true;
            reverse(grid); // restore original orientation

            // ---------- Build transpose for vertical cut checks ----------
            int[][] transposeGrid = new int[n][m];
            for (int i = 0; i < m; i++)
                  for (int j = 0; j < n; j++)
                        transposeGrid[j][i] = grid[i][j];

            // ---------- Vertical cuts (left-to-right) ----------
            if (checkHorCuts(transposeGrid))
                  return true;

            // ---------- Vertical cuts (right-to-left via reverse) ----------
            reverse(transposeGrid);
            return checkHorCuts(transposeGrid);
      }
} 