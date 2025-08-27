//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3459

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  m, n = Dim(grid)

//? 🧺 Space complexity ➺ O(m * n)

var lenOfVDiagonal = function (grid) {
      // Define 4 diagonal directions:
      // (down-right, down-left, up-left, up-right)
      const DIRS = [
            [1, 1],    // down-right
            [1, -1],   // down-left
            [-1, -1],  // up-left
            [-1, 1],   // up-right
      ];

      // Get number of rows and columns
      const m = grid.length,
            n = grid[0].length;

      // Memoization array (flattened into 1D for efficiency)
      // Size = m * n * 8 because:
      //   - each cell (m*n)
      //   - 4 directions
      //   - 2 states for "turn" (true/false)
      const memo = new Array(m * n * 8).fill(-1);

      // Depth-First Search function
      function dfs(cx, cy, direction, turn, target) {
            // Compute next cell coordinates based on current direction
            const nx = cx + DIRS[direction][0];
            const ny = cy + DIRS[direction][1];

            // If out of bounds OR value not equal to expected target → stop
            if (nx < 0 || ny < 0 || nx >= m || ny >= n || grid[nx][ny] != target) {
                  return 0;
            }

            // Convert "turn" (boolean) into integer (1 or 0)
            const turnInt = turn ? 1 : 0;

            // Calculate unique index for memoization
            const index = nx * n * 8 + ny * 8 + direction * 2 + turnInt;

            // If already computed, return cached value
            if (memo[index] !== -1) {
                  return memo[index];
            }

            // Case 1: Continue moving in same direction
            let maxStep = dfs(nx, ny, direction, turn, 2 - target);

            // Case 2: If turn still available, rotate 90° clockwise and explore
            if (turn) {
                  maxStep = Math.max(
                        maxStep,
                        dfs(nx, ny, (direction + 1) % 4, false, 2 - target),
                  );
            }

            // Save result in memo and return with +1 step count
            memo[index] = maxStep + 1;
            return maxStep + 1;
      }

      let res = 0;   // Store maximum diagonal length found

      // Iterate through every cell in the grid
      for (let i = 0; i < m; i++) {
            for (let j = 0; j < n; j++) {

                  // Start only if value = 1 (V-diagonal must start with 1)
                  if (grid[i][j] === 1) {

                        // Try all 4 diagonal directions
                        for (let direction = 0; direction < 4; direction++) {

                              // Call DFS with initial target = 2
                              // +1 because we count starting cell itself
                              res = Math.max(res, dfs(i, j, direction, true, 2) + 1);
                        }
                  }
            }
      }

      // Return the maximum V-diagonal length found
      return res;
};
