//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 885

//? ⌚ Time complexity ➺ O(r * c) 👉🏻  r = rows, c = cols

//? 🧺 Space complexity ➺ O(1)

import java.util.ArrayList;
import java.util.List;

class Solution {
      public int[][] spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
            // direction : A list of directions to move in the matrix
            // represents moving right, down, left, and up
            int[][] directions = { { 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 } };

            List<int[]> grid = new ArrayList<>();
            // track the current row and column
            int row = rStart, col = cStart;

            // A variable to control the number of steps to move in the current direction.
            // Initialized to 1 and incremented after completing a cycle of directions.
            int steps = 1;
            // i keep track of the current direction.
            int i = 0;

            while (grid.size() < rows * cols) {
                  // iterates twice for each cycle to account for the spiral nature
                  // (e.g., move right then down, then increase the steps and move left then up)
                  for (int x = 0; x < 2; x++) {
                        // `dr, dc` with the current direction to move.
                        int dr = directions[i][0], dc = directions[i][1];
                        // loop moving the specified `steps` in the current direction.
                        for (int y = 0; y < steps; y++) {
                              // within the bounds of the matrix, append the `[row, col]`
                              if (0 <= row && row < rows && 0 <= col && col < cols) {
                                    grid.add(new int[] { row, col });
                              }

                              // Update `row` and `col` for the next position.
                              row += dr;
                              col += dc;
                        }

                  // After completing steps in two directions,
                        // update `i` to change the direction
                        i = (i + 1) % 4;
                  }

                  // increment `steps` for the next cycle of movements.
                  steps++;
            }

            return grid.toArray(new int[grid.size()][]);
      }
}
