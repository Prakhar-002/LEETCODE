//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3484

//? ⌚ Time complexity ➺ O(1) 👉🏻  n = len(rows)

//? 🧺 Space complexity ➺ O(26 * n)

class Spreadsheet {
      constructor(rows) {
            // Initialize a Map to store cell values, default to 0 if not set
            this.cells = new Map();
      }

      setCell(cell, value) {
            // Set or update the value for the given cell
            this.cells.set(cell, value);
      }

      resetCell(cell) {
            // Remove the cell from the map to reset its value to default (0)
            if (this.cells.has(cell)) {
                  this.cells.delete(cell);
            }
      }

      getValue(formula) {
            // Extract the two parts of the formula after the '=' sign, split by '+'
            const [left, right] = formula.substring(1).split('+').map(s => s.trim());

            // Determine the numeric value for left part: parse if number; else get from cells with default 0
            const valLeft = this.isNumeric(left) ? parseInt(left, 10) : (this.cells.get(left) || 0);

            // Determine the numeric value for right part in the same way
            const valRight = this.isNumeric(right) ? parseInt(right, 10) : (this.cells.get(right) || 0);

            // Return the sum
            return valLeft + valRight;
      }

      isNumeric(str) {
            // Helper function to check if str is an integer string
            return /^-?\d+$/.test(str);
      }
}
