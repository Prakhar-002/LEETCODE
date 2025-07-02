//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3333

//? ⌚ Time complexity ➺ O(k * g) 👉🏻  n = len(groups)

//? 🧺 Space complexity ➺ O(k)

var possibleStringCount = function (word, k) {
      const MOD = 1e9 + 7;

      if (word.length === 0) return 0; 

      const groups = [];
      let count = 1;

      // Step 1: Count group sizes
      for (let i = 1; i < word.length; i++) {
            if (word[i] === word[i - 1]) {
                  count++;
            } else {
                  groups.push(count);
                  count = 1;
            }
      }
      groups.push(count);

      // Step 2: Multiply group sizes
      let total = 1;
      for (const g of groups) {
            total = (total * g) % MOD;
      }

      if (k <= groups.length) return total;

      // Step 3: Dynamic Programming
      let dp = new Array(k).fill(0);
      dp[0] = 1;

      for (const num of groups) {
            const newDp = new Array(k).fill(0);
            let sum = 0;

            for (let s = 0; s < k; s++) {
                  if (s > 0) sum = (sum + dp[s - 1]) % MOD;
                  if (s > num) sum = (sum - dp[s - num - 1] + MOD) % MOD;
                  newDp[s] = sum;
            }

            dp = newDp;
      }

      let invalid = 0;
      for (let i = groups.length; i < k; i++) {
            invalid = (invalid + dp[i]) % MOD;
      }

      return (total - invalid + MOD) % MOD;
};
