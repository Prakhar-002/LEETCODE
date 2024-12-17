#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1657

#? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(word1)

#? 🧺 Space complexity ➺ O(1)    👉🏻  m = len(word2)

from typing import Counter


class Solution:
      def closeStrings(self, word1: str, word2: str) -> bool:
            # If lengths of the words don't match, they cannot be close
            if len(word1) != len(word2):
                  return False

            # Frequency arrays for 26 lowercase English letters
            freq1 = [0] * 26
            freq2 = [0] * 26

            # Populate the frequency arrays
            for char in word1:
                  freq1[ord(char) - ord('a')] += 1
            for char in word2:
                  freq2[ord(char) - ord('a')] += 1

            # Check if both words use the same set of characters
            if any((freq1[i] > 0) != (freq2[i] > 0) for i in range(26)):
                  return False

            # Compare sorted frequency distributions
            return sorted(freq1) == sorted(freq2)

#!-------------------------------------------------------------------------------

#? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(word1)

#? 🧺 Space complexity ➺ O(1)    👉🏻  m = len(word2)

class Solution:
      def closeStrings(self, word1: str, word2: str) -> bool:
            return sorted(Counter(word1).values()) == sorted(Counter(word2).values()) and sorted(Counter(word1).keys()) == sorted(Counter(word2).keys())