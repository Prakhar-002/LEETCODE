//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1568

//? ⌚ Time complexity ➺ O((n * m) ^ 2) 👉🏻  n = row, m = col

//? 🧺 Space complexity ➺ O(n * m)

#include <vector>
#include <set>
#include <stack>
using namespace std;

class Solution {
private:
      // func counts the number of islands (disconnected clusters of `1`s)
      int count_islands(const vector<vector<int>>& grid) {
            // set keeps track of all the cells that have been visited
            set<pair<int, int>> seen;

            auto dfs = [&](int r, int c) {
                  // stack to manage cells to visit
                  stack<pair<int, int>> stack;
                  stack.push({r, c});
                  while (!stack.empty()) {
                        auto [row, col] = stack.top();
                        stack.pop();
                        //  visit all neighboring cells `(neiRow, neiCol)` 
                        for (auto [dr, dc] : vector<pair<int, int>>{{-1, 0}, {1, 0}, {0, -1}, {0, 1}}) {
                              int neiRow = row + dr, neiCol = col + dc;
                              if (
                                    // if they are part of the island 
                                    0 <= neiRow && neiRow < grid.size() &&
                                    0 <= neiCol && neiCol < grid[0].size() &&
                                    // `grid[neiRow][neiCol] == 1`
                                    grid[neiRow][neiCol] == 1 &&
                                    // not previously seen
                                    seen.find({neiRow, neiCol}) == seen.end()
                              ) {
                                    // adds them to the stack
                                    seen.insert({neiRow, neiCol});
                                    stack.push({neiRow, neiCol});
                              }
                        }
                  }
            };

            // Initialize an island counter
            int islands = 0;
            //  Loop through all cells in the grid
            for (int row = 0; row < grid.size(); ++row) {
                  for (int col = 0; col < grid[0].size(); ++col) {
                        // If a cell `(row, col)` is a `1` and not seen
                        if (grid[row][col] == 1 && seen.find({row, col}) == seen.end()) {
                              // it's a new island
                              ++islands;
                              seen.insert({row, col});
                              // Perform a DFS from cell to mark all connected `1`s
                              dfs(row, col);
                        }
                  }
            }

            return islands;
      }

public:
      int minDays(vector<vector<int>>& grid) {
            // if count_islands() != 1
            // If there are initially no valid islands or already more than one island
            if (count_islands(grid) != 1) {
                  // return `0` because no split is needed or it's already split
                  return 0;
            }

            // Loop through every cell
            for (int row = 0; row < grid.size(); ++row) {
                  for (int col = 0; col < grid[0].size(); ++col) {
                        if (grid[row][col] == 1) {
                              // Temporarily set a land cell (`1`) to water (`0`)
                              grid[row][col] = 0;
                              // recount the islands if we get != 1
                              // If changing this one cell results in more than one island
                              if (count_islands(grid) != 1) {
                                    // return `1` because it's possible to split the island in a single day
                                    return 1;
                              }
                              // Reset the cell back to land after the check
                              grid[row][col] = 1;
                        }
                  }
            }

            // If no single cell change results in multiple islands
            // return `2` indicating it takes at least two days
            return 2;
      }
};

