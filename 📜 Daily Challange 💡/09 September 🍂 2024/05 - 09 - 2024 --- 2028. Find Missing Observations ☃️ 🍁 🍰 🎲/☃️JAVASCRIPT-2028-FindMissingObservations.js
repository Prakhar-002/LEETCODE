//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2028

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  m = len(rolls)

//? 🧺 Space complexity ➺ O(1)

/**
* @param {number[]} rolls - A list of integers representing the dice rolls that are already known
* @param {number} mean - The desired average (mean) of all rolls, including the missing ones.
* @param {number} n - The number of missing dice rolls.
*/
var missingRolls = function (rolls, mean, n) {
      // `m` : The number of already known rolls
      let m = rolls.length;
      // The total sum of all dice rolls (both known and missing)
      let totalSum = mean * (n + m);
      // missing dice rolls that needs to be distributed across `n` dice
      let missingSum = totalSum - rolls.reduce((a, b) => a + b, 0);

      // If the missing_sum is smaller than n or larger than 6 * n, 
      // it's impossible to find a valid combination of missing dice rolls
      if (!(n <= missingSum && missingSum <= 6 * n)) {
            // returns an empty array
            return [];
      }

      // This array will store the missing dice rolls
      const missingObservation = [];

      // The loop runs while there are still missing rolls to assign
      while (n > 0) {
            // ensures that each roll is as high as possible (up to 6) 
            // but still allows for the remaining dice to be valid 1 - 6
            const dice = Math.min(6, missingSum - n + 1);
            // Adds the current dice roll (`dice`) to the array 
            missingObservation.push(dice);
            // Reduces the remaining sum
            missingSum -= dice;
            // Reduces the count of missing rolls left to allocate
            n--;
      }

      // returns the array
      return missingObservation;
};

