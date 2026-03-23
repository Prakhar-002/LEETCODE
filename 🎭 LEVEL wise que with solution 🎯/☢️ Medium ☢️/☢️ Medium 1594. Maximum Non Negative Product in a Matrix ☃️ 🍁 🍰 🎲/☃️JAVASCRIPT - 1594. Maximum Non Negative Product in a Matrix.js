//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1594

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m * n)

var maxProductPath = function (grid) {
      const m = grid.length;
      const n = grid[0].length;
      const MOD = 1_000_000_007n;    // BigInt to prevent precision loss

      // dp[i][j] = [maxProduct, minProduct] or null if not yet computed
      const dp = Array.from({ length: m }, () => new Array(n).fill(null));

      // ---------- Recursive helper returning [maxProduct, minProduct] ----------
      function solve(i, j) {

            // Base case: bottom-right cell has only one path (itself)
            if (i === m - 1 && j === n - 1)
                  return [BigInt(grid[i][j]), BigInt(grid[i][j])];

            // Return cached result if already computed
            if (dp[i][j] !== null)
                  return dp[i][j];

            let maxVal = -Infinity;
            let minVal = Infinity;

            // ---------- Move DOWN ----------
            if (i + 1 < m) {
                  const [downMax, downMin] = solve(i + 1, j);
                  const cur = BigInt(grid[i][j]);

                  // Multiply current cell with both extremes to catch sign flips
                  const d1 = cur * downMax, d2 = cur * downMin;
                  if (d1 > maxVal) maxVal = d1;
                  if (d2 > maxVal) maxVal = d2;
                  if (d1 < minVal) minVal = d1;
                  if (d2 < minVal) minVal = d2;
            }

            // ---------- Move RIGHT ----------
            if (j + 1 < n) {
                  const [rightMax, rightMin] = solve(i, j + 1);
                  const cur = BigInt(grid[i][j]);

                  const r1 = cur * rightMax, r2 = cur * rightMin;
                  if (r1 > maxVal) maxVal = r1;
                  if (r2 > maxVal) maxVal = r2;
                  if (r1 < minVal) minVal = r1;
                  if (r2 < minVal) minVal = r2;
            }

            // Cache and return both extremes
            dp[i][j] = [maxVal, minVal];
            return dp[i][j];
      }

      // Start recursion from top-left corner
      const [maxProduct] = solve(0, 0);

      // If best product is negative → no valid non-negative path exists
      if (maxProduct < 0n)
            return -1;

      return Number(maxProduct % MOD);
};