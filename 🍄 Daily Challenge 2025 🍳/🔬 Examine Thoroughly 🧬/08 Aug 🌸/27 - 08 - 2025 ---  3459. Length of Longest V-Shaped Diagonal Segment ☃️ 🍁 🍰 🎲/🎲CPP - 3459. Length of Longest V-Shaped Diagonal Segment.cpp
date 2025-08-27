//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3459

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  m, n = Dim(grid)

//? 🧺 Space complexity ➺ O(m * n)

class Solution {
public:
      int lenOfVDiagonal(vector<vector<int>> &grid) {
            // Get dimensions of the grid
            int m = grid.size(), n = grid[0].size();

            // Define 4 diagonal directions:
            // (down-right, down-left, up-left, up-right)
            int dirs[4][2] = {{1, 1}, {1, -1}, {-1, -1}, {-1, 1}};

            // Memoization table:
            // memo[row][col][direction][turnUsed]
            // -1 means unvisited
            int memo[m][n][4][2];
            memset(memo, -1, sizeof(memo)); // Initialize all to -1

            // DFS function using lambda (recursion inside C++)
            function<int(int, int, int, bool, int)> dfs =
                  [&](int cx, int cy, int direction, bool turn, int target) -> int {
                  // Calculate next cell coordinates based on current direction
                  int nx = cx + dirs[direction][0];
                  int ny = cy + dirs[direction][1];

                  // Check boundary and sequence constraint:
                  // Stop if out of bounds or next value ≠ expected target
                  if (nx < 0 || ny < 0 || nx >= m || ny >= n || grid[nx][ny] != target) {
                        return 0;
                  }

                  // If already computed, return memoized result
                  if (memo[nx][ny][direction][turn] != -1) {
                        return memo[nx][ny][direction][turn];
                  }

                  // Case 1: Continue moving in the same direction
                  int maxStep = dfs(nx, ny, direction, turn, 2 - target);

                  // Case 2: If turn is still available,
                  // rotate 90° clockwise and continue
                  if (turn) {
                        maxStep = fmax(
                              maxStep,
                              dfs(nx, ny, (direction + 1) % 4, false, 2 - target));
                  }

                  // Store result into memoization table
                  memo[nx][ny][direction][turn] = maxStep + 1;

                  // Return length including this step
                  return maxStep + 1;
            };

            int res = 0; // Store the maximum diagonal length found

            // Iterate through every cell in the grid
            for (int i = 0; i < m; ++i) {
                  for (int j = 0; j < n; ++j) {

                        // A valid V-diagonal must start with value 1
                        if (grid[i][j] == 1) {

                              // Try all 4 diagonal directions
                              for (int direction = 0; direction < 4; ++direction) {

                                    // Call DFS to calculate length
                                    // Start with target = 2 (since after 1 comes 2)
                                    // +1 because we include starting cell itself
                                    res = fmax(res, dfs(i, j, direction, true, 2) + 1);
                              }
                        }
                  }
            }

            // Return the maximum V-diagonal length found
            return res;
      }
};
