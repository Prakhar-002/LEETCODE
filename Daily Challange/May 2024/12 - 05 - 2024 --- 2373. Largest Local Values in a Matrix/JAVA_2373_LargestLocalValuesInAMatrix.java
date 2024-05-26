class Solution {

      public int giveMaxValue(int[][] grid, int row, int col) {
            int maxValue = 0;

            for (int i = row; i < row + 3; i++) {
                  for (int j = col; j < col + 3; j++) {
                        maxValue = Math.max(maxValue, grid[i][j]);
                  }
            }

            return maxValue;
      }

      public int[][] largestLocal(int[][] grid) {
            int n = grid.length - 2;

            // Making a submit Array of (n - 2) x (n - 2)
            int[][] subArr = new int[n][n];

            for (int i = 0; i < n; i++) {
                  for (int j = 0; j < n; j++) {
                        // Every element of submit array will give by this fun
                        subArr[i][j] = giveMaxValue(grid, i, j);
                  }
            }

            return subArr;
      }
}