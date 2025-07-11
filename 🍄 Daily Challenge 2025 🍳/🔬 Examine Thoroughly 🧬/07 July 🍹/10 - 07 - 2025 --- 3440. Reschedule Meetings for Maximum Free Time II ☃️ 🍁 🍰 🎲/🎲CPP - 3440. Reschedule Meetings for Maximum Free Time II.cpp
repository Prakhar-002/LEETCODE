//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3440

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(startTime)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int maxFreeTime(int eventTime, vector<int>& startTime, vector<int>& endTime) {
            int n = startTime.size();
            vector<bool> q(n, false);  // Tracks whether meeting can be skipped

            int t1 = 0, t2 = 0;

            for (int i = 0; i < n; ++i) {
                  // ---------- Forward Pass ----------
                  if (endTime[i] - startTime[i] <= t1) {
                        q[i] = true;
                  }
                  t1 = max(t1, startTime[i] - (i == 0 ? 0 : endTime[i - 1]));

                  // ---------- Backward Pass ----------
                  int rev = n - i - 1;
                  if (endTime[rev] - startTime[rev] <= t2) {
                        q[rev] = true;
                  }
                  t2 = max(t2, (i == 0 ? eventTime : startTime[n - i]) - endTime[rev]);
            }

            int res = 0;

            for (int i = 0; i < n; ++i) {
                  int left = (i == 0 ? 0 : endTime[i - 1]);
                  int right = (i == n - 1 ? eventTime : startTime[i + 1]);

                  if (q[i]) {
                        res = max(res, right - left);  // Full block usable
                  } else {
                        int occupied = endTime[i] - startTime[i];
                        res = max(res, right - left - occupied);  // Exclude meeting time
                  }
            }

            return res;
      }
};
