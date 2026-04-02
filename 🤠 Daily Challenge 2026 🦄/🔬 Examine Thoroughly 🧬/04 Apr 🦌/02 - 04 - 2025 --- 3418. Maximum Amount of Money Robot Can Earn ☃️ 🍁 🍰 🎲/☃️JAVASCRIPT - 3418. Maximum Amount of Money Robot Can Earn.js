//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3418

// ? ⌚ Time complexity ➺ O(n * m * 3)

// ? 🧺 Space complexity ➺ O(n * m * 3)

var maximumAmount = function (coins) {
      const m = coins.length;
      const n = coins[0].length;
      const NEG = -Infinity;

      // dp[i][j][neu] = best coins collectible from (i,j) with neu neutralizes left
      const dp = Array.from({ length: m }, () =>
            Array.from({ length: n }, () =>
                  new Array(3).fill(NEG)));

      function solve(i, j, neu) {
            // Out of bounds → invalid path
            if (i >= m || j >= n)
                  return NEG;

            // Base case: reached bottom-right cell
            if (i === m - 1 && j === n - 1) {
                  // Use a neutralize to skip this negative cell if possible
                  if (coins[i][j] < 0 && neu > 0)
                        return 0;
                  return coins[i][j];
            }

            // Return cached result if already computed
            if (dp[i][j][neu] !== NEG)
                  return dp[i][j][neu];

            let best = NEG;

            // ---------- Move DOWN ----------
            const down = solve(i + 1, j, neu);
            if (down !== NEG)
                  best = Math.max(best, coins[i][j] + down);

            // ---------- Move RIGHT ----------
            const right = solve(i, j + 1, neu);
            if (right !== NEG)
                  best = Math.max(best, coins[i][j] + right);

            // ---------- Neutralize: skip this negative cell ----------
            // Only available when current cell is negative and neu > 0
            if (coins[i][j] < 0 && neu > 0) {
                  const downSkip = solve(i + 1, j, neu - 1);
                  const rightSkip = solve(i, j + 1, neu - 1);
                  const skipBest = Math.max(downSkip, rightSkip);
                  if (skipBest !== NEG)
                        best = Math.max(best, skipBest);
            }

            dp[i][j][neu] = best;
            return best;
      }

      return solve(0, 0, 2);
};