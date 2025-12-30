
//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 840

//? ⌚ Time complexity ➺ O(r * c) 👉🏻  r = rows, c = cols

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public int numMagicSquaresInside(int[][] grid) {
            int ROWS = grid.length, COLS = grid[0].length; 

            int magicSquares = 0;

            // checking for every possibility
            for (int row = 0; row < ROWS - 2; row++) {
                  for (int col = 0; col < COLS - 2; col++) {
                        magicSquares += isMagic(row, col, grid);
                  }
            }

            return magicSquares;
      }

      private int isMagic(int row, int col, int[][] grid) {
            // Ensure for 1 to 9
            Set<Integer> values = new HashSet<>();
            for (int i = row; i < row + 3; i++) {
                  for (int j = col; j < col + 3; j++) {
                        // if already in values or out of 1 - 9 range
                        if (values.contains(grid[i][j]) || grid[i][j] < 1 || grid[i][j] > 9) {
                              return 0;
                        }
                        // else add to our set
                        values.add(grid[i][j]);
                  }
            }

            // checking every row have sum 15
            for (int i = row; i < row + 3; i++) {
                  if (grid[i][col] + grid[i][col + 1] + grid[i][col + 2] != 15) {
                        return 0;
                  }
            }

            // checking every col have sum 15
            for (int j = col; j < col + 3; j++) {
                  if (grid[row][j] + grid[row + 1][j] + grid[row + 2][j] != 15) {
                        return 0;
                  }
            }

            // checking every diagonals have sum 15
            if (grid[row][col] + grid[row + 1][col + 1] + grid[row + 2][col + 2] != 15 ||
                        grid[row][col + 2] + grid[row + 1][col + 1] + grid[row + 2][col] != 15) {
                  return 0;
            }

            // if everything is right return 1
            return 1;
      }
}
