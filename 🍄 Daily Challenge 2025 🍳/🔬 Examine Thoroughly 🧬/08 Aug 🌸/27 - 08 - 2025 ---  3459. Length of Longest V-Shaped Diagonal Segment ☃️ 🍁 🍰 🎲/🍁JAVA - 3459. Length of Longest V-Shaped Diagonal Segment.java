//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3459

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  m, n = Dim(grid)

//? 🧺 Space complexity ➺ O(m * n)

class Solution {

      // Directions representing 4 diagonal moves:
      // (down-right, down-left, up-left, up-right)
      private static final int[][] DIRS = {
                  { 1, 1 }, // down-right diagonal
                  { 1, -1 }, // down-left diagonal
                  { -1, -1 }, // up-left diagonal
                  { -1, 1 }, // up-right diagonal
      };

      // Memoization table to store results of DFS
      // Dimensions: [row][col][direction][turnUsed]
      private int[][][][] memo;

      // The grid matrix given in the problem
      private int[][] grid;

      // Number of rows (m) and columns (n) of the grid
      private int m, n;

      // Function to compute the length of the longest V-shaped diagonal
      public int lenOfVDiagonal(int[][] grid) {
            this.grid = grid; // Store reference of input grid
            this.m = grid.length; // Get number of rows
            this.n = grid[0].length; // Get number of columns

            // Initialize memoization array with -1 (unvisited state)
            this.memo = new int[m][n][4][2];
            for (int i = 0; i < m; i++) {
                  for (int j = 0; j < n; j++) {
                        for (int k = 0; k < 4; k++) {
                              Arrays.fill(memo[i][j][k], -1);
                        }
                  }
            }

            int res = 0; // To store maximum diagonal length

            // Iterate over every cell of the grid
            for (int i = 0; i < m; i++) {
                  for (int j = 0; j < n; j++) {

                        // Start only if the cell value is 1 (V-shape starts with 1)
                        if (grid[i][j] == 1) {

                              // Try moving in all 4 diagonal directions
                              for (int direction = 0; direction < 4; direction++) {

                                    // Call DFS to compute the length
                                    // target = 2 because after "1", sequence must be "2"
                                    // +1 because starting cell "1" is included in length
                                    res = Math.max(res, dfs(i, j, direction, true, 2) + 1);
                              }
                        }
                  }
            }
            return res; // Return the maximum length found
      }

      // Depth-First Search to explore diagonals
      // cx, cy = current coordinates
      // direction = current diagonal direction index
      // turn = whether we can still make one turn (true/false)
      // target = the expected next number in sequence (2, 0, 2, 0…)
      private int dfs(int cx, int cy, int direction, boolean turn, int target) {

            // Compute next cell coordinates
            int nx = cx + DIRS[direction][0];
            int ny = cy + DIRS[direction][1];

            // Boundary check and sequence check
            // If outside grid OR value not equal to target → stop
            if (nx < 0 || ny < 0 || nx >= m || ny >= n || grid[nx][ny] != target) {
                  return 0;
            }

            // Convert boolean "turn" into integer (1 if true, 0 if false)
            int turnInt = turn ? 1 : 0;

            // Return cached result if already computed
            if (memo[nx][ny][direction][turnInt] != -1) {
                  return memo[nx][ny][direction][turnInt];
            }

            // Case 1: Continue moving in the same direction
            int maxStep = dfs(nx, ny, direction, turn, 2 - target);

            // Case 2: If turn is still available, rotate clockwise (90 degrees)
            // and continue exploring in new direction
            if (turn) {
                  maxStep = Math.max(
                              maxStep,
                              dfs(nx, ny, (direction + 1) % 4, false, 2 - target));
            }

            // Store result in memo and return with +1 step count
            memo[nx][ny][direction][turnInt] = maxStep + 1;
            return maxStep + 1;
      }
}
