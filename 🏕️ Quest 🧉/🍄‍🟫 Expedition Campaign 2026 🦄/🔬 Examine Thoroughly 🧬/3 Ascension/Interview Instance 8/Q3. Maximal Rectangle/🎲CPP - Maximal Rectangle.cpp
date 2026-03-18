//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 85

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  m = len(matrix), n = len(matrix[0])

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
      int maximalRectangle(vector<vector<char>>& matrix) {
            // Edge case: empty matrix
            if (matrix.empty() || matrix[0].empty())
                  return 0;

            int rows    = matrix.size();
            int cols    = matrix[0].size();
            int maxArea = 0;

            // heights[i] = consecutive 1s ending at current row in column i
            // Extra sentinel 0 at end forces stack to flush at row end
            vector<int> heights(cols + 1, 0);

            for (int r = 0; r < rows; r++) {

                  // ---------- Step 1: update histogram heights ----------
                  for (int i = 0; i < cols; i++) {
                        heights[i] = (matrix[r][i] == '1') ? heights[i] + 1 : 0;
                  }

                  // ---------- Step 2: largest rectangle in histogram ----------
                  // Monotonic stack stores indices of increasing heights
                  stack<int> st;
                  st.push(-1);    // Sentinel index for left boundary

                  for (int i = 0; i < (int)heights.size(); i++) {
                        // Pop while current height breaks increasing order
                        while (st.top() != -1 && heights[i] < heights[st.top()]) {
                              int h = heights[st.top()]; st.pop();    // Height of popped bar
                              int w = i - st.top() - 1;              // Width between boundaries
                              maxArea = max(maxArea, h * w);
                        }
                        st.push(i);
                  }
            }

            return maxArea;
      }
};