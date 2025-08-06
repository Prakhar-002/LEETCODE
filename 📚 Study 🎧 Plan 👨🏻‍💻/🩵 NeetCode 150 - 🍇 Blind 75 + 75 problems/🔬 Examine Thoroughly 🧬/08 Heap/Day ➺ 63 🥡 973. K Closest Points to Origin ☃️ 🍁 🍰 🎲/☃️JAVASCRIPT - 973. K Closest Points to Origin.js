//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 973

//? ⌚ Time complexity ➺ O(k * log n) 👉🏻  n = len(points)

//? 🧺 Space complexity ➺ O(n)

var kClosest = function (points, k) {
      // Create min heap using array and custom sort
      let minHeap = [];

      for (let [x, y] of points) {
            let dist = x * x + y * y;                      // Calculate squared distance
            minHeap.push([dist, x, y]);                    // Store [dist, x, y]
      }

      // Convert array into min-heap based on distance
      minHeap.sort((a, b) => a[0] - b[0]);

      let res = [];

      while (k > 0) {
            let [d, x, y] = minHeap.shift();              // Get closest point
            res.push([x, y]);                              // Append coordinates to result
            k--;
      }

      return res;                                          // Return k closest points
};
