//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 84

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(heights)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int largestRectangleArea(int[] heights) {
            int n = heights.length;
            int maxArea = 0; // Stores the maximum rectangle area
            Stack<Integer> stack = new Stack<>(); // Stack to store indices of bars

            for (int i = 0; i <= n; i++) { // Iterate from 0 to n (inclusive)
                  // Use 0 as a sentinel value at the end
                  int currHeight = (i == n) ? 0 : heights[i];

                  // While the current bar is smaller than the bar at top of the stack
                  while (!stack.isEmpty() && currHeight < heights[stack.peek()]) {
                        int height = heights[stack.pop()]; // Pop the height

                        // Width calculation
                        int width = stack.isEmpty() ? i : i - stack.peek() - 1;

                        // Update max area
                        maxArea = Math.max(maxArea, height * width);
                  }

                  // Push current index onto the stack
                  stack.push(i);
            }

            return maxArea;
      }
}
