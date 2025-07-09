//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3439

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(startTime)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int maxFreeTime(int eventTime, int k, int[] startTime, int[] endTime) {
            int n = startTime.length;

            // Array to store free time gaps between/around meetings
            int[] gap = new int[n + 1];

            // Gap before the first meeting (from time 0 to first start)
            gap[0] = startTime[0] - 0;

            // Gap after the last meeting (from last end to event end)
            gap[n] = eventTime - endTime[n - 1];

            // Gaps between consecutive meetings
            for (int i = 1; i < n; i++) {
                  gap[i] = startTime[i] - endTime[i - 1];
            }

            // Two pointers to simulate a sliding window of skipped meetings
            int left = 0;
            int currGap = 0;
            int maxGap = 0;

            for (int right = 0; right <= n; right++) {
                  currGap += gap[right]; // include current gap

                  // If skipped more than k meetings, shrink window from left
                  if (right - left > k) {
                        currGap -= gap[left];
                        left++;
                  }

                  // Update max free time
                  maxGap = Math.max(maxGap, currGap);
            }

            return maxGap;
      }
}
