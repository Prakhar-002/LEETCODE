//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2906

//? ⌚ Time complexity ➺ O(ROWS * COLS)

//? 🧺 Space complexity ➺ O(ROWS * COLS)

class Solution {
      public int[][] constructProductMatrix(int[][] grid) {
            int MOD = 12345;
            int n   = grid.length;
            int m   = grid[0].length;

            // Result product matrix
            int[][] product = new int[n][m];

            // ---------- Pass 1 (Right to Left, Bottom to Top): fill suffix products ----------
            // product[i][j] = product of all elements AFTER (i,j) in row-major order
            long suffix = 1L;

            for (int i = n - 1; i >= 0; i--) {
                  for (int j = m - 1; j >= 0; j--) {
                        product[i][j] = (int) suffix;
                        suffix  = (suffix * grid[i][j]) % MOD;
                  }
            }

            // ---------- Pass 2 (Left to Right, Top to Bottom): multiply prefix products ----------
            // product[i][j] *= product of all elements BEFORE (i,j) in row-major order
            long prefix = 1L;

            for (int i = 0; i < n; i++) {
                  for (int j = 0; j < m; j++) {
                        product[i][j] = (int) ((prefix * product[i][j]) % MOD);
                        prefix  = (prefix * grid[i][j]) % MOD;
                  }
            }

            return product;
      }
}