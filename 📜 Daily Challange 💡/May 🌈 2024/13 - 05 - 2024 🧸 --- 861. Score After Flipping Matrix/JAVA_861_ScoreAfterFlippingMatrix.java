class Solution {

      // grid[0].length == Total Cols (Horizontals)
      // grid.length == Total Rows (Verticals)

      // Flip Row's one to zero and Zero to one
      public void flipRow(int grid[][], int row) {
            for (int j = 0; j < grid[0].length; j++) {
                  // grid[row][j] = grid[row][j] == 0 ? 1 : 0;
                  grid[row][j] = 1 - grid[row][j];
            }
      }

      // Flip col's one to zero and Zero to one
      public void flipCol(int grid[][], int col) {
            for (int i = 0; i < grid.length; i++) {
                  // grid[i][col] = grid[i][col] == 0 ? 1 : 0;
                  grid[i][col] = 1 - grid[i][col];
            }
      }

      // To count No. of one in a col
      public int countOneInCol(int grid[][], int col) {
            int countOne = 0;
            for (int i = 0; i < grid.length; i++) {
                  if (grid[i][col] == 1) {
                        countOne++;
                  }
            }
            return countOne;
      }

      // Method to convert array to a number
      public int convertRowToNum(int row[]) {
            int num = 0;
            for (int i = 0; i < row.length; i++) {
                  num = num * 2 + row[i];
            }

            return num;
      }

      public int matrixScore(int[][] grid) {

            // Ensure first digit of every row is one
            for (int i = 0; i < grid.length; i++) {
                  if (grid[i][0] == 0) {
                        // Convert every row's first no. to one
                        flipRow(grid, i);
                  }
            }

            // Check the every col for no. of one
            for (int j = 1; j < grid[0].length; j++) {
                  int countOneInCol = countOneInCol(grid, j);

                  // If 2 times of 1 is less then total rows in a col
                  if (countOneInCol * 2 < grid.length) {
                        // We flip the col
                        flipCol(grid, j);
                  }
            }

            // Convert every row to binary and add the number

            int totalSum = 0;
            for (int j = 0; j < grid.length; j++) {
                  totalSum += convertRowToNum(grid[j]);
            }

            return totalSum;
      }
}