//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 474

//? ⌚ Time complexity ➺ O(l * m * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(l * m * n)

class Solution {
      public int findMaxForm(String[] strs, int m, int n) {
            // dp[i][j] holds the maximum number of strings that can be formed 
            // with at most i zeros and j ones
            int[][] dp = new int[m + 1][n + 1];

            for (String s : strs) {
                  int zeros = 0, ones = 0;
                  // Count zeros and ones in current string
                  for (char c : s.toCharArray()) {
                        if (c == '0') zeros++;
                        else ones++;
                  }

                  // Traverse dp backward to avoid using updated states in the same iteration (0/1 knapsack logic)
                  for (int i = m; i >= zeros; i--) {
                        for (int j = n; j >= ones; j--) {
                              // Either skip the string or include it if possible to get max count
                              dp[i][j] = Math.max(dp[i][j], 1 + dp[i - zeros][j - ones]);
                        }
                  }
            }

            // Result stored at full zero and one limits
            return dp[m][n];
      }
}
