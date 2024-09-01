//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2022

//? ⌚ Time complexity ➺ O(n * m) 

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      // `m`: An integer representing the number of rows desired in the 2D array
      // `n`: An integer representing the number of columns desired in the 2D array
      vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
            // if the total number of elements in `original` doesn't match the dimensions (`m * n`)
            if (original.size() != m * n) {
                  // return an empty vector
                  // indicating that it's not possible to construct a 2D array with the given dimensions from `original`
                  return {};
            }

            // Initialize a 2D vector with the correct dimensions
            vector<vector<int>> twoDimArray(m, vector<int>(n, 0));

            // iterates over each index `i` in the `original` vector
            for (int i = 0; i < original.size(); ++i) {
                  // `row` is calculated by `i / n` which is integer division, 
                  // ensuring that `row` will increase by `1` after every `n` iterations
                  int row = i / n;

                  // The column index `col` is calculated by `i % n`, which is the remainder of the division by `n`. 
                  // This ensures that `col` cycles through `0` to `n-1` as `i` increases, 
                  int col = i % n;

                  // populate 2D vector
                  twoDimArray[row][col] = original[i];
            }

            // Return the populated 2D vector
            return twoDimArray;
      }
};

