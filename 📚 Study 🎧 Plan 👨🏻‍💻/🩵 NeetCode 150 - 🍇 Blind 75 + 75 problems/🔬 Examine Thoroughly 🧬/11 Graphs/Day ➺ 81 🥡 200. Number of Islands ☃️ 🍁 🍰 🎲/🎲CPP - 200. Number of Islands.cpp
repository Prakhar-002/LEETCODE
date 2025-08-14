//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 200

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * m)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      int numIslands(vector<vector<char>>& grid) {
            // Possible movement directions: down, up, right, left
            vector<pair<int,int>> directions = {{1,0},{-1,0},{0,1},{0,-1}};
            int ROWS = grid.size(), COLS = grid[0].size();
            int islands = 0; // Count of islands found

            // ----------------------------------------------------------
            // BFS to traverse all connected land cells starting at (r, c)
            // ----------------------------------------------------------
            auto bfs = [&](int r, int c) {
                  queue<pair<int,int>> q;
                  grid[r][c] = '0'; // Mark visited
                  q.push({r, c});

                  while (!q.empty()) {
                        auto [row, col] = q.front();
                        q.pop();

                        // Explore four directions
                        for (auto [dr, dc] : directions) {
                              int nr = row + dr;
                              int nc = col + dc;
                              // Skip OOB or water
                              if (nr < 0 || nc < 0 || nr >= ROWS || nc >= COLS || grid[nr][nc] == '0')
                                    continue;
                              q.push({nr, nc});
                              grid[nr][nc] = '0'; // Mark visited
                        }
                  }
            };

            // ----------------------------------------------------------
            // Scan entire grid
            // ----------------------------------------------------------
            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        if (grid[r][c] == '1') {
                              bfs(r, c);
                              islands++;
                        }
                  }
            }

            return islands;
      }
};
