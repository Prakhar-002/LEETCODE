#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 59

#? ⌚ Time complexity ➺ O(N^2)

#? 🧺 Space complexity ➺ O(N^2)

class Solution:
      def generateMatrix(self, n: int) -> List[List[int]]:
            # initializes a 2D list `matrix` of integers with dimensions `n` by `n`
            # To store 1 to N^2 value in this matrix in spiral format
            matrix = [[0 for _ in range(n)] for _ in range(n)]

            # `value` variable for storing values in range 1 to N^2
            value = 1

            # An index indicating the starting row of the current layer being filled
            startRow = 0
            # An index indicating the ending row of the current layer being filled
            endRow = n - 1
            # An index indicating the starting column of the current layer being filled
            startCol = 0
            # An index indicating the ending column of the current layer being filled
            endCol = n - 1

            # uses a while loop to continue the spiral process as long as there is a layer to fill,
            # determined by `startRow <= endRow` and `startCol <= endCol`.
            while startRow <= endRow and startCol <= endCol:

                  # Top Row Filling ...
                  for j in range(startCol, endCol + 1):
                        # filling the top row with value and inc it by 1 after every filling
                        matrix[startRow][j] = value
                        value += 1

                  # Right Column Filling ...
                  for i in range(startRow + 1, endRow + 1):
                        # After the top row, it fills down the rightmost column
                        # with value and inc it by 1 after every filling
                        matrix[i][endCol] = value
                        value += 1

                  # Bottom Row Filling...
                  for j in range(endCol - 1, startCol - 1, -1):
                        # if there is only one row left, in which case
                        if startRow == endRow:
                              # it breaks out of the loop to avoid overwriting values filled in the top row
                              break

                        # After the rightmost column, it fills bottom row of the current layer
                        # with value and inc it by 1 after every filling
                        matrix[endRow][j] = value
                        value += 1

                  # Left Column Filling...
                  for i in range(endRow - 1, startRow, -1):
                        # if there is only one column left, in which case
                        if startCol == endCol:
                              # it breaks out of the loop to avoid overwriting values filled in the top column
                              break

                        # After bottom row of the current layer, it fills leftmost column
                        # with value and inc it by 1 after every filling
                        matrix[i][startCol] = value
                        value += 1

                  # Increment and Decrement Boundaries => to prepare for the next inner layer

                  # incrementing `startRow` and `startCol`,
                  startRow += 1
                  startCol += 1

                  # decrementing `endRow` and `endCol`
                  endRow -= 1
                  endCol -= 1

            # returns the filled `matrix`
            return matrix

