//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3446

//? ⌚ Time complexity ➺ O(n^2 log n) 👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
            int n = grid.size(); // Size of the square matrix

            // Sort bottom-left diagonals (including main diagonal) in DESCENDING order
            for (int i = 0; i < n; i++) {
                  vector<int> tmp;
                  // Collect elements along diagonal starting from grid[i][0]
                  for (int j = 0; i + j < n; j++) {
                        tmp.push_back(grid[i + j][j]);
                  }
                  // Sort diagonal elements in descending order
                  sort(tmp.begin(), tmp.end(), greater<int>());
                  // Place sorted elements back to their original diagonal positions
                  for (int j = 0; i + j < n; j++) {
                        grid[i + j][j] = tmp[j];
                  }
            }

            // Sort top-right diagonals (excluding main diagonal) in ASCENDING order
            for (int j = 1; j < n; j++) {
                  vector<int> tmp;
                  // Collect elements along diagonal starting from grid[0][j]
                  for (int i = 0; j + i < n; i++) {
                        tmp.push_back(grid[i][j + i]);
                  }
                  // Sort diagonal elements in ascending order
                  sort(tmp.begin(), tmp.end());
                  // Place sorted elements back to their original diagonal positions
                  for (int i = 0; j + i < n; i++) {
                        grid[i][j + i] = tmp[i];
                  }
            }

            // Return the modified grid
            return grid;
      }
};
