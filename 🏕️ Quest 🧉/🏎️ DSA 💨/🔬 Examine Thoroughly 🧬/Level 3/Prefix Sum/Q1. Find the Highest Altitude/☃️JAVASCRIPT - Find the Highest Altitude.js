//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1732

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(gain)

//? 🧺 Space complexity ➺ O(1)

var largestAltitude = function (gain) {
      // Initialize the highest altitude to negative infinity
      let highAltitude = -Infinity;

      // Initialize the current altitude to 0
      let curSum = 0;

      // Iterate through the gain array to calculate altitudes
      for (let n of gain) {
            // Add the current gain to the cumulative altitude
            curSum += n;

            // Update the highest altitude encountered so far
            highAltitude = Math.max(highAltitude, curSum);
      }

      // If the highest altitude is positive, return it; otherwise, return 0
      return Math.max(highAltitude, 0);
}