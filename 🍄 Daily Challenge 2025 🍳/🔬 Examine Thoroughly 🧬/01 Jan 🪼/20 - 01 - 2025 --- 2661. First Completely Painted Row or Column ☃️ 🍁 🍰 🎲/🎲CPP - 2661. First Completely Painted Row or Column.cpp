//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2661

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(mat)

//? 🧺 Space complexity ➺ O(n * m)👉🏻  m = len(mat[0])

#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
      public:
            int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
                  // Determine the number of rows and columns in the matrix
                  int ROWS = mat.size();
                  int COLS = mat[0].size();

                  // Create a map to store each matrix element's position (row, column)
                  unordered_map<int, pair<int, int>> matToPos;

                  // Populate the map with matrix element positions
                  for (int r = 0; r < ROWS; r++) {
                        for (int c = 0; c < COLS; c++) {
                              matToPos[mat[r][c]] = {r, c};
                        }
                  }

                  // Initialize counters for rows and columns to track painted cells
                  vector<int> rowCount(ROWS, 0);
                  vector<int> colCount(COLS, 0);

                  // Iterate through the `arr` elements
                  for (int i = 0; i < arr.size(); i++) {
                        // Get the position (row, column) of the current element in the matrix
                        auto [r, c] = matToPos[arr[i]];

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
};
