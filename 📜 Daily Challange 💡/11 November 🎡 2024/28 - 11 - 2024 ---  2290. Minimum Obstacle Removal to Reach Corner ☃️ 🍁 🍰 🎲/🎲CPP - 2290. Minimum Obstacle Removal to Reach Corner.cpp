//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2290

//? ⌚ Time complexity ➺ O(n * m)  👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(n * m) 👉🏻  m = len(grid[0])

#include <vector>
#include <deque>
#include <tuple>
#include <set>

using namespace std;

class Solution {
public:
      int minimumObstacles(vector<vector<int>>& grid) {
            int ROWS = grid.size();
            int COLS = grid[0].size();

            // Deque for BFS, storing {obstacles, row, col}
            deque<tuple<int, int, int>> q;
            q.push_back({0, 0, 0}); // Start at (0, 0) with 0 obstacles

            // Visited set to avoid revisiting cells
            vector<vector<bool>> visited(ROWS, vector<bool>(COLS, false));
            visited[0][0] = true;

            // Perform BFS
            while (!q.empty()) {
                  auto [obstacles, r, c] = q.front();
                  q.pop_front();

                  // If we reach the bottom-right corner, return the obstacle count
                  if (r == ROWS - 1 && c == COLS - 1) {
                        return obstacles;
                  }

                  // Define the neighbors (down, up, right, left)
                  vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
                  for (auto [dr, dc] : directions) {
                        int nr = r + dr, nc = c + dc;

                        // Check bounds and if the cell is already visited
                        if (nr < 0 || nc < 0 || nr >= ROWS || nc >= COLS || visited[nr][nc]) {
                              continue;
                        }

                        // Mark the cell as visited
                        visited[nr][nc] = true;

                        // Add to the deque based on whether it's an obstacle
                        if (grid[nr][nc] == 1) {
                              q.push_back({obstacles + 1, nr, nc});
                        } else {
                              q.push_front({obstacles, nr, nc});
                        }
                  }
            }

            // If no valid path exists, return -1
            return -1;
      }
};
