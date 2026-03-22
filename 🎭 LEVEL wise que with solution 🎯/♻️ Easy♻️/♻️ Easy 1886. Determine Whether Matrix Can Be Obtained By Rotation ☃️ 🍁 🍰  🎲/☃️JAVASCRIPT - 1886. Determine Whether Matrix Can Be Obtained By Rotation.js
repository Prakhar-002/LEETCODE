//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1886

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(mat)

//? 🧺 Space complexity ➺ O(1)

var findRotation = function (mat, target) {
      const n = mat.length;

      // ---------- Transpose: flip matrix along main diagonal ----------
      function transpose(mat) {
            for (let i = 0; i < n; i++) {
                  for (let j = i + 1; j < n; j++) {
                        const temp = mat[i][j];
                        mat[i][j] = mat[j][i];
                        mat[j][i] = temp;
                  }
            }
      }

      // ---------- Rotate 90° clockwise: transpose then reverse each row ----------
      function rotate(mat) {
            transpose(mat);
            for (const row of mat) {
                  row.reverse();
            }
      }

      // ---------- Compare two matrices element by element ----------
      function equals(a, b) {
            for (let i = 0; i < n; i++) {
                  for (let j = 0; j < n; j++) {
                        if (a[i][j] !== b[i][j])
                              return false;
                  }
            }
            return true;
      }

      // Try all 4 rotations (0°, 90°, 180°, 270°)
      for (let r = 0; r < 4; r++) {
            // Check before rotating so 0° is also tested
            if (equals(mat, target))
                  return true;

            // Rotate 90° clockwise for next iteration
            rotate(mat);
      }

      return false;
};