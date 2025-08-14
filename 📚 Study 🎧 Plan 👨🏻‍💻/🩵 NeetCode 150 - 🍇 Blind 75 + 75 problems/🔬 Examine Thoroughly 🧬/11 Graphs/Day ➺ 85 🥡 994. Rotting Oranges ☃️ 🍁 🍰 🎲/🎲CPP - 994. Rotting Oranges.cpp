//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 994

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * m)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      int orangesRotting(vector<vector<int>>& grid) {
            int ROWS = grid.size(), COLS = grid[0].size();

            queue<pair<int,int>> q; // Queue for BFS
            int fresh = 0;          // Count of fresh oranges
            int time = 0;           // Minutes elapsed

            // ----------------------------------------------------------
            // Step 1: Enqueue all rotten oranges, count fresh oranges
            // ----------------------------------------------------------
            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        if (grid[r][c] == 1) fresh++;
                        if (grid[r][c] == 2) q.push({r, c});
                  }
            }

            vector<pair<int,int>> dirs = {{0,1},{0,-1},{1,0},{-1,0}};

            // ----------------------------------------------------------
            // Step 2: BFS to rot all reachable fresh oranges
            // ----------------------------------------------------------
            while (!q.empty() && fresh > 0) {
                  int sz = q.size();
                  for (int i = 0; i < sz; i++) {
                        auto [r, c] = q.front(); q.pop();

                        for (auto [dr, dc] : dirs) {
                              int row = r + dr, col = c + dc;

                              // Skip if OOB or not a fresh orange
                              if (row < 0 || row == ROWS ||
                                    col < 0 || col == COLS ||
                                    grid[row][col] != 1)
                                    continue;

                              grid[row][col] = 2;
                              q.push({row, col});
                              fresh--;
                        }
                  }
                  time++;
            }

            return fresh == 0 ? time : -1;
      }
};
