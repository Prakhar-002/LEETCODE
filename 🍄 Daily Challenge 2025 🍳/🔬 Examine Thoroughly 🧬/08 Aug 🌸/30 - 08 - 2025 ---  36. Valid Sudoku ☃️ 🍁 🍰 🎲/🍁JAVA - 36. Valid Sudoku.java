//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 36

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = 9

//? 🧺 Space complexity ➺ O(n ^ 2)

import java.util.*; 

class Solution {
      public boolean isValidSudoku(char[][] board) {
            // Use sets to track values in rows, columns, and 3x3 squares
            Map<Integer, Set<Character>> rows = new HashMap<>();
            Map<Integer, Set<Character>> cols = new HashMap<>();
            Map<String, Set<Character>> squares = new HashMap<>();

            // Initialize the sets
            for (int i = 0; i < 9; i++) {
                  rows.put(i, new HashSet<>());
                  cols.put(i, new HashSet<>());
            }

            for (int r = 0; r < 9; r++) {
                  for (int c = 0; c < 9; c++) {
                        char val = board[r][c];

                        // Skip empty cells
                        if (val == '.') continue;

                        // Get the square key as "(r / 3)-(c / 3)"
                        String squareKey = (r / 3) + "-" + (c / 3);

                        // Initialize square set if not already present
                        squares.putIfAbsent(squareKey, new HashSet<>());

                        // Check if the value already exists in row, column, or square
                        if (rows.get(r).contains(val) || 
                              cols.get(c).contains(val) || 
                              squares.get(squareKey).contains(val)) {
                              return false;
                        }

                        // Add the value to the row, column, and square
                        rows.get(r).add(val);
                        cols.get(c).add(val);
                        squares.get(squareKey).add(val);
                  }
            }
            // If no duplicates found, the board is valid
            return true;
      }
}
