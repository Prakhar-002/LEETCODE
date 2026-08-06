//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 877

// ? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(n ^ 2)

var stoneGame = function(piles) {
      const n    = piles.length;
      const memo = new Map();

      function solve(i, j) {
            // No piles left — score nothing
            if (i > j)
                  return 0;

            // Return cached result if already computed
            const key = `${i},${j}`;
            if (memo.has(key))
                  return memo.get(key);

            // Take from left — opponent then picks optimally from remaining
            const takeI = piles[i] + Math.min(
                  solve(i + 2, j),
                  solve(i + 1, j - 1)
            );

            // Take from right — opponent then picks optimally from remaining
            const takeJ = piles[j] + Math.min(
                  solve(i, j - 2),
                  solve(i + 1, j - 1)
            );

            // Current player picks whichever gives the higher personal score
            const result = Math.max(takeI, takeJ);
            memo.set(key, result);
            return result;
      }

      const total = piles.reduce((a, b) => a + b, 0);
      const alice = solve(0, n - 1);
      const bob   = total - alice;

      // Alice wins if her score is at least equal to Bob's
      return alice >= bob;
};

//!-----------------------------------------------------------------------

var stoneGame = function(piles) {
      return true;
};