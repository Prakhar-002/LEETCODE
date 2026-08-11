//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1510

//? ⌚ Time complexity ➺ O(n sqrt(n)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var winnerSquareGame = function(n) {
      // Memoization table: null = unvisited, true/false = computed result
      const dp = new Array(n + 1).fill(null);

      function solve(rem) {
            // Base case: 0 stones left means the player loses
            if (rem === 0) {
                  return false;
            }

            // Return cached result if available
            if (dp[rem] !== null) {
                  return dp[rem];
            }

            // Try taking any valid square number of stones
            for (let k = 1; k * k <= rem; k++) {
                  // If opponent loses after this move, current player wins
                  if (!solve(rem - k * k)) {
                        dp[rem] = true;
                        return true;
                  }
            }

            // If no move guarantees a win, current player loses
            dp[rem] = false;
            return false;
      }

      return solve(n);
};