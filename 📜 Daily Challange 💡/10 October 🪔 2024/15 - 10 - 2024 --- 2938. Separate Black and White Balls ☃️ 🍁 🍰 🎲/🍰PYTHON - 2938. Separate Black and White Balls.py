#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2938

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def minimumSteps(self, s: str) -> int:
            # Initialize total steps needed to move all white tiles ('0') to the left
            totalSteps = 0

            # Track the position of the next available white tile ('0') to move
            whitePosition = 0

            # Iterate through each character in the string
            for curPosition in range((len(s))):
                  # If the current tile is white ('0')
                  if s[curPosition] == "0":
                        # Calculate the steps needed to move this tile to the correct position
                        # and add to totalSteps (difference between current position and whitePosition)
                        totalSteps += curPosition - whitePosition

                        # Update whitePosition to the next available spot for a white tile
                        whitePosition += 1

            # Return the total number of steps needed
            return totalSteps
