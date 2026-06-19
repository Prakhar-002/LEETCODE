//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1344

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public double angleClock(int hour, int minutes) {
            // Hour hand moves 30° per hour and 0.5° per minute
            double hourAngle = 30.0 * (hour % 12) + 0.5 * minutes;
            // Minute hand moves 6° per minute
            double minutesAngle = 6.0 * minutes;

            double angle = Math.abs(hourAngle - minutesAngle);

            // Return the smaller of the two possible angles
            return Math.min(angle, 360.0 - angle);
      }
}