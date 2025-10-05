//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 417

//? ⌚ Time complexity ➺ O(m * n)

//? 🧺 Space complexity ➺ O(m * n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
            int ROWS = heights.size(), COLS = heights[0].size();
            set<pair<int,int>> pac; // Pacific reachable
            set<pair<int,int>> atl; // Atlantic reachable

            // ----------------------------------------------------------
            // Step 1: DFS from Pacific (top row, left col) and Atlantic (bottom row, right col)
            // ----------------------------------------------------------
            for (int c = 0; c < COLS; c++) {
                  dfs(0, c, pac, heights[0][c], heights, ROWS, COLS);            // Top row → Pacific
                  dfs(ROWS - 1, c, atl, heights[ROWS - 1][c], heights, ROWS, COLS); // Bottom row → Atlantic
            }
            for (int r = 0; r < ROWS; r++) {
                  dfs(r, 0, pac, heights[r][0], heights, ROWS, COLS);            // Left col → Pacific
                  dfs(r, COLS - 1, atl, heights[r][COLS - 1], heights, ROWS, COLS); // Right col → Atlantic
            }

            // ----------------------------------------------------------
            // Step 2: Intersection of Pacific and Atlantic reachable cells
            // ----------------------------------------------------------
            vector<vector<int>> res;
            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        if (pac.count({r, c}) && atl.count({r, c})) {
                              res.push_back({r, c});
                        }
                  }
            }
            return res;
      }

private:
      void dfs(int r, int c, set<pair<int,int>>& visit, int prevHeight,
                  vector<vector<int>>& heights, int ROWS, int COLS) {
            // Check boundaries, visited set, and non-decreasing height condition
            if (r < 0 || c < 0 || r >= ROWS || c >= COLS ||
                  visit.count({r, c}) || heights[r][c] < prevHeight) {
                  return;
            }
            visit.insert({r, c});
            // DFS in 4 directions
            dfs(r + 1, c, visit, heights[r][c], heights, ROWS, COLS);
            dfs(r - 1, c, visit, heights[r][c], heights, ROWS, COLS);
            dfs(r, c + 1, visit, heights[r][c], heights, ROWS, COLS);
            dfs(r, c - 1, visit, heights[r][c], heights, ROWS, COLS);
      }
};
