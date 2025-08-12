//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 79

//? ⌚ Time complexity ➺ O(ROWS * COLS * 4 ^ L) 👉🏻  L = len(WORD)

//? 🧺 Space complexity ➺ O(ROWS * COLS)

var exist = function (board, word) {
      const ROWS = board.length;
      const COLS = board[0].length;

      // Create a visited path matrix
      let path = Array.from({ length: ROWS }, () => Array(COLS).fill(false));

      // Depth-First Search (DFS) function
      function dfs(r, c, i) {
            // If the entire word is found, return true
            if (i === word.length) {
                  return true;
            }

            // Boundary conditions and character match check
            if (r < 0 || c < 0 || r >= ROWS || c >= COLS ||
                  board[r][c] !== word[i] || path[r][c]) {
                  return false;
            }

            // Mark the current cell as visited
            path[r][c] = true;

            // Explore all four directions
            let search = (dfs(r + 1, c, i + 1) ||
                  dfs(r - 1, c, i + 1) ||
                  dfs(r, c + 1, i + 1) ||
                  dfs(r, c - 1, i + 1));

            // Backtrack: Unmark the current cell
            path[r][c] = false;

            return search;
      }

      // Start DFS from each cell in the board
      for (let r = 0; r < ROWS; r++) {
            for (let c = 0; c < COLS; c++) {
                  if (dfs(r, c, 0)) {
                        return true;
                  }
            }
      }

      return false;
}
