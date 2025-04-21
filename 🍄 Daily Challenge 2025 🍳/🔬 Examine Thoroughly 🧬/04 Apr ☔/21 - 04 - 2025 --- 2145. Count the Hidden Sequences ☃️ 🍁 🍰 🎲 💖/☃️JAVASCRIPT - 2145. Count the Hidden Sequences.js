//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2145

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(differences)

//? 🧺 Space complexity ➺ O(1)

var numberOfArrays = function (differences, lower, upper) {
      // Track current prefix sum
      let currentPrefix = 0;

      // Track max and min values of prefix
      let maxPrefix = 0;
      let minPrefix = 0;

      // Loop through each difference
      for (let diff of differences) {
            currentPrefix += diff;                          // Update prefix sum
            maxPrefix = Math.max(maxPrefix, currentPrefix); // Update max value
            minPrefix = Math.min(minPrefix, currentPrefix); // Update min value
      }

      // Calculate total allowed range
      let validRange = upper - lower;

      // Calculate required space due to shifting
      let neededRange = maxPrefix - minPrefix;

      // Calculate number of valid starting values
      let totalWays = validRange - neededRange + 1;

      // Return count if valid, else 0
      return totalWays > 0 ? totalWays : 0;
};
