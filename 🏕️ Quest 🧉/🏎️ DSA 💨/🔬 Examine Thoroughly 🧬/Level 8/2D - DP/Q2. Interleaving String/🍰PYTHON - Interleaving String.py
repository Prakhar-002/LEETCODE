#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L8.3 Q2

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(s1)

#? 🧺 Space complexity ➺ O(n * m)  ->  m = len(s2) 

class Solution:
      def isInterleave(self, s1: str, s2: str, s3: str) -> bool:
            m, n, l = len(s1), len(s2), len(s3)
            # If total length doesn't match, interleaving is impossible
            if m + n != l:
                  return False

            # dp[i][j] = True if s1[:i] and s2[:j] can form s3[:i+j]
            dp = [[False] * (n + 1) for _ in range(m + 1)]
            dp[0][0] = True  # empty + empty = empty

            # Fill first column: only s1 is used
            for i in range(1, m + 1):
                  # dp[i][0] is True only if:
                  #   - dp[i-1][0] is True (prefix s1[:i-1] matches s3[:i-1])
                  #   - and s1[i-1] == s3[i-1] (current char matches)
                  dp[i][0] = dp[i-1][0] and s1[i-1] == s3[i-1]

            # Fill first row: only s2 is used
            for j in range(1, n + 1):
                  # dp[0][j] is True only if:
                  #   - dp[0][j-1] is True (prefix s2[:j-1] matches s3[:j-1])
                  #   - and s2[j-1] == s3[j-1] (current char matches)
                  dp[0][j] = dp[0][j-1] and s2[j-1] == s3[j-1]

            # Fill the rest of the table
            for i in range(1, m + 1):
                  for j in range(1, n + 1):
                        # Current char in s3 is at index i+j-1
                        # Option 1: take char from s1
                        #   - previous state: dp[i-1][j] must be True
                        #   - and s1[i-1] must match s3[i+j-1]
                        # Option 2: take char from s2
                        #   - previous state: dp[i][j-1] must be True
                        #   - and s2[j-1] must match s3[i+j-1]
                        # If either option is valid, dp[i][j] = True
                        dp[i][j] = (dp[i-1][j] and s1[i-1] == s3[i+j-1]) or \
                                    (dp[i][j-1] and s2[j-1] == s3[i+j-1])

            # Return whether entire s1 and s2 can form entire s3
            return dp[m][n]
