void rotate(int** matrix, int matrixSize, int* matrixColSize) {
      // reverse the matrix first
      int n = matrixSize;

      for(int i = 0, j = n - 1; i <j; i++, j-- ){
            int* temp = matrix[i];
            matrix[i] = matrix[j];
            matrix[j] = temp;
      }

      // Taking transpose of matrix
      for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                  int temp = matrix[i][j];
                  matrix[i][j] = matrix[j][i];
                  matrix[j][i] = temp;
            }
      }
}