#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 76

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(m)  -> m = Unique Char in s & t

from collections import defaultdict

class Solution:
      def minWindow(self, s: str, t: str) -> str:
            # If the target string t is empty, return an empty string
            if t == "":
                  return ""

            # Create frequency dictionaries for t and the current window
            countT, window = defaultdict(int), defaultdict(int)

            # Populate countT with the frequency of characters in t
            for ch in t:
                  countT[ch] += 1

            # `have` tracks how many characters are matched, `need` is total unique characters in t
            have, need = 0, len(countT)

            # Store the result substring's indices and length
            res, resLen = [-1, -1], float("inf")

            l = 0  # Left pointer of the sliding window

            # Iterate over the string with right pointer `r`
            for r in range(len(s)):
                  ch = s[r]
                  window[ch] += 1  # Add current character to window frequency

                  # If this character is in t and its frequency matches in the window
                  if ch in countT and window[ch] == countT[ch]:
                        have += 1

                  # Try to shrink the window when all required characters are matched
                  while have == need:
                        # Update result if the current window is smaller
                        if (r - l + 1) < resLen:
                              res = [l, r]
                              resLen = r - l + 1

                        # Remove leftmost character from the window
                        window[s[l]] -= 1

                        # If a needed character falls below its required frequency
                        if s[l] in countT and window[s[l]] < countT[s[l]]:
                              have -= 1

                        l += 1  # Move the left pointer forward

            l, r = res
            # Return the smallest window substring or an empty string if not found
            return s[l: r + 1] if resLen != float("inf") else ""
