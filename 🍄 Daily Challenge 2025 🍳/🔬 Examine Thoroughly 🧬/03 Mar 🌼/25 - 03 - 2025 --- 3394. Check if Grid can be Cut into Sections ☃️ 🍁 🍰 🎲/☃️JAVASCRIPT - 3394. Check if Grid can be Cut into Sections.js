//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3394

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(rectangles)

//? 🧺 Space complexity ➺ O(n)

var checkValidCuts = function (n, rectangles) {
      // Extract x and y coordinate intervals from the rectangles
      let x_intervals = rectangles.map(rect => [rect[0], rect[2]]); // (x_start, x_end)
      let y_intervals = rectangles.map(rect => [rect[1], rect[3]]); // (y_start, y_end)

      // Sort the intervals based on the starting coordinate
      x_intervals.sort((a, b) => a[0] - b[0]);
      y_intervals.sort((a, b) => a[0] - b[0]);

      // Check whether there are at least 3 non-overlapping intervals in either direction
      return Math.max(
            countNonOverlapping(x_intervals),
            countNonOverlapping(y_intervals)
      ) >= 3;
}

// Function to count non-overlapping intervals
const countNonOverlapping = (intervals) => {
      let count = 0; // Tracks the number of non-overlapping intervals
      let last_end = -1; // Stores the end of the last selected interval

      for (let [start, end] of intervals) {
            // If the current interval does not overlap with the last one, count it
            if (last_end <= start) {
                  count++;
            }

            // Update the last selected interval's end coordinate
            last_end = Math.max(last_end, end);

            // Stop early if at least 3 non-overlapping intervals are found
            if (count === 3) {
                  break;
            }
      }
      return count;
}
