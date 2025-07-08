//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1751

//? ⌚ Time complexity ➺ O(n * (n * k + log n)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * k)

var maxValue = function (events, k) {
      events.sort((a, b) => a[0] - b[0]);  // Sort by start time

      const n = events.length;
      const dp = Array.from({ length: k + 1 }, () => Array(n).fill(-1));

      function dfs(cur, count, prevEnd) {
            if (cur === n || count === k) return 0;

            if (prevEnd >= events[cur][0]) {
                  return dfs(cur + 1, count, prevEnd);  // Overlap → skip
            }

            if (dp[count][cur] !== -1) return dp[count][cur];

            // Option 1: Skip
            const skip = dfs(cur + 1, count, prevEnd);

            // Option 2: Take
            const take = dfs(cur + 1, count + 1, events[cur][1]) + events[cur][2];

            dp[count][cur] = Math.max(skip, take);
            return dp[count][cur];
      }

      return dfs(0, 0, -1);
};
