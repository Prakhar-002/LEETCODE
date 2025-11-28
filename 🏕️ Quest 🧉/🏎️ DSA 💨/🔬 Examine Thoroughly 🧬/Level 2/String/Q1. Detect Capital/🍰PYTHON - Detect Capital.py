#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L2.3 Q1

# ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

# ? 🧺 Space complexity ➺ O(1)

class Solution:
      def detectCapitalUse(self, word: str) -> bool:
            cap = 0          # Counter for uppercase letters
            small = 0        # Counter for lowercase letters

            # Traverse the word letter by letter
            for ch in word:
                  if ch.isupper():
                        cap += 1   # Increment uppercase count if character is uppercase
                  else:
                        small += 1 # Increment lowercase count otherwise

            # Check if exactly one uppercase letter which is the first letter
            if cap == 1 and word[0].isupper():
                  return True

            # Check if all letters are uppercase or all letters are lowercase
            if cap == len(word) or small == len(word):
                  return True

            # Otherwise, capitalization usage is invalid
            return False
