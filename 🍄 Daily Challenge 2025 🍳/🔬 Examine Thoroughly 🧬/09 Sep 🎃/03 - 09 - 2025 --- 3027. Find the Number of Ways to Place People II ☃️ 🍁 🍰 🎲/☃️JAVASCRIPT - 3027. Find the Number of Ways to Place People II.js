//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3027

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var numberOfPairs = function (points) {
      let ans = 0;

      // ------ Sort points: x ascending, then y descending for proper scan order
      points.sort((a, b) => a[0] - b[0] || b[1] - a[1]);

      // ------ Iterate over each point as candidate A
      for (let i = 0; i < points.length - 1; i++) {
            const pointA = points[i];

            // ------ Initialize bounds for pair B
            // xRange[0]: Leftmost x allowed for B
            // xRange[1]: No right limit (Infinity)
            // yRange[0]: No lower y limit (-Infinity)
            // yRange[1]: Topmost y allowed for B
            const xRange = [pointA[0] - 1, Infinity];
            const yRange = [-Infinity, pointA[1] + 1];

            // ------ Scan remaining points for valid B
            for (let j = i + 1; j < points.length; j++) {
                  const pointB = points[j];

                  // ------ Check if B is within the bounds defined by A and previous B
                  if (
                        pointB[0] > xRange[0] &&
                        pointB[0] < xRange[1] &&
                        pointB[1] > yRange[0] &&
                        pointB[1] < yRange[1]
                  ) {
                        ans++;
                        // ------ Restrict bounds for next candidate B
                        xRange[0] = pointB[0];
                        yRange[0] = pointB[1];
                  }
            }
      }

      // ------ Return total number of valid pairs found
      return ans;
};
