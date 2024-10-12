//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2406

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(intervals)

//? 🧺 Space complexity ➺ O(n)

function minGroups(intervals) {
      // `startPoints` array stores the start points of each interval
      const startPoints = [];
      // `endPoints` array stores the end points of each interval
      const endPoints = [];

      // `for` loop populates these arrays by iterating over the `intervals` array
      for (const [start, end] of intervals) {
            // store the starting point in `startPoints` array
            startPoints.push(start);
            // store the ending point in `endPoints` array
            endPoints.push(end);
      }

      // sort the `startPoints` array
      startPoints.sort((a, b) => a - b);
      // sort the `endPoints` array
      endPoints.sort((a, b) => a - b);

      // `sIdx` pointer used to iterate over the sorted `startPoints` array
      let sIdx = 0;
      // `eIdx` pointer used to iterate over the sorted `endPoints` array
      let eIdx = 0;

      let groups = 0;
      let intersections = 0;

      // loop continues until all intervals (start points) have been processed
      while (sIdx < intervals.length) {
            // if the current start point is earlier or equal to the current end point
            if (startPoints[sIdx] <= endPoints[eIdx]) {
                  // means a new interval is starting before the last one ends
                  intersections++; // thus increasing the number of "intersections"
                  // start pointer is incremented to process the next interval
                  sIdx++;
            }
            // If not, an interval has ended before a new one starts
            else {
                  // count of "intersections" decreases
                  intersections--;
                  // and the end pointer is incremented
                  eIdx++;
            }

            // `groups` variable is updated to hold the maximum number of intersections seen so far
            groups = Math.max(groups, intersections);
      }

      // returns `groups`, which now holds the minimum number of groups required
      return groups;
}