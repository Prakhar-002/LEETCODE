#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 299

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(secret)

#? 🧺 Space complexity ➺ O(1)

from collections import Counter

class Solution:
      def getHint(self, secret: str, guess: str) -> str:
            # Count the frequency of each digit in both secret and guess
            secretArr = Counter(secret)
            guessArr = Counter(guess)

            bulls = 0  # Exact matches at the same position
            cows = 0   # Correct digits but in wrong position

            # First pass to count bulls and reduce frequency
            for i in range(len(secret)):
                  if secret[i] == guess[i]:
                        bulls += 1
                        # Reduce the matched character count in both
                        secretArr[secret[i]] -= 1
                        guessArr[guess[i]] -= 1

            # Now calculate cows from remaining unmatched characters
            for digit in '0123456789':
                  cows += min(secretArr[digit], guessArr[digit])

            # Format the result as per the problem description
            return f'{bulls}A{cows}B'
