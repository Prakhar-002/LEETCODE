//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2946

// ? ⌚ Time complexity ➺ O(n * m) 

// ? 🧺 Space complexity ➺ O(n * m)

var areSimilar = function (mat, k) {
      const m = mat.length;      // Total rows
      const n = mat[0].length;   // Total columns
      k = k % n;                 // Effective shift

      for (let i = 0; i < m; i++) {
            for (let j = 0; j < n; j++) {
                  let finalIdx;
                  // Calculate the index after the cyclic shift
                  if (i % 2 === 0) {
                        finalIdx = (j + k) % n;
                  } else {
                        // Handle negative wrap-around
                        finalIdx = (j - k + n) % n;
                  }

                  // Compare current cell with its shifted counterpart
                  if (mat[i][j] !== mat[i][finalIdx]) {
                        return false;
                  }
            }
      }
      return true;
};