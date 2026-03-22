//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1886

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(mat)

//? 🧺 Space complexity ➺ O(1)

class Solution {

      // ---------- Transpose: flip matrix along main diagonal ----------
      private void transpose(int[][] mat) {
            for (int i = 0; i < mat.length; i++) {
                  for (int j = i + 1; j < mat.length; j++) {
                        int temp = mat[i][j];
                        mat[i][j] = mat[j][i];
                        mat[j][i] = temp;
                  }
            }
      }

      // ---------- Rotate 90° clockwise: transpose then reverse each row ----------
      private void rotate(int[][] mat) {
            transpose(mat);
            for (int[] row : mat) {
                  int lo = 0, hi = row.length - 1;
                  while (lo < hi) {
                        int temp = row[lo];
                        row[lo] = row[hi];
                        row[hi] = temp;
                        lo++;
                        hi--;
                  }
            }
      }

      // ---------- Compare two matrices element by element ----------
      private boolean equals(int[][] a, int[][] b) {
            for (int i = 0; i < a.length; i++) {
                  for (int j = 0; j < a[0].length; j++) {
                        if (a[i][j] != b[i][j])
                              return false;
                  }
            }
            return true;
      }

      public boolean findRotation(int[][] mat, int[][] target) {
            // Try all 4 rotations (0°, 90°, 180°, 270°)
            for (int r = 0; r < 4; r++) {
                  // Check before rotating so 0° is also tested
                  if (equals(mat, target))
                        return true;

                  // Rotate 90° clockwise for next iteration
                  rotate(mat);
            }

            return false;
      }
}