//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1605

//? ⌚ Time complexity -> O(n * m) 👉 N = Rows, M = columns

//? 🧺 Space complexity -> O(n * m) 👉 Making return Matrix 

class Solution {
      public int[][] restoreMatrix(int[] rowSum, int[] colSum) {
            int[][] matrix = new int[rowSum.length][colSum.length];
            int r = 0, c = 0;

            while (r < rowSum.length && c < colSum.length) {
                  // first assign then min of row's or col's index sum
                  matrix[r][c] = Math.min(rowSum[r], colSum[c]);

                  // if both are equal move to the next row col
                  if (rowSum[r] == colSum[c]) {
                        r++;
                        c++;
                  } 
                  // if row's sum is greater
                  else if (rowSum[r] > colSum[c]) {
                        // sub the col's sum and move to next col
                        rowSum[r] -= colSum[c];
                        c++;
                  } 
                  // if  col's sum is greater
                  else {
                        // sub the row's sum and move to next row
                        colSum[c] -= rowSum[r];
                        r++;
                  }
            }

            return matrix;
      }
}
