#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1935

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(text)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
            broken = set(brokenLetters)             # Convert brokenLetters to a set for fast lookup
            words = text.split()                    # Split the text into individual words
            count = 0                               # Counter for typeable words

            # Check each word in the text
            for word in words:
                  # If any letter in word is broken, skip it
                  if any(ch in broken for ch in word):
                        continue                    # This word can't be typed, move to next
                  count += 1                        # If no broken letters, increment the counter

            return count                            # Return how many words can be typed
