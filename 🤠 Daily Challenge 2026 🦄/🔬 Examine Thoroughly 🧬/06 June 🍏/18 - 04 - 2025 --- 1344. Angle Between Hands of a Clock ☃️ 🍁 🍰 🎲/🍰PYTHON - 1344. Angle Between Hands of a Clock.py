#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1344

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def angleClock(self, hour: int, minutes: int) -> float:
            # Hour hand moves 30° per hour and 0.5° per minute
            hour_angle    = 30.0 * (hour % 12) + 0.5 * minutes
            # Minute hand moves 6° per minute
            minutes_angle = 6.0 * minutes

            angle = abs(hour_angle - minutes_angle)

            # Return the smaller of the two possible angles
            return min(angle, 360.0 - angle)