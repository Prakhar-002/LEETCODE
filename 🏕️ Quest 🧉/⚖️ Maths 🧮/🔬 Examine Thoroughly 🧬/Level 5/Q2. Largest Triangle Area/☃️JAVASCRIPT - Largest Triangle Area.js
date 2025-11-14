//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 812

//? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var largestTriangleArea = function (points) {
      // Helper function to calculate the area of a triangle
      // formed by three points using the Shoelace formula
      function triangleArea(x, y, z) {
            // Formula: 0.5 * |x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2)|
            return 0.5 * Math.abs(
                  x[0] * (y[1] - z[1]) +
                  y[0] * (z[1] - x[1]) +
                  z[0] * (x[1] - y[1])
            );
      }

      let maxArea = 0.0;
      const n = points.length;

      // Generate all unique combinations of 3 points
      // Calculate the triangle area for each combination
      // Keep track of the maximum area among all possible triangles
      for (let i = 0; i < n; i++) {
            for (let j = i + 1; j < n; j++) {
                  for (let k = j + 1; k < n; k++) {
                        maxArea = Math.max(maxArea, triangleArea(points[i], points[j], points[k]));
                  }
            }
      }

      return maxArea;
};