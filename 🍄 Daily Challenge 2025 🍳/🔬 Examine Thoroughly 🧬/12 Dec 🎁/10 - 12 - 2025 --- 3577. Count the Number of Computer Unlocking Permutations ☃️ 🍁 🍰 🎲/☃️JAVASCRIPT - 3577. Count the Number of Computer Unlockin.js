//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3577

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(complexity)

//? 🧺 Space complexity ➺ O(1)

var countPermutations = function (complexity) {
      const n = complexity.length;

      // Step 1: Validate strictly increasing from complexity[0]
      // If complexity[i] <= complexity[0] for any i, return 0
      for (let i = 1; i < n; i++) {
            if (complexity[i] <= complexity[0]) {
                  return 0;
            }
      }

      // Step 2: Calculate (n-1)! % (10^9 + 7)
      // Why (n-1)!? First element fixed at index 0,
      // remaining n-1 elements can be permuted arbitrarily
      const MOD = 1000000007;
      let ans = 1;

      // Compute factorial iteratively to avoid overflow
      for (let i = 2; i < n; i++) {
            ans = (ans * i) % MOD;
      }

      return ans;
};
