//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3531

//? ⌚ Time complexity ➺ O(m) 👉🏻  n = len(buildings)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int countCoveredBuildings(int n, int[][] buildings) {
            // For each row: min/max x-coordinates of buildings in that row
            int[] maxRow = new int[n + 1];
            int[] minRow = new int[n + 1];
            Arrays.fill(minRow, n + 1);

            // For each column: min/max y-coordinates of buildings in that column
            int[] maxCol = new int[n + 1];
            int[] minCol = new int[n + 1];
            Arrays.fill(minCol, n + 1);

            // Step 1: Build min/max arrays
            for (int[] building : buildings) {
                  int x = building[0];
                  int y = building[1];

                  // Update row y's x-range
                  maxRow[y] = Math.max(maxRow[y], x);
                  minRow[y] = Math.min(minRow[y], x);

                  // Update column x's y-range
                  maxCol[x] = Math.max(maxCol[x], y);
                  minCol[x] = Math.min(minCol[x], y);
            }

            int count = 0;
            // Step 2: Check each building
            for (int[] building : buildings) {
                  int x = building[0];
                  int y = building[1];

                  // Covered if strictly inside both row and column ranges
                  if (x > minRow[y] && x < maxRow[y] &&
                              y > minCol[x] && y < maxCol[x]) {
                        count++;
                  }
            }

            return count;
      }
}
