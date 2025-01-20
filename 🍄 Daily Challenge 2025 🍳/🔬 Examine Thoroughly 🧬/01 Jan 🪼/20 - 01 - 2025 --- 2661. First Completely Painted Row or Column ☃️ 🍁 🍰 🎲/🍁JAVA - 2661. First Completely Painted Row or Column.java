//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2661

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(mat)

//? 🧺 Space complexity ➺ O(n * m)👉🏻  m = len(mat[0])

import java.util.*;

class Solution {
      public int firstCompleteIndex(int[] arr, int[][] mat) {
            // Determine the number of rows and columns in the matrix
            int ROWS = mat.length;
            int COLS = mat[0].length;

            // Create a map to store each matrix element's position (row, column)
            Map<Integer, int[]> matToPos = new HashMap<>();

            // Populate the map with matrix element positions
            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        matToPos.put(mat[r][c], new int[] {r, c});
                  }
            }

            // Initialize counters for rows and columns to track painted cells
            int[] rowCount = new int[ROWS];
            int[] colCount = new int[COLS];

            // Iterate through the `arr` elements
            for (int i = 0; i < arr.length; i++) {
                  // Get the position (row, column) of the current element in the matrix
                  int[] pos = matToPos.get(arr[i]);
                  int r = pos[0];
                  int c = pos[1];

                  // Increment the counters for the respective row and column
                  rowCount[r]++;
                  colCount[c]++;

                  // Check if the current row or column is completely painted
                  if (rowCount[r] == COLS || colCount[c] == ROWS) {
                        // Return the current index if a row or column is complete
                        return i;
                  }
            }

            // Return -1 if no row or column is completely painted
            return -1;
      }
}
