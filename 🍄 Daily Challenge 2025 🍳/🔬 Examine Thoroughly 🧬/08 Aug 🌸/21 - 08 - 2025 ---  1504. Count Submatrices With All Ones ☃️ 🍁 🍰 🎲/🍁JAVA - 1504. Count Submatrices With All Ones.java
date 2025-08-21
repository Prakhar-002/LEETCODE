//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1504

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int numSubmat(int[][] mat) {
            int rows = mat.length, cols = mat[0].length;
            // heights[c]: consecutive 1s height ending at current row for column c
            int[] heights = new int[cols];
            int res = 0;

            for (int r = 0; r < rows; r++) {
                  // Update histogram heights for this row
                  for (int c = 0; c < cols; c++) {
                        heights[c] = (mat[r][c] == 0) ? 0 : heights[c] + 1;
                  }

                  // Monotonic stack of entries: [index j, cumulative count up to j, height at j]
                  // Sentinel: j = -1, cumulative = 0, height = -1 (strictly smaller than any real height)
                  Deque<int[]> stack = new ArrayDeque<>();
                  stack.push(new int[]{-1, 0, -1});

                  // For each column, compute number of all-1 submatrices ending at this row and at column c
                  for (int c = 0; c < cols; c++) {
                        int h = heights[c];

                        // Maintain increasing heights: pop while previous height >= current height
                        while (stack.peek()[2] >= h) {
                              stack.pop();
                        }

                        // Top of stack: (j, prev, hj) where hj < h
                        int[] top = stack.peek();
                        int j = top[0], prev = top[1];

                        // cur = total submatrices ending at this row with right boundary at c
                        // (c - j) choices for left boundary times height h, plus previously accumulated 'prev'
                        int cur = prev + (c - j) * h;

                        // Push current state and accumulate result
                        stack.push(new int[]{c, cur, h});
                        res += cur;
                  }
            }
            return res;
      }
}
