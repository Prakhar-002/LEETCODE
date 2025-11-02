//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2257

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m * n)

function countUnguarded(m, n, guards, walls) {
      // Initialize grid: 0 means unguarded, 1 means guarded, 2 means guard/wall
      const g = Array.from({ length: m }, () => Array(n).fill(0));

      // Mark guards and walls
      for (const [x, y] of guards) g[x][y] = 2;
      for (const [x, y] of walls) g[x][y] = 2;

      // Directions: up, right, down, left
      const dirs = [[-1, 0], [0, 1], [1, 0], [0, -1]];

      // Process line of sight for each guard
      for (const [gx, gy] of guards) {
            for (const [dx, dy] of dirs) {
                  let x = gx, y = gy;
                  while (true) {
                        x += dx; y += dy;
                        // Stop if out of bounds or hit guard/wall
                        if (x < 0 || x >= m || y < 0 || y >= n || g[x][y] === 2) break;
                        g[x][y] = 1; // Mark as guarded
                  }
            }
      }

      // Count and return unguarded cells
      return g.flat().filter(v => v === 0).length;
}
