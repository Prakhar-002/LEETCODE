//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 486

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

var predictTheWinner = function(nums) {
      const memo = new Map();

      function solve(i, j) {
            // No elements left — score nothing
            if (i > j)
                  return 0;

            // One element left — must take it
            if (i === j)
                  return nums[i];

            // Return cached result if already computed
            const key = `${i},${j}`;
            if (memo.has(key))
                  return memo.get(key);

            // Take from left — opponent then picks optimally from remaining
            const takeI = nums[i] + Math.min(
                  solve(i + 2, j),
                  solve(i + 1, j - 1)
            );

            // Take from right — opponent then picks optimally from remaining
            const takeJ = nums[j] + Math.min(
                  solve(i, j - 2),
                  solve(i + 1, j - 1)
            );

            // Current player picks whichever gives the higher personal score
            const result = Math.max(takeI, takeJ);
            memo.set(key, result);
            return result;
      }

      const total   = nums.reduce((a, b) => a + b, 0);
      const p1Score = solve(0, nums.length - 1);
      const p2Score = total - p1Score;

      // Player 1 wins if their score is at least equal to player 2's
      return p1Score >= p2Score;
};