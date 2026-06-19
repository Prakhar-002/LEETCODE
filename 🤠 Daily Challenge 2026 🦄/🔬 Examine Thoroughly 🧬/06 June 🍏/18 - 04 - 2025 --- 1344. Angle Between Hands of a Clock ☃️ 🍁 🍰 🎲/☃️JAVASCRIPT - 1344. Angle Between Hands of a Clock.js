//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1344

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var angleClock = function(hour, minutes) {
      // Hour hand moves 30° per hour and 0.5° per minute
      const hourAngle    = 30.0 * (hour % 12) + 0.5 * minutes;
      // Minute hand moves 6° per minute
      const minutesAngle = 6.0 * minutes;

      const angle = Math.abs(hourAngle - minutesAngle);

      // Return the smaller of the two possible angles
      return Math.min(angle, 360.0 - angle);
};