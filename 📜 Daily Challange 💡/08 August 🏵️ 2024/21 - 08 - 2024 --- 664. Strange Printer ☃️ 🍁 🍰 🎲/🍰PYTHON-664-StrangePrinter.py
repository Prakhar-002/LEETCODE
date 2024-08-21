#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 664

#? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(n ^ 2)

#* Problem Description
# The "strange printer" starts with a blank paper, 
# represented as a string `s`, and wants to print characters one contiguous sequence at a time. 
# The printer can only print one character at a time, 
# but it can print the same character again 
# and again in any contiguous segment of the string. 
# The goal is to determine the minimum number of times the printer has to print in order to obtain the string `s`.

class Solution:
      def strangePrinter(self, s: str) -> int:
            n = len(s)
            # `dp` that serves as a memoization table
            dp = [[-1] * n for _ in range(n)]
            # Calls the helper function `Util`
            return self.Util(0, n - 1, s, dp)

      # recursive helper function that performs the dynamic programming calculation
      def Util(self, i: int, j: int, s: str, dp: list) -> int:
            # indices are invalid means substring is empty
            if i > j:
                  # returns 0 because no printing is needed
                  return 0

            #  checks if the solution for the substring `s[i:j+1]` has already been computed
            if dp[i][j] != -1:
                  # returns the precomputed value
                  return dp[i][j]

            # Stores the first character of the current substring
            first_letter = s[i]

            # If the current character is not repeated in the rest of the string
            prints = 1 + self.Util(i + 1, j, s, dp)

            #  Iterates over the rest of the characters in the substring
            for k in range(i + 1, j + 1):
                  #  If a character equal to `first_letter` is found at index `k`
                  # means the substring can potentially be split into two parts
                  if s[k] == first_letter:
                        #  Computes the total prints needed if the string is split into `s[i:k-1+1]` and `s[k+1:j+1]` 
                        # It combines the results of these two parts, as `s[k]` matches `s[i]` and thus doesn't require an extra print
                        better_prints = self.Util(i, k - 1, s, dp) + self.Util(k + 1, j, s, dp)
                        # Updates the minimum number of prints required
                        prints = min(prints, better_prints)

            dp[i][j] = prints
            return prints