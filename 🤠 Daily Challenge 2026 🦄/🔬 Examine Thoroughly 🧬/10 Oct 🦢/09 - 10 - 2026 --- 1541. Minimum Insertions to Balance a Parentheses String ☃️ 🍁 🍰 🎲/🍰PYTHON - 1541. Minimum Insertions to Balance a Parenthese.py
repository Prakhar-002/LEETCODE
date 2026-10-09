#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1541

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def minInsertions(self, s: str) -> int:
            count = 0  # Number of unmatched '(' waiting for consecutive "))"
            res = 0    # Number of insertions required
            i = 0

            while i < len(s):
                  if s[i] == '(':
                        count += 1
                        i += 1
                  else:
                        # Encountered a ')'
                        if count > 0:
                              count -= 1
                        else:
                              # Missing an opening '(' to match this closing sequence
                              res += 1

                        # Check if it is followed by a second ')' to form "))"
                        if i + 1 < len(s) and s[i + 1] == ')':
                              i += 2
                        else:
                              # Only a single ')' found, insert one missing ')'
                              res += 1
                              i += 1

            # Each unmatched '(' still requires two ')' insertions
            return res + (count * 2)