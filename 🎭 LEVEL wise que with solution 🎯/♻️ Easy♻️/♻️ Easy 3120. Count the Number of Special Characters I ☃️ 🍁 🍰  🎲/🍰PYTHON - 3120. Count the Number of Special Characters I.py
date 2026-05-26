#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3120

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def numberOfSpecialChars(self, word: str) -> int:
            # Build a set of all unique characters in the word
            word_set = set(word)

            ans = 0

            for ch in word:
                  if ch.islower():
                        # Check if its uppercase pair also exists
                        if ch.upper() in word_set:
                              ans += 1
                              # Remove both to avoid counting same pair twice
                              word_set.remove(ch)
                              word_set.remove(ch.upper())

                  if ch.isupper():
                        # Check if its lowercase pair also exists
                        if ch.lower() in word_set:
                              ans += 1
                              # Remove both to avoid counting same pair twice
                              word_set.remove(ch)
                              word_set.remove(ch.lower())

            return ans