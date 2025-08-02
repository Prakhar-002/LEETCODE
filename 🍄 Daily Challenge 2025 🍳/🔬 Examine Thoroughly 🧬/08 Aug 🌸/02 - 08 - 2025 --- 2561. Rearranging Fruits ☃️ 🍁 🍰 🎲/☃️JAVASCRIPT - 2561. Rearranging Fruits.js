//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2561

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(bucket1 + bucket2)

//? 🧺 Space complexity ➺ O(n)

var minCost = function (basket1, basket2) {
      const freq = new Map();
      let m = Infinity;

      for (const b of basket1) {
            freq.set(b, (freq.get(b) || 0) + 1);
            m = Math.min(m, b);
      }
      for (const b of basket2) {
            freq.set(b, (freq.get(b) || 0) - 1);
            m = Math.min(m, b);
      }

      const merge = [];
      for (const [k, c] of freq.entries()) {
            if (c % 2 !== 0) return -1;
            for (let i = 0; i < Math.abs(c) / 2; i++) {
                  merge.push(k);
            }
      }

      merge.sort((a, b) => a - b);
      let res = 0;
      for (let i = 0; i < merge.length / 2; i++) {
            res += Math.min(2 * m, merge[i]);
      }
      return res;
};