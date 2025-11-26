
//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 84

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(heights)

//? 🧺 Space complexity ➺ O(n)

var largestRectangleArea = function (heights) {
      const n = heights.length;
      let maxArea = 0;                 // Store the maximum area
      const stack = [];               // Stack to store indices

      for (let i = 0; i <= n; i++) {
            // Use 0 as sentinel at the end
            const currHeight = (i === n) ? 0 : heights[i];

            // While the current height is smaller than height at top of the stack
            while (stack.length && currHeight < heights[stack[stack.length - 1]]) {
                  const height = heights[stack.pop()]; // Pop the top height

                  // Width is either full range or between top of stack and current
                  const width = stack.length === 0 ? i : i - stack[stack.length - 1] - 1;

                  // Update maxArea
                  maxArea = Math.max(maxArea, height * width);
            }

            // Push current index
            stack.push(i);
      }

      return maxArea;
};
