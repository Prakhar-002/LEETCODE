//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 85

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  m = len(matrix), n = len(matrix[0])

//? 🧺 Space complexity ➺ O(n)

var maximalRectangle = function (matrix) {
      // Edge case: empty matrix
      if (!matrix || matrix.length === 0 || matrix[0].length === 0)
            return 0;

      const rows = matrix.length;
      const cols = matrix[0].length;
      let maxArea = 0;

      // heights[i] = consecutive 1s ending at current row in column i
      // Extra sentinel 0 at end forces stack to flush at row end
      const heights = new Array(cols + 1).fill(0);

      for (let r = 0; r < rows; r++) {

            // ---------- Step 1: update histogram heights ----------
            for (let i = 0; i < cols; i++) {
                  heights[i] = (matrix[r][i] === '1') ? heights[i] + 1 : 0;
            }

            // ---------- Step 2: largest rectangle in histogram ----------
            // Monotonic stack stores indices of increasing heights
            const stack = [-1];    // Sentinel index for left boundary

            for (let i = 0; i < heights.length; i++) {
                  // Pop while current height breaks increasing order
                  while (stack[stack.length - 1] !== -1 &&
                        heights[i] < heights[stack[stack.length - 1]]) {
                        const h = heights[stack.pop()];              // Height of popped bar
                        const w = i - stack[stack.length - 1] - 1;  // Width between boundaries
                        maxArea = Math.max(maxArea, h * w);
                  }
                  stack.push(i);
            }
      }

      return maxArea;
};