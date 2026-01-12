//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L5 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(rectangle)

//? 🧺 Space complexity ➺ O(n)

class SubrectangleQueries {
      /**
       * LeetCode 1476. Subrectangle Queries
       * Direct matrix modification approach (works within constraints)
       */
      private int[][] rectangle;

      /**
       * Deep copy constructor to prevent external modification
       * Time: O(rows * cols), Space: O(rows * cols)
       */
      public SubrectangleQueries(int[][] rectangle) {
            // Create defensive copy
            int rows = rectangle.length;
            int cols = rectangle[0].length;
            this.rectangle = new int[rows][cols];

            // Copy each row using System.arraycopy for efficiency
            for (int i = 0; i < rows; i++) {
                  System.arraycopy(rectangle[i], 0, this.rectangle[i], 0, cols);
            }
      }

      /**
       * Update subrectangle [row1..row2][col1..col2] to newValue
       * Time: O((row2-row1+1) * (col2-col1+1)) per update
       */
      public void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
            // Direct modification of all cells in subrectangle
            for (int i = row1; i <= row2; i++) {
                  for (int j = col1; j <= col2; j++) {
                        rectangle[i][j] = newValue;
                  }
            }
      }

      /**
       * Get current value at position (row, col)
       * Time: O(1)
       */
      public int getValue(int row, int col) {
            return rectangle[row][col];
      }
}
