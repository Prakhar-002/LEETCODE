
//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2054 

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(events)

//? 🧺 Space complexity ➺ O(n)

var maxTwoEvents = function (events) {
      const n = events.length;

      // Step 1: Sort the events by their start time
      events.sort((a, b) => a[0] - b[0]);

      // Step 2: Create the suffix array to store maximum event values from each event onward
      const suffixMax = new Array(n).fill(0);
      suffixMax[n - 1] = events[n - 1][2];

      // Populate the suffixMax array
      for (let i = n - 2; i >= 0; i--) {
            suffixMax[i] = Math.max(events[i][2], suffixMax[i + 1]);
      }

      // Step 3: Iterate through each event to calculate the maximum sum of two non-overlapping events
      let maxSum = 0;

      for (let i = 0; i < n; i++) {
            let l = i + 1, r = n - 1;
            let nextEventIndex = -1;

            // Perform binary search to find the next non-overlapping event
            while (l <= r) {
                  const mid = Math.floor(l + (r - l) / 2);
                  if (events[mid][0] > events[i][1]) {
                        nextEventIndex = mid;
                        r = mid - 1;
                  } else {
                        l = mid + 1;
                  }
            }

            // If a valid next event is found, calculate the potential maximum sum
            if (nextEventIndex !== -1) {
                  maxSum = Math.max(maxSum, events[i][2] + suffixMax[nextEventIndex]);
            }

            // Update the maxSum considering only the current event
            maxSum = Math.max(maxSum, events[i][2]);
      }

      // Return the maximum sum of values for two non-overlapping events
      return maxSum;
}
