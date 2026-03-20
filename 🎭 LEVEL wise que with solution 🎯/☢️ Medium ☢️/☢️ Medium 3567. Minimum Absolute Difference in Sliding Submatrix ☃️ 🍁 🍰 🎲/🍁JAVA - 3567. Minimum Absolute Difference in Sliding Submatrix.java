//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3567

//? ⌚ Time complexity ➺ O((m-k+1) * (n-k+1) * k^2 * log(k^2)) 👉🏻 sorting unique values per subMatrix

//? 🧺 Space complexity ➺ O(k^2) 👉🏻 storing unique values for each subMatrix

import java.util.ArrayList;
import java.util.List;
import java.util.TreeSet;

class Solution {
      public int[][] minAbsDiff(int[][] grid, int k) {
            int ROWS = grid.length;
            int COLS = grid[0].length;

            // Result matrix dimensions shrink by k-1 on each side
            int[][] res = new int[ROWS - k + 1][COLS - k + 1];

            for (int i = 0; i <= ROWS - k; i++) {
                  for (int j = 0; j <= COLS - k; j++) {

                        // ---------- Collect unique values in k×k submatrix ----------
                        // TreeSet keeps values sorted automatically
                        TreeSet<Integer> values = new TreeSet<>();
                        for (int x = i; x < i + k; x++) {
                              for (int y = j; y < j + k; y++) {
                                    values.add(grid[x][y]);
                              }
                        }

                        // ---------- Convert to sorted list for indexed access ----------
                        List<Integer> arr = new ArrayList<>(values);

                        // If only 1 unique value, min diff is 0
                        if (arr.size() <= 1) {
                              res[i][j] = 0;
                              continue;
                        }

                        // ---------- Find minimum difference between adjacent values ----------
                        int minDiff = Integer.MAX_VALUE;
                        for (int t = 0; t < arr.size() - 1; t++) {
                              minDiff = Math.min(minDiff, arr.get(t + 1) - arr.get(t));
                        }

                        res[i][j] = minDiff;
                  }
            }

            return res;
      }
}