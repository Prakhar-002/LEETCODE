//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3643

//? ⌚ Time complexity ➺ O(k ^ 2) 

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int[][] reverseSubmatrix(int[][] grid, int x, int y, int k) {
            int t = x;           // Top row pointer starting at x
            int b = x + k - 1;  // Bottom row pointer starting at x+k-1

            // ---------- Swap rows from outside in until pointers meet ----------
            while (t < b) {

                  // Swap each element column by column within [y, y+k) range
                  for (int i = y; i < y + k; i++) {
                        int temp   = grid[t][i];
                        grid[t][i] = grid[b][i];
                        grid[b][i] = temp;
                  }

                  // Move pointers inward
                  t++;
                  b--;
            }

            return grid;
      }
}