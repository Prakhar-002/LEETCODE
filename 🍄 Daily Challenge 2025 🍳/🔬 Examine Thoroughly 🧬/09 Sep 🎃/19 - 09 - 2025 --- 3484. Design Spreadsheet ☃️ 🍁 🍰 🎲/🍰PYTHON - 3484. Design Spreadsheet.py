#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3484

#? ⌚ Time complexity ➺ O(1) 👉🏻  n = len(rows)

#? 🧺 Space complexity ➺ O(26 * n)

from collections import defaultdict

class Spreadsheet:
      def __init__(self, rows: int):
            # Initialize cells dictionary with default value 0 
            self.cells = defaultdict(int)

      def setCell(self, cell: str, value: int) -> None:
            # Set or update the value in a cell
            self.cells[cell] = value

      def resetCell(self, cell: str) -> None:
            # Remove the cell to reset its value back to default (0)
            if cell in self.cells:
                  del self.cells[cell]

      def getValue(self, formula: str) -> int:
            # Extract the two parts of the formula separated by '+'
            left, right = formula[1:].split("+")

            # Determine values: numeric literal or cell lookup
            if left[0].isnumeric():
                  valLeft = int(left)
            else:
                  valLeft = self.cells[left]

            if right[0].isnumeric():
                  valRight = int(right)
            else:
                  valRight = self.cells[right]

            # Return the sum of the two values
            return valLeft + valRight 
