//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L5 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var maxPoints = function(points) {
      // If there are 2 or fewer points, all points lie on the same line
      if (points.length <= 2) {
            return points.length;
      }

      let ans = 1; // Initialize max points on a line to at least 1

      // Helper function to calculate slope between two points
      function findSlope(p1, p2) {
            const [x1, y1] = p1;
            const [x2, y2] = p2;
            if (x1 === x2) {
                  return Infinity; // Handle vertical line
            }
            return (y1 - y2) / (x1 - x2);
      }

      // Iterate through each point p1 in the list
      for (let i = 0; i < points.length; i++) {
            const slopes = new Map();

            // Check each point p2 after p1 to avoid duplicates
            for (let j = i + 1; j < points.length; j++) {
                  const slope = findSlope(points[i], points[j]);
                  slopes.set(slope, (slopes.get(slope) || 0) + 1);
                  ans = Math.max(ans, slopes.get(slope));
            }
      }

      // Add 1 to include the original point itself in the count
      return ans + 1;
}