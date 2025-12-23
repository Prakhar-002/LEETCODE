// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L8.3 Q2

// ? ⌚ Time complexity ➺ O(n * m) 👉🏻 n = len(s1)

// ? 🧺 Space complexity ➺ O(n * m) -> m = len(s2)

class Solution {
      public boolean isInterleave(String s1, String s2, String s3) {
            int m = s1.length();
            int n = s2.length();
            int l = s3.length();
            // If total length doesn't match, interleaving is impossible
            if (m + n != l) {
                  return false;
            }

            // dp[i][j] = true if s1.substring(0, i) and s2.substring(0, j)
            // can form s3.substring(0, i+j)
            boolean[][] dp = new boolean[m + 1][n + 1];
            dp[0][0] = true; // empty + empty = empty

            // Fill first column: only s1 is used
            for (int i = 1; i <= m; i++) {
                  // dp[i][0] is true only if:
                  // - dp[i-1][0] is true (prefix s1[:i-1] matches s3[:i-1])
                  // - and s1.charAt(i-1) == s3.charAt(i-1) (current char matches)
                  dp[i][0] = dp[i - 1][0] && s1.charAt(i - 1) == s3.charAt(i - 1);
            }

            // Fill first row: only s2 is used
            for (int j = 1; j <= n; j++) {
                  // dp[0][j] is true only if:
                  // - dp[0][j-1] is true (prefix s2[:j-1] matches s3[:j-1])
                  // - and s2.charAt(j-1) == s3.charAt(j-1) (current char matches)
                  dp[0][j] = dp[0][j - 1] && s2.charAt(j - 1) == s3.charAt(j - 1);
            }

            // Fill the rest of the table
            for (int i = 1; i <= m; i++) {
                  for (int j = 1; j <= n; j++) {
                        // Current char in s3 is at index i+j-1
                        // Option 1: take char from s1
                        // - previous state: dp[i-1][j] must be true
                        // - and s1.charAt(i-1) must match s3.charAt(i+j-1)
                        // Option 2: take char from s2
                        // - previous state: dp[i][j-1] must be true
                        // - and s2.charAt(j-1) must match s3.charAt(i+j-1)
                        // If either option is valid, dp[i][j] = true
                        dp[i][j] = (dp[i - 1][j] && s1.charAt(i - 1) == s3.charAt(i + j - 1)) ||
                                    (dp[i][j - 1] && s2.charAt(j - 1) == s3.charAt(i + j - 1));
                  }
            }

            // Return whether entire s1 and s2 can form entire s3
            return dp[m][n];
      }
}
