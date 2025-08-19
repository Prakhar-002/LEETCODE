#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2414

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def longestContinuousSubstring(self, s: str) -> int:
            # If the string is empty, no substring can be formed.
            if not s:
                  return 0

            # `total` stores the maximum length found so far. It's initialized to 1
            # because any single character is a valid continuous substring of length 1.
            total = 1
            # `count` tracks the length of the *current* continuous substring.
            count = 1

            # Iterate from the second character to the end of the string.
            for i in range(1, len(s)):
                  # Check if the current character is the next letter in the alphabet
                  # after the previous character by comparing their ASCII values (`ord`).
                  if ord(s[i]) == ord(s[i - 1]) + 1:
                        # If the streak continues, increment the length of the current substring.
                        count += 1
                        # Update the overall maximum length if the current streak is longer.
                        total = max(count, total)
                  else:
                        # If the streak is broken, reset the current count to 1.
                        count = 1

            # Return the maximum length found.
            return total
