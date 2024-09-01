//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2022

//? ⌚ Time complexity ➺ O(n * m) 

//? 🧺 Space complexity ➺ O(1)

class Solution {
      // `m`: An integer representing the number of rows desired in the 2D array
      // `n`: An integer representing the number of columns desired in the 2D array
      public int[][] construct2DArray(int[] original, int m, int n) {
            // if the total number of elements in `original` doesn't match the dimensions (`m * n`)
            if (original.length != m * n) {
                  // return an empty array
                  // indicating that it's not possible to construct a 2D array with the given dimensions from `original`
                  return new int[0][0];
            }

            // Initialize a 2D array with the correct dimensions
            int[][] twoDimArray = new int[m][n];

            // iterates over each index `i` in the `original` array
            for (int i = 0; i < original.length; i++) {
                  // `row` is calculated by `i / n` which is integer division,
                  // ensuring that `row` will increase by `1` after every `n` iterations
                  int row = i / n;

                  // The column index `col` is calculated by `i % n`, which is the remainder of the division by `n`.
                  // This ensures that `col` cycles through `0` to `n-1` as `i` increases,
                  int col = i % n;

                  // populate 2D array
                  twoDimArray[row][col] = original[i];
            }

            // Return the populated 2D array
            return twoDimArray;
      }
}
