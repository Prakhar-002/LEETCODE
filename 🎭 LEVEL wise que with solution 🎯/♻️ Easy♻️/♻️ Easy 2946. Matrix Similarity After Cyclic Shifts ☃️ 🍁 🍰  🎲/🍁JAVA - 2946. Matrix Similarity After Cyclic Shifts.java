//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2946

// ? ⌚ Time complexity ➺ O(n * m) 

// ? 🧺 Space complexity ➺ O(n * m)

class Solution { 
      public boolean areSimilar(int[][] mat, int k) {
            int m = mat.length; // Number of rows
            int n = mat[0].length; // Number of columns
            k = k % n; // Normalize k

            for (int i = 0; i < m; i++) {
                  for (int j = 0; j < n; j++) {
                        int finalIdx;
                        // Even rows shift left, Odd rows shift right
                        if (i % 2 == 0) {
                              finalIdx = (j + k) % n;
                        } else {
                              // Adding n before modulo handles negative results in Java
                              finalIdx = (j - k + n) % n;
                        }

                        // Check if original and shifted positions hold the same value
                        if (mat[i][j] != mat[i][finalIdx]) {
                              return false;
                        }
                  }
            }

            return true;
      }
}