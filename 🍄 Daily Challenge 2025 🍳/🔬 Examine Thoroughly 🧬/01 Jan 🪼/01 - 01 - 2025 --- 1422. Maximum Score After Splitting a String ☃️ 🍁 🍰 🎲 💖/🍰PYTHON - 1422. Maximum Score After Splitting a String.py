#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1442

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def maxScore(self, s: str) -> int:
            # Initialize the count of zeros to 0
            zero = 0

            # Count the total number of '1's in the string
            one = s.count('1')

            # Initialize the score to 0
            score = 0

            # Iterate through the string up to the second-to-last character
            for i in range(len(s) - 1):
                  # If the current character is '0', increment the zero count
                  if s[i] == '0':
                        zero += 1
                  # Otherwise, decrement the one count
                  else:
                        one -= 1

                  # Update the maximum score by considering the sum of zeros and ones
                  score = max(score, zero + one)

            # Return the maximum score obtained
            return score
