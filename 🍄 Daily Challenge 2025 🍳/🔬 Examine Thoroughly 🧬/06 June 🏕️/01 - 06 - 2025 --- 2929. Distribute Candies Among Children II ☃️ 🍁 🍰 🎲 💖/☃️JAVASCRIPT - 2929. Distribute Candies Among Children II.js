//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2929

// ? ⌚ Time complexity ➺ O(n) 

// ? 🧺 Space complexity ➺ O(1)

var distributeCandies = function (n, limit) {
      let ways = 0;                                                         // Initialize valid ways count

      for (let i = 0; i <= Math.min(limit, n); i++) {                       // i = candies for child A

            if (n - i > 2 * limit) continue;                                // If rest exceeds B + C limit, skip

            let minVal = Math.max(0, n - i - limit);                        // Minimum candies for B so C ≤ limit
            let maxVal = Math.min(n - i, limit);                            // Maximum candies B can take

            ways += (maxVal - minVal + 1);                                  // Add valid (B, C) combinations
      }

      return ways;                                                          // Return total number of combinations
};
