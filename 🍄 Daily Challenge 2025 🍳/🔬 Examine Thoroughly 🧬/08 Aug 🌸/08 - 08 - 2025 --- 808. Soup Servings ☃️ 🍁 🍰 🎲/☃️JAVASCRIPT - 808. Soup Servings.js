//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 808

//? ⌚ Time complexity ➺ O(1) 

//? 🧺 Space complexity ➺ O(1)

var soupServings = function (n) {

      // For large values of n, the probability approaches 1.
      // This is an optimization to avoid unnecessary computation.
      if (n >= 4800) return 1.0;

      // Create a memoization map to cache results of recursive calls
      const dp = new Map();

      // Helper function to compute the probability recursively
      const poss = (a, b) => {
            // If A is empty and B is not, return 1 (A finishes first)
            if (a <= 0 && b > 0) return 1.0;

            // If B is empty and A is not, return 0 (B finishes first)
            if (a > 0 && b <= 0) return 0.0;

            // If both are empty at the same time, return 0.5
            if (a <= 0 && b <= 0) return 0.5;

            // Create a unique key for memoization
            const key = `${a},${b}`;

            // If already computed, return stored value
            if (dp.has(key)) return dp.get(key);

            // Calculate expected value using all 4 possible serving operations
            let prob = 0.25 * (
                  poss(a - 4, b) +
                  poss(a - 3, b - 1) +
                  poss(a - 2, b - 2) +
                  poss(a - 1, b - 3)
            );

            // Store in dp map
            dp.set(key, prob);

            return prob;
      };

      // Convert n into units of 25 ml servings
      const q = Math.ceil(n / 25.0);
      return poss(q, q);
};