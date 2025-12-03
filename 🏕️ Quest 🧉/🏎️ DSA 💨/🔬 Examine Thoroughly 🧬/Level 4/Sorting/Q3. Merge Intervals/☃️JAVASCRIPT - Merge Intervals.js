//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 56

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var merge = function (intervals) {
      let merged = []; // Final list of merged intervals

      // ----------------------------------------------------------
      // Step 1: Sort intervals by their start value
      // ----------------------------------------------------------
      intervals.sort((a, b) => a[0] - b[0]);

      // Step 2: Initialize 'prev' as the first interval
      let prev = intervals[0];

      // ----------------------------------------------------------
      // Step 3: Iterate over each interval and merge if overlapping
      // ----------------------------------------------------------
      for (let i = 1; i < intervals.length; i++) {
            let interval = intervals[i];
            // Overlap case → merge by updating the end time
            if (interval[0] <= prev[1]) {
                  prev[1] = Math.max(prev[1], interval[1]);
            }
            // No overlap → push previous interval, update 'prev'
            else {
                  merged.push(prev);
                  prev = interval;
            }
      }

      // Step 4: Append the last interval
      merged.push(prev);

      return merged;
};