//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3025

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(points)

//? 🧺 Space complexity ➺ O(1)


var numberOfPairs = function (points) {
      // ------ Step 1: Sort points by x ascending, then y descending
      // ------ This ensures proper ordering for pair search
      points.sort((a, b) => (a[0] !== b[0]) ? a[0] - b[0] : b[1] - a[1]);
      let cnt = 0;

      // ------ Step 2: For each point i, scan points after it to count valid pairs
      // ------ Valid pair conditions: x[i] < x[j], lower < y[j] <= y[i]
      for (let i = 0; i < points.length - 1; i++) {
            let x = points[i][0];
            let y = points[i][1];
            let lower = -1;
            for (let j = i + 1; j < points.length; j++) {
                  // ------ Check if points[j][1] is in (lower, y]
                  if (lower < points[j][1] && points[j][1] <= y) {
                        cnt += 1;
                        lower = points[j][1];
                  }
                  // ------ Early exit: if lower == y, no more valid pairs
                  if (lower === y) {
                        break;
                  }
            }
      }

      // ------ Step 3: Return the total count of pairs
      return cnt;
}
