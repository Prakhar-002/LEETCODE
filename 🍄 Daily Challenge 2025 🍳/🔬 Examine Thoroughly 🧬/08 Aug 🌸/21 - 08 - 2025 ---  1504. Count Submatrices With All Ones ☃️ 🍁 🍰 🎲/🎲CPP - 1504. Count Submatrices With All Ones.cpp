//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1504

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
      int numSubmat(vector<vector<int>>& mat) {
            int rows = mat.size(), cols = mat[0].size();
            // heights[c]: consecutive 1s height ending at current row for column c
            vector<int> heights(cols, 0);
            int res = 0;

            for (int r = 0; r < rows; ++r) {
                  // Update histogram heights for this row
                  for (int c = 0; c < cols; ++c) {
                        heights[c] = (mat[r][c] == 0) ? 0 : heights[c] + 1;
                  }

                  // Monotonic stack entries: {index j, cumulative count up to j, height at j}
                  // Sentinel: j = -1, cumulative = 0, height = -1
                  vector<array<int,3>> stack;
                  stack.push_back({-1, 0, -1});

                  // For each column, compute number of all-1 submatrices ending at this row and at column c
                  for (int c = 0; c < cols; ++c) {
                        int h = heights[c];

                        // Maintain increasing heights
                        while (!stack.empty() && stack.back()[2] >= h) {
                              stack.pop_back();
                        }

                        // Top: (j, prev, hj) where hj < h
                        auto top = stack.back();
                        int j = top[0], prev = top[1];

                        // cur = total submatrices ending at this row with right boundary at c
                        int cur = prev + (c - j) * h;

                        // Push current state and accumulate
                        stack.push_back({c, cur, h});
                        res += cur;
                  }
            }
            return res;
      }
};
