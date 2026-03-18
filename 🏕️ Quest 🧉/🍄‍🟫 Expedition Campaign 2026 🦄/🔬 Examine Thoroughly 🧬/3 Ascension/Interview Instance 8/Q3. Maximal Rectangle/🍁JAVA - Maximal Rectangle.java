//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 85

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  m = len(matrix), n = len(matrix[0])

//? 🧺 Space complexity ➺ O(n)

import java.util.Stack;

class Solution {
      public int maximalRectangle(char[][] matrix) {
            // Edge case: empty matrix
            if (matrix == null || matrix.length == 0 || matrix[0].length == 0)
                  return 0;

            int rows = matrix.length;
            int cols = matrix[0].length;
            int maxArea = 0;

            // heights[i] = consecutive 1s ending at current row in column i
            // Extra sentinel 0 at end forces stack to flush at row end
            int[] heights = new int[cols + 1];

            for (int r = 0; r < rows; r++) {

                  // ---------- Step 1: update histogram heights ----------
                  for (int i = 0; i < cols; i++) {
                        heights[i] = (matrix[r][i] == '1') ? heights[i] + 1 : 0;
                  }

                  // ---------- Step 2: largest rectangle in histogram ----------
                  // Monotonic stack stores indices of increasing heights
                  Stack<Integer> stack = new Stack<>();
                  stack.push(-1); // Sentinel index for left boundary

                  for (int i = 0; i < heights.length; i++) {
                        // Pop while current height breaks increasing order
                        while (stack.peek() != -1 && heights[i] < heights[stack.peek()]) {
                              int h = heights[stack.pop()]; // Height of popped bar
                              int w = i - stack.peek() - 1; // Width between boundaries
                              maxArea = Math.max(maxArea, h * w);
                        }
                        stack.push(i);
                  }
            }

            return maxArea;
      }
}