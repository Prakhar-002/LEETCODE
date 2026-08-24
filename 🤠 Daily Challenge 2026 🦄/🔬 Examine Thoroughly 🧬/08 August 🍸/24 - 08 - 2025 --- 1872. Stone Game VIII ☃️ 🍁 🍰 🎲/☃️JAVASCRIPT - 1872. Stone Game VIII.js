//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1872

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var stoneGameVIII = function(stones) {
      const n = stones.length;

      // Compute prefix sums in-place
      for (let i = 1; i < n; i++) {
            stones[i] += stones[i - 1];
      }

      // Memoization array
      const memo = new Array(n).fill(null);

      function solve(i) {
            // Base case: only the final prefix sum remains
            if (i === n - 1) {
                  return stones[i];
            }

            // Return cached result if already calculated
            if (memo[i] !== null) {
                  return memo[i];
            }

            // Option 1: Take prefix at index i
            const take = stones[i] - solve(i + 1);

            // Option 2: Skip prefix at index i
            const skip = solve(i + 1);

            memo[i] = Math.max(take, skip);
            return memo[i];
      }

      // First turn must pick at least 2 stones, so start at prefix index 1
      return solve(1);
};