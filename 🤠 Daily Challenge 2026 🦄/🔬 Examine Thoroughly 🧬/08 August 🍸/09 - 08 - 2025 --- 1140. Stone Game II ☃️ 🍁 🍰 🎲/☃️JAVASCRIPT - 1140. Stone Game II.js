//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1140

//? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

var stoneGameII = function(piles) {
      const n = piles.length;

      // Calculate suffix sums in-place
      for (let i = n - 2; i >= 0; i--) {
            piles[i] += piles[i + 1];
      }

      // Memoization table: memo[i][M]
      const memo = Array.from({ length: n }, () => new Array(n + 1).fill(-1));

      function dfs(i, M) {
            // If current player can take all remaining piles
            if (i + 2 * M >= n) {
                  return piles[i];
            }

            // Return cached result if available
            if (memo[i][M] !== -1) {
                  return memo[i][M];
            }

            let minOpponent = Infinity;

            // Try taking X piles where 1 <= X <= 2 * M
            for (let X = 1; X <= 2 * M; X++) {
                  minOpponent = Math.min(minOpponent, dfs(i + X, Math.max(M, X)));
            }

            // Maximize score: total remaining stones minus opponent's best response
            memo[i][M] = piles[i] - minOpponent;
            return memo[i][M];
      }

      return dfs(0, 1);
};