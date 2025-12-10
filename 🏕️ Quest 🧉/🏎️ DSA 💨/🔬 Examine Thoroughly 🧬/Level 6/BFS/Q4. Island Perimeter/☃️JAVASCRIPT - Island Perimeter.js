//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.3 Q4

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var islandPerimeter = function (grid) {
      const rows = grid.length;
      const cols = grid[0].length;

      // Visited matrix to avoid recounting cells
      const visited = Array.from({ length: rows }, () => Array(cols).fill(false));

      // DFS to compute perimeter contribution from (i, j)
      const dfs = (i, j) => {
            // Out of bounds or water contributes 1 to perimeter
            if (i < 0 || i >= rows || j < 0 || j >= cols || grid[i][j] === 0) {
                  return 1;
            }

            // Already visited land cell contributes 0
            if (visited[i][j]) {
                  return 0;
            }

            // Mark as visited
            visited[i][j] = true;

            let perimeter = 0;
            // Explore 4 directions
            perimeter += dfs(i + 1, j); // down
            perimeter += dfs(i - 1, j); // up
            perimeter += dfs(i, j + 1); // right
            perimeter += dfs(i, j - 1); // left

            return perimeter;
      };

      // Find first land cell and start DFS
      for (let i = 0; i < rows; i++) {
            for (let j = 0; j < cols; j++) {
                  if (grid[i][j] === 1) {
                        return dfs(i, j);
                  }
            }
      }

      // No land in the grid
      return 0;
};
