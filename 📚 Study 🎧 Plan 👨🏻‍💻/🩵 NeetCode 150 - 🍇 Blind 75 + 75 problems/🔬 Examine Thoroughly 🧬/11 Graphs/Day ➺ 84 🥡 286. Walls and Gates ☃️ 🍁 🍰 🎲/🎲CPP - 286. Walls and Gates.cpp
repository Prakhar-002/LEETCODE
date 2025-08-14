//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 286

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m * n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      void islandsAndTreasure(vector<vector<int>>& grid) {
            int ROWS = grid.size(), COLS = grid[0].size();
            set<pair<int,int>> visit;       // Tracks visited cells
            queue<pair<int,int>> q;         // BFS queue

            // Step 1: Add all gates (0) to BFS queue
            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        if (grid[r][c] == 0) {
                              q.push({r, c});
                              visit.insert({r, c});
                        }
                  }
            }

            int dist = 0; // Distance from gates
            vector<pair<int,int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};

            // Step 2: BFS from all gates
            while (!q.empty()) {
                  int size = q.size();
                  for (int i = 0; i < size; i++) {
                        auto [r, c] = q.front();
                        q.pop();
                        grid[r][c] = dist;

                        // Add neighbors
                        for (auto [dr, dc] : dirs) {
                              int nr = r + dr;
                              int nc = c + dc;
                              if (nr < 0 || nc < 0 || nr >= ROWS || nc >= COLS ||
                                    visit.count({nr, nc}) || grid[nr][nc] == -1) {
                                    continue;
                              }
                              visit.insert({nr, nc});
                              q.push({nr, nc});
                        }
                  }
                  dist++;
            }
      }
};
