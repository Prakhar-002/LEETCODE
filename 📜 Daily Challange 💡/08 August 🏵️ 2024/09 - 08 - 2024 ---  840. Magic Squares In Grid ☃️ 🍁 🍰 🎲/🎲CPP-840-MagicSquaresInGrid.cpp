//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 840

//? ⌚ Time complexity ➺ O(r * c) 👉🏻  r = rows, c = cols

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
      int numMagicSquaresInside(vector<vector<int>>& grid) {
            int ROWS = grid.size(), COLS = grid[0].size();

            int magicSquares = 0;

            // checking for every possibility
            for (int row = 0; row < ROWS - 2; row++) {
                  for (int col = 0; col < COLS - 2; col++) {
                        magicSquares += isMagic(row, col, grid);
                  }
            }

            return magicSquares;
      }

private:
      int isMagic(int row, int col, const vector<vector<int>>& grid) {
            // Ensure for 1 to 9
            unordered_set<int> values;
            for (int i = row; i < row + 3; i++) {
                  for (int j = col; j < col + 3; j++) {
                        // if already in values or out of 1 - 9 range
                        if (values.find(grid[i][j]) != values.end() || grid[i][j] < 1 ||
                              grid[i][j] > 9) {
                              return 0;
                        }
                        // else add to our set
                        values.insert(grid[i][j]);
                  }
            }

            // checking every row have sum 15
            for (int i = row; i < row + 3; i++) {
                  if (grid[i][col] + grid[i][col + 1] + grid[i][col + 2] != 15) {
                        return 0;
                  }
            }

            // checking every col have sum 15
            for (int j = col; j < col + 3; j++) {
                  if (grid[row][j] + grid[row + 1][j] + grid[row + 2][j] != 15) {
                        return 0;
                  }
            }

            // checking every diagonals have sum 15
            if (  
                  grid[row][col] + grid[row + 1][col + 1] + grid[row + 2][col + 2] != 15 
                  ||
                  grid[row][col + 2] + grid[row + 1][col + 1] + grid[row + 2][col] != 15) {
                  return 0;
            }

            // if everything is right return 1
            return 1;
      }
};

