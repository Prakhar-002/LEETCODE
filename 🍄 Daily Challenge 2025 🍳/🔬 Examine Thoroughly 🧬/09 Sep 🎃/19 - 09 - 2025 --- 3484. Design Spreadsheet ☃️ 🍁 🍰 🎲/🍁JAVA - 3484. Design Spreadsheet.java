//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3484

//? ⌚ Time complexity ➺ O(1) 👉🏻  n = len(rows)

//? 🧺 Space complexity ➺ O(26 * n)

import java.util.HashMap;
import java.util.Map;

public class Spreadsheet {

      // Map to store cell values, keyed by cell name (e.g., "A1")
      private Map<String, Integer> cells;

      // Constructor accepts number of rows (not used here, but required)
      public Spreadsheet(int rows) {
            cells =  new HashMap<>();
      }

      // Set or update the value of a cell
      public void setCell(String cell, int value) {
            cells.put(cell, value);
      }

      // Reset cell value by removing it from the map, reverting to default 0
      public void resetCell(String cell) {
            cells.remove(cell);
      }

      // Evaluate formula of form "=A+B" where A and B are either cell names or
      // numeric literals
      public int getValue(String formula) {
            // Find '+' index and split left and right parts of formula
            int idx = formula.indexOf('+');
            String left = formula.substring(1, idx).trim();
            String right = formula.substring(idx + 1).trim();

            // Check if left part starts with a letter, treat as cell else parse integer
            int valLeft = Character.isLetter(left.charAt(0))
                        ? cells.getOrDefault(left, 0)
                        : Integer.parseInt(left);

            // Same check and parse for right part
            int valRight = Character.isLetter(right.charAt(0))
                        ? cells.getOrDefault(right, 0)
                        : Integer.parseInt(right);

            // Sum of left and right parts
            return valLeft + valRight;
      }
}
