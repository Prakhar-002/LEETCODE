//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3439

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(startTime)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int maxFreeTime(int eventTime, int k, vector<int> &startTime, vector<int> &endTime) {
            int n = startTime.size();

            // Array to store the gaps (free time) before, between, and after meetings
            vector<int> gap(n + 1);

            // Gap before the first meeting (from time 0 to start of first meeting)
            gap[0] = startTime[0];

            // Gaps between consecutive meetings
            for (int i = 1; i < n; ++i) {
                  gap[i] = startTime[i] - endTime[i - 1];
            }

            // Gap after the last meeting (from end of last meeting to end of event)
            gap[n] = eventTime - endTime[n - 1];

            // Sliding window over the gap array to find the max sum of k + 1 gaps
            int left = 0;
            int currGap = 0;
            int maxGap = 0;

            for (int right = 0; right <= n; ++right) {
                  currGap += gap[right];

                  // Maintain at most (k + 1) gaps in the window
                  if (right - left > k) {
                        currGap -= gap[left];
                        ++left;
                  }

                  // Update the maximum gap sum found
                  maxGap = max(maxGap, currGap);
            }

            return maxGap;
      }
};
