//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3440

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(startTime)

//? 🧺 Space complexity ➺ O(n)

class Solution { 

      public int maxFreeTime(int eventTime, int[] startTime, int[] endTime) {
            int n = startTime.length;

            // This boolean array stores whether each meeting can be skipped
            // to maximize the total continuous free time
            boolean[] q = new boolean[n];

            // Two variables to track maximum left and right free gaps
            // t1: max gap before current meeting (forward pass)
            // t2: max gap after current meeting (backward pass)
            for (int i = 0, t1 = 0, t2 = 0; i < n; i++) {

                  // ---------- Forward Pass ----------
                  // If the current meeting can fit within the max free time before it (t1)
                  if (endTime[i] - startTime[i] <= t1) {
                        q[i] = true; // Mark as skippable
                  }

                  // Update t1 with the current free time before meeting i
                  // For the first meeting, free time is from 0 to its start
                  t1 = Math.max(t1, startTime[i] - (i == 0 ? 0 : endTime[i - 1]));

                  // ---------- Backward Pass ----------
                  // Now do the same check from the back (right to left)

                  int revIndex = n - i - 1; // Index from the end

                  // If current meeting fits in the max gap after it (t2), mark skippable
                  if (endTime[revIndex] - startTime[revIndex] <= t2) {
                        q[revIndex] = true;
                  }

                  // Update t2 with the free time after the current meeting
                  // For the last meeting, gap is from its end to eventTime
                  t2 = Math.max(
                              t2,
                              (i == 0 ? eventTime : startTime[n - i]) - endTime[revIndex]);
            }

            // Calculate the maximum possible free time
            int res = 0;

            for (int i = 0; i < n; i++) {

                  // Define the segment around the current meeting
                  int left = i == 0 ? 0 : endTime[i - 1];
                  int right = i == n - 1 ? eventTime : startTime[i + 1];

                  if (q[i]) {
                        // If this meeting is skippable, we can use the full gap around it
                        res = Math.max(res, right - left);
                  } else {
                        // Otherwise, subtract the meeting duration from the gap
                        int occupied = endTime[i] - startTime[i];
                        res = Math.max(res, right - left - occupied);
                  }
            }

            return res;
      }
}
