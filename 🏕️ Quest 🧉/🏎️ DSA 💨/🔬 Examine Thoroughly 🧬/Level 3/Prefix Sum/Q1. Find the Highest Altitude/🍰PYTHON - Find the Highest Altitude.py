#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1732

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(gain)

#? 🧺 Space complexity ➺ O(1)

class Solution: 
      def largestAltitude(self, gain: List[int]) -> int:
            # Initialize the highest altitude to negative infinity
            highAltitude = float('-inf')

            # Initialize the current altitude to 0
            curSum = 0

            # Iterate through the gain list to calculate altitudes
            for n in gain:
                  # Add the current gain to the cumulative altitude
                  curSum += n

                  # Update the highest altitude encountered so far
                  highAltitude = max(highAltitude, curSum)

            # If the highest altitude is positive, return it; otherwise, return 0
            return highAltitude if highAltitude > 0 else 0