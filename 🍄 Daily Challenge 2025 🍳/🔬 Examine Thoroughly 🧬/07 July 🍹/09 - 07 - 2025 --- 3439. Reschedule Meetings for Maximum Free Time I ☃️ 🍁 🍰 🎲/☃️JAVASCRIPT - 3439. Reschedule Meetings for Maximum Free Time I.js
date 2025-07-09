//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3439

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(startTime)

//? 🧺 Space complexity ➺ O(n)

var maxFreeTime = function (eventTime, k, startTime, endTime) {
      const n = startTime.length;

      // Array to store free time gaps before, between, and after meetings
      const gap = new Array(n + 1);

      // Gap before the first meeting
      gap[0] = startTime[0];

      // Gaps between consecutive meetings
      for (let i = 1; i < n; i++) {
            gap[i] = startTime[i] - endTime[i - 1];
      }

      // Gap after the last meeting
      gap[n] = eventTime - endTime[n - 1];

      // Sliding window to find the maximum sum of at most (k + 1) gaps
      let left = 0;
      let currGap = 0;
      let maxGap = 0;

      for (let right = 0; right <= n; right++) {
            currGap += gap[right];

            // Ensure window size does not exceed (k + 1) gaps (i.e. skipping k meetings)
            if (right - left > k) {
                  currGap -= gap[left];
                  left++;
            }

            // Track maximum free time found
            maxGap = Math.max(maxGap, currGap);
      }

      return maxGap;
};
