//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.3 Q4

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
using namespace std;

class Solution {
private:
      int rows, cols;

      // DFS to calculate perimeter starting from cell (i, j)
      int dfs(int i, int j, vector<vector<int>>& grid, vector<vector<bool>>& visited) {
            // If out of bounds or water cell, contributes 1 to perimeter
            if (i < 0 || i >= rows || j < 0 || j >= cols || grid[i][j] == 0) {
                  return 1;
            }

            // Already visited land cell contributes 0 additional perimeter
            if (visited[i][j]) {
                  return 0;
            }

            // Mark as visited
            visited[i][j] = true;

            int perimeter = 0;
            // Explore all 4 directions
            perimeter += dfs(i + 1, j, grid, visited); // down
            perimeter += dfs(i - 1, j, grid, visited); // up
            perimeter += dfs(i, j + 1, grid, visited); // right
            perimeter += dfs(i, j - 1, grid, visited); // left

            return perimeter;
      }

public:
      int islandPerimeter(vector<vector<int>>& grid) {
            rows = grid.size();
            cols = grid[0].size();

            vector<vector<bool>> visited(rows, vector<bool>(cols, false));

            // Find first land cell and start DFS from it
            for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < cols; j++) {
                        if (grid[i][j] == 1) {
                              return dfs(i, j, grid, visited);
                        }
                  }
            }

            // No land found
            return 0;
      }
};