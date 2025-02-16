#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 58

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def lengthOfLastWord(self, s: str) -> int:
            l = len(s) - 1  # Start from the last character in the string
            lastWordLen = 0  # Initialize last word length to 0

            # Skip trailing spaces if any
            while l >= 0 and s[l] == ' ':
                  l -= 1

            # Count characters of the last word
            while l >= 0 and s[l] != ' ':
                  lastWordLen += 1
                  l -= 1

            return lastWordLen  # Return the length of the last word
