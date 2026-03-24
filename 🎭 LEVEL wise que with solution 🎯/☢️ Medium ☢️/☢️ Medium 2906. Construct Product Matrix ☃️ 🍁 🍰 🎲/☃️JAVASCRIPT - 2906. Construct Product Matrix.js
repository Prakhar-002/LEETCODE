//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2906

//? ⌚ Time complexity ➺ O(ROWS * COLS)

//? 🧺 Space complexity ➺ O(ROWS * COLS)

var constructProductMatrix = function(grid) {
      const MOD = 12345;
      const n   = grid.length;
      const m   = grid[0].length;

      // Result product matrix initialised with zeros
      const product = Array.from(
            {length: n},
            () => new Array(m).fill(0)
      );

      // ---------- Pass 1 (Right to Left, Bottom to Top): fill suffix products ----------
      // product[i][j] = product of all elements AFTER (i,j) in row-major order
      let suffix = 1;

      for (let i = n - 1; i >= 0; i--) {
            for (let j = m - 1; j >= 0; j--) {
                  product[i][j] = suffix;
                  suffix  = (suffix * grid[i][j]) % MOD;
            }
      }

      // ---------- Pass 2 (Left to Right, Top to Bottom): multiply prefix products ----------
      // product[i][j] *= product of all elements BEFORE (i,j) in row-major order
      let prefix = 1;

      for (let i = 0; i < n; i++) {
            for (let j = 0; j < m; j++) {
                  product[i][j] = (prefix * product[i][j]) % MOD;
                  prefix  = (prefix * grid[i][j]) % MOD;
            }
      }

      return product;
};