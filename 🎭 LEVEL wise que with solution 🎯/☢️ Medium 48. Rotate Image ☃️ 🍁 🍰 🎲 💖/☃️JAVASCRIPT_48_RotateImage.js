var rotate = function(matrix) {
      // reverse the matrix first
      let n = matrix.length;
      for (let i = 0, j = n - 1; i < j; i++, j--) {
            let temp = matrix[i];
            matrix[i] = matrix[j];
            matrix[j] = temp;
      }

      // Taking transpose of matrix
      for (let i = 0; i < n; i++) {
            for (let j = i + 1; j < n; j++) {
                  let temp = matrix[i][j];
                  matrix[i][j] = matrix[j][i];
                  matrix[j][i] = temp;
            }
      }
};