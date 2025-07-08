//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1751

//? ⌚ Time complexity ➺ O(n * (n * k + log n)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * k)

class Solution {
public:
      vector<vector<int>> dp;

      int maxValue(vector<vector<int>>& events, int k) {
            // Sort events based on start time
            sort(events.begin(), events.end());

            int n = events.size();
            dp.assign(k + 1, vector<int>(n, -1));  // Initialize memo table

            return dfs(0, 0, -1, events, k);
      }

      int dfs(int cur, int count, int prev_end, vector<vector<int>>& events, int k) {
            if (cur == events.size() || count == k) {
                  return 0;
            }

            if (prev_end >= events[cur][0]) {  // If overlapping, skip
                  return dfs(cur + 1, count, prev_end, events, k);
            }

            if (dp[count][cur] != -1) return dp[count][cur];

            // Option 1: Skip current event
            int skip = dfs(cur + 1, count, prev_end, events, k);

            // Option 2: Take current event
            int take = dfs(cur + 1, count + 1, events[cur][1], events, k) + events[cur][2];

            return dp[count][cur] = max(skip, take);
      }
};
