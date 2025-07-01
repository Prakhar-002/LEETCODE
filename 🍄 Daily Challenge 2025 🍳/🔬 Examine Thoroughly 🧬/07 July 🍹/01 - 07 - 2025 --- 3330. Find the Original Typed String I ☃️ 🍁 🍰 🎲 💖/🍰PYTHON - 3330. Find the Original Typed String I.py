#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3330

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def possibleStringCount(self, word: str) -> int:
            ans, n = 1, len(word)  # Start with one possible string (the original)

            for i in range(1, n): 
                  # If two consecutive characters are the same, we can swap or modify
                  if word[i - 1] == word[i]:
                        ans += 1  # Increase the count of possible strings

            return ans
