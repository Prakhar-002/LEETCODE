//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3446

//? ⌚ Time complexity ➺ O(n^2 log n) 👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int[][] sortMatrix(int[][] grid) {
            int n = grid.length;

            // Sort bottom-left diagonals including the main diagonal in DESCENDING order
            for (int i = 0; i < n; i++) {
                  List<Integer> tmp = new ArrayList<>();
                  // Collect the elements of the diagonal starting from grid[i][0]
                  for (int j = 0; i + j < n; j++) {
                        tmp.add(grid[i + j][j]);
                  }
                  // Sort the diagonal in descending order
                  tmp.sort(Collections.reverseOrder());
                  // Put sorted elements back to corresponding positions in the grid
                  for (int j = 0; i + j < n; j++) {
                        grid[i + j][j] = tmp.get(j);
                  }
            }

            // Sort top-right diagonals (excluding the main diagonal) in ASCENDING order
            for (int j = 1; j < n; j++) {
                  List<Integer> tmp = new ArrayList<>();
                  // Collect the elements of the diagonal starting from grid[0][j]
                  for (int i = 0; j + i < n; i++) {
                        tmp.add(grid[i][j + i]);
                  }
                  // Sort the diagonal in ascending order
                  Collections.sort(tmp);
                  // Put sorted elements back to corresponding positions in the grid
                  for (int i = 0; j + i < n; i++) {
                        grid[i][j + i] = tmp.get(i);
                  }
            }

            // Return the final sorted grid
            return grid;
      }
}
