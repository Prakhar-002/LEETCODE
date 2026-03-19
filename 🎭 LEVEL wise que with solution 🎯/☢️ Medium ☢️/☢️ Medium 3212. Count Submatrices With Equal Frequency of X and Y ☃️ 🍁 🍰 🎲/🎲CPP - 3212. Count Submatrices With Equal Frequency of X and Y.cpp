//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3212

//? ⌚ Time complexity ➺  O(m * n) 👉🏻 single pass through entire grid

//? 🧺 Space complexity ➺ O(m * n) 👉🏻 two extra prefix sum matrices

#include <vector>
using namespace std;

class Solution {
public:
      int numberOfSubmatrices(vector<vector<char>>& grid) {
            int ROWS  = grid.size();
            int COLS  = grid[0].size();
            int count = 0;

            // Separate prefix sum matrices for 'X' and 'Y' counts
            vector<vector<int>> xSum(ROWS, vector<int>(COLS, 0));
            vector<vector<int>> ySum(ROWS, vector<int>(COLS, 0));

            for (int i = 0; i < ROWS; i++) {
                  for (int j = 0; j < COLS; j++) {

                        // ---------- Initialize current cell ----------
                        xSum[i][j] = (grid[i][j] == 'X') ? 1 : 0;
                        ySum[i][j] = (grid[i][j] == 'Y') ? 1 : 0;

                        // ---------- Add top row contribution ----------
                        if (i > 0) {
                              xSum[i][j] += xSum[i - 1][j];
                              ySum[i][j] += ySum[i - 1][j];
                        }

                        // ---------- Add left column contribution ----------
                        if (j > 0) {
                              xSum[i][j] += xSum[i][j - 1];
                              ySum[i][j] += ySum[i][j - 1];
                        }

                        // ---------- Remove top-left overlap counted twice ----------
                        if (i > 0 && j > 0) {
                              xSum[i][j] -= xSum[i - 1][j - 1];
                              ySum[i][j] -= ySum[i - 1][j - 1];
                        }

                        // ---------- Check if submatrix (0,0)->(i,j) is valid ----------
                        // Valid if X count equals Y count and at least one X exists
                        if (xSum[i][j] == ySum[i][j] && xSum[i][j] > 0) {
                              count++;
                        }
                  }
            }

            return count;
      }
};