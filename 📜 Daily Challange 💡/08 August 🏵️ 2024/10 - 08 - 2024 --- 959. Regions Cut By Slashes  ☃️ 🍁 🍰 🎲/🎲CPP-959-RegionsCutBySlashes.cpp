//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 959

//? ⌚ Time complexity ➺ O(n^2) 👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(n^2) 👉🏻  n = len(grid)

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
      int regionsBySlashes(vector<string>& grid) {
            int n = grid.size();
            // Create a 3n x 3n grid to represent the regions
            vector<vector<int>> regionsGrid(3 * n, vector<int>(3 * n, 0));

            // Mark the slashes in the regionsGrid
            for (int row = 0; row < n; row++) {
                  for (int col = 0; col < n; col++) {
                        // if we get forward slash we will
                        // marking cells in a diagonal pattern
                        // `1` to represent the slash
                        if (grid[row][col] == '/') { //  For a "/"
                              // marks the three cells starting from
                              // the top right to the bottom left
                              regionsGrid[3 * row][3 * col + 2] 
                              = regionsGrid[3 * row + 1][3 * col + 1] 
                              = regionsGrid[3 * row + 2][3 * col] 
                              = 1;
                        } else if (grid[row][col] == '\\') { // For a "\"
                              // marks the three cells starting from the
                              // top left to the bottom right
                              regionsGrid[3 * row][3 * col] 
                              = regionsGrid[3 * row + 1][3 * col + 1] 
                              = regionsGrid[3 * row + 2][3 * col + 2] 
                              = 1;
                        }
                  }
            }

            // count the number of regions
            int regions = 0;
            // Two nested loops iterate over each cell in the `regionsGrid`.
            for (int row = 0; row < 3 * n; row++) {
                  for (int col = 0; col < 3 * n; col++) {
                        // every cell that is not marked by a slash 
                        // (cell value is `0`)
                        if (regionsGrid[row][col] == 0) {
                              //  calling the `dfs` function
                              dfs(regionsGrid, row, col);
                              // Each successful call increments the `regions` by 1
                              regions++;
                        }
                  }
            }

            return regions;
      }

private:
      // function which is used to explore the `regionsGrid`
      void dfs(vector<vector<int>>& grid, int row, int col) {
            if (
                  // if out of bounds
                  row < 0 || 
                  col < 0 || 
                  row >= grid.size() || 
                  col >= grid[0].size() || 
                  // and is cell is marked with 1
                  grid[row][col] != 0
            ) {
                  // then return
                  return;
            }

            // Otherwise marks the cell as visited
            grid[row][col] = 1;

            // recursively calls itself for all four directions
            // all directions (north, south, east, and west)
            dfs(grid, row + 1, col);
            dfs(grid, row - 1, col);
            dfs(grid, row, col + 1);
            dfs(grid, row, col - 1);
      }
};

