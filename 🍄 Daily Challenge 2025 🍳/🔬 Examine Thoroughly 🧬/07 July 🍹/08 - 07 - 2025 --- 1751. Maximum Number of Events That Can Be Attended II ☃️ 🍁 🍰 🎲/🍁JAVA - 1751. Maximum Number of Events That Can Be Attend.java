//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1751

//? ⌚ Time complexity ➺ O(n * (n * k + log n)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * k)

class Solution {
      int[][] dp;  // DP memoization table: dp[count][curIndex] stores max value from curIndex with `count` events already taken

      public int maxValue(int[][] events, int k) {
            // Sort events by their start time
            Arrays.sort(events, (a, b) -> a[0] - b[0]);

            int n = events.length;
            dp = new int[k + 1][n];

            // Initialize all DP states with -1 (uncomputed)
            for (int[] row : dp) {
                  Arrays.fill(row, -1);
            }

            // Start DFS from index 0 with 0 events taken and no previous event (indicated by -1 end time)
            return dfs(0, 0, -1, events, k);
      }

      // Recursive DFS function to find max value
      private int dfs(int curIndex, int count, int prevEndingTime, int[][] events, int k) {
            // Base case: no more events or taken k events
            if (curIndex == events.length || count == k) {
                  return 0;
            }

            // If current event overlaps with the previously selected event, skip it
            if (prevEndingTime >= events[curIndex][0]) {
                  return dfs(curIndex + 1, count, prevEndingTime, events, k);
            }

            // If already computed, return the cached result
            if (dp[count][curIndex] != -1) {
                  return dp[count][curIndex];
            }

            // Option 1: Skip current event and move to next
            int skip = dfs(curIndex + 1, count, prevEndingTime, events, k);

            // Option 2: Take current event (increase count, update previous end time, add value)
            int take = dfs(curIndex + 1, count + 1, events[curIndex][1], events, k) + events[curIndex][2];

            // Take the maximum of the two options
            int ans = Math.max(skip, take);

            // Memoize and return
            dp[count][curIndex] = ans;
            return ans;
      }
}
