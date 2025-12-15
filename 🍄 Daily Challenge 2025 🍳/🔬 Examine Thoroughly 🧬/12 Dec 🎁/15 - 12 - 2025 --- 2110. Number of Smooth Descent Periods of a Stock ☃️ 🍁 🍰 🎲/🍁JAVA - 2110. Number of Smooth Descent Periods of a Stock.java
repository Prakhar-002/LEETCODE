//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2110

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var getDescentPeriods = function (prices) {
      // If the array is empty, there are no periods.
      if (prices.length === 0) {
            return 0;
      }

      // `periods` accumulates the total count, initialized to 1 for the first element.
      // `prev` tracks the length of the current consecutive descent period.
      let periods = 1;
      let prev = 1;

      // Iterate from the second element to the end of the array.
      for (let i = 1; i < prices.length; i++) {
            // Check if the current price continues the smooth descent streak.
            if (prices[i] === prices[i - 1] - 1) {
                  // If the streak continues, increment its length.
                  prev++;
            } else {
                  // If the streak is broken, start a new one of length 1.
                  prev = 1;
            }

            // A streak of length `k` adds `k` new subarrays ending at this position.
            // Add this count to the total.
            periods += prev;
      }

      // Return the total count of all smooth descent periods.
      return periods;
};