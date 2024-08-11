//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1568

//? ⌚ Time complexity ➺ O((n * m) ^ 2) 👉🏻  n = row, m = col

//? 🧺 Space complexity ➺ O(n * m)

var minDays = function (grid) {
      // Function to count the number of islands (disconnected clusters of 1s)
      const countIslands = () => {
            const seen = new Set();

            const dfs = (r, c) => {
                  const stack = [[r, c]];
                  while (stack.length) {
                        const [row, col] = stack.pop();
                        for (const [neiRow, neiCol] of [[row - 1, col], [row + 1, col], [row, col - 1], [row, col + 1]]) {
                              if (
                                    0 <= neiRow && neiRow < grid.length &&
                                    0 <= neiCol && neiCol < grid[0].length &&
                                    grid[neiRow][neiCol] === 1 &&
                                    !seen.has(`${neiRow},${neiCol}`)
                              ) {
                                    seen.add(`${neiRow},${neiCol}`);
                                    stack.push([neiRow, neiCol]);
                              }
                        }
                  }
            };

            let islands = 0;
            for (let row = 0; row < grid.length; row++) {
                  for (let col = 0; col < grid[0].length; col++) {
                        if (grid[row][col] === 1 && !seen.has(`${row},${col}`)) {
                              islands++;
                              seen.add(`${row},${col}`);
                              dfs(row, col);
                        }
                  }
            }

            return islands;
      };

      // If there are initially no valid islands or already more than one island
      if (countIslands() !== 1) {
            return 0;
      }

      // Loop through every cell
      for (let row = 0; row < grid.length; row++) {
            for (let col = 0; col < grid[0].length; col++) {
                  if (grid[row][col] === 1) {
                        // Temporarily set a land cell (1) to water (0)
                        grid[row][col] = 0;
                        // If changing this one cell results in more than one island
                        if (countIslands() !== 1) {
                              return 1;
                        }
                        // Reset the cell back to land after the check
                        grid[row][col] = 1;
                  }
            }
      }

      // If no single cell change results in multiple islands
      return 2;
};