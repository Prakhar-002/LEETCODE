//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2147

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(corridor)

//? 🧺 Space complexity ➺ O(1)

var numberOfWays = function (corridor) {
      /**
       * Count divider placements where each section has exactly 2 'S' seats.
       * 3-state DP: track seats in current unfinished section.
       */
      const MOD = 1000000007;

      let zero = 0;  // 0 seats in current section
      let one = 0;   // 1 seat in current section
      let two = 1;   // 2 seats (valid section)

      for (let c of corridor) {
            if (c === 'S') {
                  // Seat advances states
                  zero = one;
                  one = two;
                  two = zero;
            } else {
                  // Plant: extend valid sections only
                  two = (two + zero) % MOD;
            }
      }

      return zero;
};
