//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1900

//? ⌚ Time complexity ➺ O(n ^ 4) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(log n)

var earliestAndLatest = function (n, firstPlayer, secondPlayer) {
      // Recursive helper to simulate tournament rounds
      const dfs = (left, right, total) => {
            if (left === right) return [1, 1]; // same player
            if (left > right) return dfs(right, left, total); // symmetry

            let minRound = Infinity, maxRound = -Infinity;

            // Try all possible mappings in the next round
            for (let i = 1; i <= left; i++) {
                  for (let j = left - i + 1; j <= right - i; j++) {
                        let sum = i + j;
                        // Check if players can meet in this round
                        if (left + right - Math.floor(total / 2) <= sum && sum <= Math.floor((total + 1) / 2)) {
                              let [a, b] = dfs(i, j, Math.floor((total + 1) / 2)); // simulate next round
                              minRound = Math.min(minRound, a + 1); // accumulate rounds
                              maxRound = Math.max(maxRound, b + 1);
                        }
                  }
            }

            return [minRound, maxRound];
      };

      // Map players into mirrored positions for simpler simulation
      return dfs(firstPlayer, n - secondPlayer + 1, n);
};
