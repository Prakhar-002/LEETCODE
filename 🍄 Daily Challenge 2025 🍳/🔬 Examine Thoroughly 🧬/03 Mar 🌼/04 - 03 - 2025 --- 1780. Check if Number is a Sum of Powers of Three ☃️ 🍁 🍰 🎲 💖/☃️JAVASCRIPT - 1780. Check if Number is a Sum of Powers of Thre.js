//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1780

//? ⌚ Time complexity ➺ O(Log n) Base 3 

//? 🧺 Space complexity ➺ O(1)

var checkPowersOfThree = function (n) {
      // Loop runs until 'n' becomes 0
      while (n > 0) {
            // If remainder is 2 when dividing by 3, 'n' cannot be represented
            // as sum of distinct powers of 3 (only 0 or 1 coefficient allowed)
            if (n % 3 === 2) {
                  return false;
            }

            // Divide 'n' by 3 to check next digit in base 3
            n = Math.floor(n / 3);
      }

      // If loop completes, 'n' can be represented as sum of distinct powers of 3
      return true;
};
