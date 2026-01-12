#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Software Design L5 Q3

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(rectangle)

#? 🧺 Space complexity ➺ O(n) 

class SubrectangleQueries:
      def __init__(self, rectangle):
            """
            Deep copy constructor to prevent external modification
            Time: O(rows * cols), Space: O(rows * cols)
            """
            rows, cols = len(rectangle), len(rectangle[0])
            # Create independent copy using list comprehension
            self.rectangle = [row[:] for row in rectangle]

      def updateSubrectangle(self, row1, col1, row2, col2, newValue):
            """
            Update subrectangle [row1..row2][col1..col2] to newValue
            Time: O((row2-row1+1) * (col2-col1+1))
            """
            for i in range(row1, row2 + 1):
                  for j in range(col1, col2 + 1):
                        self.rectangle[i][j] = newValue

      def getValue(self, row, col):
            """
            Get current value at position (row, col)
            Time: O(1)
            """
            return self.rectangle[row][col]
