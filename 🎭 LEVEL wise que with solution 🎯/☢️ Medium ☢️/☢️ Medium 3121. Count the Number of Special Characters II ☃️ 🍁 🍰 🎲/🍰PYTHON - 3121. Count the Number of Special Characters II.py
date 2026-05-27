#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3121

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def numberOfSpecialChars(self, word: str) -> int:
            # lastSmall[i]    = last index where lowercase letter i appeared
            # firstCapital[i] = first index where uppercase letter i appeared
            lastSmall    = [-1] * 26
            firstCapital = [-1] * 26

            for i, ch in enumerate(word):
                  if ch.islower():
                        # Always update to keep the LAST occurrence of lowercase
                        lastSmall[ord(ch) - ord('a')] = i
                  else:
                        # Only record the FIRST occurrence of uppercase
                        if firstCapital[ord(ch) - ord('A')] == -1:
                              firstCapital[ord(ch) - ord('A')] = i

            count = 0

            for i in range(26):
                  # Valid special pair: both exist and last lowercase comes before first uppercase
                  if lastSmall[i] != -1 and firstCapital[i] != -1 and lastSmall[i] < firstCapital[i]:
                        count += 1

            return count