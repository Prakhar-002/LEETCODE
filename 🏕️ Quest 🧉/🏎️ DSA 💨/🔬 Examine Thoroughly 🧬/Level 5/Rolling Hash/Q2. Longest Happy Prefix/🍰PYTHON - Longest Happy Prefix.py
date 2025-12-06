#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L5.3 Q2

# ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

# ? 🧺 Space complexity ➺ O(n)

class Solution:
      def findLps(self, s):
            # Length of the string
            n = len(s)

            # length = current length of the longest proper prefix
            # which is also a suffix for the substring s[0:i]
            length = 0

            # Start from index 1 since LPS of the first character is always 0
            i = 1

            # LPS array: lps[i] = length of longest proper prefix of s[:i+1]
            # that is also a suffix of s[:i+1]
            lps = [0] * n

            # Build the LPS array in O(n)
            while i < n:
                  if s[i] == s[length]:
                        # Characters match, we can extend current prefix-suffix
                        length += 1
                        lps[i] = length
                        i += 1
                  else:
                        # Mismatch after having matched some characters
                        if length != 0:
                              # Fall back to the previous longest prefix-suffix
                              # This avoids restarting from scratch (KMP optimization)
                              length = lps[length - 1]
                        else:
                              # No prefix-suffix to fall back to; lps[i] stays 0
                              i += 1

            return lps  

      def longestPrefix(self, s: str) -> str:
            # Compute LPS array for the whole string
            prefix_lps = self.findLps(s)

            # The last value in LPS is the length of the longest prefix
            # which is also a suffix of the entire string (proper prefix)
            happy_prefix_len = prefix_lps[-1]

            # Return that prefix substring
            return s[:happy_prefix_len]
