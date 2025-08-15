//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 417

//? ⌚ Time complexity ➺ O(m * n)

//? 🧺 Space complexity ➺ O(m * n)

import java.util.*;

class Solution {
      public List<List<Integer>> pacificAtlantic(int[][] heights) {
            int ROWS = heights.length, COLS = heights[0].length;
            Set<String> pac = new HashSet<>(); // Cells reachable from Pacific
            Set<String> atl = new HashSet<>(); // Cells reachable from Atlantic

            // ----------------------------------------------------------
            // DFS function to mark reachable cells from a given ocean
            // ----------------------------------------------------------
            // We’ll implement as a separate method below

            // ----------------------------------------------------------
            // Step 1: DFS from Pacific (top row, left col) and Atlantic (bottom row, right
            // col)
            // ----------------------------------------------------------
            for (int c = 0; c < COLS; c++) {
                  dfs(0, c, pac, heights[0][c], heights, ROWS, COLS); // Top row → Pacific
                  dfs(ROWS - 1, c, atl, heights[ROWS - 1][c], heights, ROWS, COLS); // Bottom row → Atlantic
            }
            for (int r = 0; r < ROWS; r++) {
                  dfs(r, 0, pac, heights[r][0], heights, ROWS, COLS); // Left col → Pacific
                  dfs(r, COLS - 1, atl, heights[r][COLS - 1], heights, ROWS, COLS); // Right col → Atlantic
            }

            // ----------------------------------------------------------
            // Step 2: Intersection of Pacific and Atlantic reachable cells
            // ----------------------------------------------------------
            List<List<Integer>> res = new ArrayList<>();
            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        String key = r + "," + c;
                        if (pac.contains(key) && atl.contains(key)) {
                              res.add(Arrays.asList(r, c));
                        }
                  }
            }
            return res;
      }

      private void dfs(int r, int c, Set<String> visit, int prevHeight,
                  int[][] heights, int ROWS, int COLS) {
            // Check boundaries, visited set, and non-decreasing height condition
            if (r < 0 || c < 0 || r >= ROWS || c >= COLS ||
                        visit.contains(r + "," + c) || heights[r][c] < prevHeight) {
                  return;
            }
            visit.add(r + "," + c);
            // DFS in 4 directions
            dfs(r + 1, c, visit, heights[r][c], heights, ROWS, COLS);
            dfs(r - 1, c, visit, heights[r][c], heights, ROWS, COLS);
            dfs(r, c + 1, visit, heights[r][c], heights, ROWS, COLS);
            dfs(r, c - 1, visit, heights[r][c], heights, ROWS, COLS);
      }
}
