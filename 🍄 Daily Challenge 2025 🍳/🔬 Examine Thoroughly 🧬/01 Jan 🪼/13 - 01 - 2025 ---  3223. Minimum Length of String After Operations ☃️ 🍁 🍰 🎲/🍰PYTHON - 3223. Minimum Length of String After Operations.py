#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3223

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def minimumLength(self, s: str) -> int:
            # Create a list to count occurrences of each letter in the string
            charFreq = [0] * 26

            # Iterate over each character in the string
            for char in s:
                  # Increment the count for the corresponding character
                  charFreq[ord(char) - ord('a')] += 1

            # Initialize the result variable to store the minimum length
            minLength = 0

            # Iterate through the frequency counts
            for freq in charFreq:
                  if freq > 0:  # If the character appears in the string
                        # Add 1 if frequency is odd, otherwise add 2
                        minLength += 1 if freq % 2 == 1 else 2

            # Return the calculated minimum length
            return minLength
