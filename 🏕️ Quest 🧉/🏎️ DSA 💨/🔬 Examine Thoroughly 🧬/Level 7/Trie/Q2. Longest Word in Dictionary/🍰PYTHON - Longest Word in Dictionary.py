#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L7.4 Q2

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(words)

#? 🧺 Space complexity ➺ O(n)

from typing import List 

class Solution:
      def longestWord(self, words: List[str]) -> str:
            # Sort words lexicographically so that when lengths tie,
            # the lexicographically smaller word is chosen (same as Java Arrays.sort).
            words.sort()

            built_words = set() # "w","wo","wor","worl","world"
            result = ""

            for word in words:
                  # If word length is 1 or its prefix (without last char) exists in built_words
                  if len(word) == 1 or word[:-1] in built_words:
                        # Update result if this word is longer than current result
                        if len(word) > len(result):
                              result = word
                        # Add current word to built set so it can help build longer words
                        built_words.add(word)

            return result
