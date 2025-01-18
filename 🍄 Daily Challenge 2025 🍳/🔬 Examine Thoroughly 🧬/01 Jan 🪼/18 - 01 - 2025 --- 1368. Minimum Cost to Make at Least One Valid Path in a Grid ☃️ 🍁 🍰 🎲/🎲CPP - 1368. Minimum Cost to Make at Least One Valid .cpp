//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1368

//? ⌚ Time complexity ➺ O(n * m)  👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(n * m) 👉🏻  m = len(grid[0])

#include <vector>
#include <deque>
#include <limits.h>

using namespace std;

class Solution {
public:
      int minCost(vector<vector<int>>& grid) {
            int ROWS = grid.size(), COLS = grid[0].size();

            // Direction vectors for movement: {Right, Left, Down, Up}
            vector<vector<int>> directions = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };

            // Minimum cost grid initialized to a large value
            vector<vector<int>> minCost(ROWS, vector<int>(COLS, INT_MAX));
            minCost[0][0] = 0;

            // Deque for BFS
            deque<vector<int>> deque;
            deque.push_front({0, 0, 0}); // {row, col, cost}

            while (!deque.empty()) {
                  auto curr = deque.front();
                  deque.pop_front();
                  int r = curr[0], c = curr[1], cost = curr[2];

                  // If we reach the bottom-right corner, return the cost
                  if (r == ROWS - 1 && c == COLS - 1) {
                        return cost;
                  }

                  // Explore all four directions
                  for (int d = 0; d < 4; d++) {
                        int nr = r + directions[d][0];
                        int nc = c + directions[d][1];
                        int nCost = (d + 1 == grid[r][c]) ? cost : cost + 1;

                        // Check bounds and if the cost is optimal
                        if (nr < 0 || nc < 0 || nr >= ROWS || nc >= COLS || nCost >= minCost[nr][nc]) {
                              continue;
                        }

                        minCost[nr][nc] = nCost;

                        // Add to deque: prioritize no-cost moves
                        if (d + 1 == grid[r][c]) {
                              deque.push_front({nr, nc, nCost});
                        } else {
                              deque.push_back({nr, nc, nCost});
                        }
                  }
            }

            return -1; // Unreachable case (should not happen)
      }
};
