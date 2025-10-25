//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 176

//? ⌚ Time complexity ➺ O(n / 7) 

//? 🧺 Space complexity ➺ O(1)

/**
 * Calculates the total money saved in the bank after n days.
 *
 * @param {number} n Number of days
 * @return {number} Total amount of money after n days
 */
var totalMoney = function (n) {
      const weeks = Math.floor(n / 7);         // Number of complete weeks
      const days = n % 7;                      // Remaining days in last week
      let money = 0;

      // Calculate total for complete weeks
      for (let i = 0; i < weeks; i++) {
            // Each week: 7 * (i + 1) + 21 (21 is sum 1...6)
            money += 7 * (i + 1) + 21;
      }

      // Add money for remaining days (after last week)
      for (let d = 0; d < days; d++) {
            // Each day: starts at weeks + 1 and increases by 1 each day
            money += (weeks + 1) + d;
      }

      return money;
};
