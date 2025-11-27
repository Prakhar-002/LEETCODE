#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 54

#? ⌚ Time complexity ➺ O(m * n) 👉🏻 m = No. o rows n = No. of columns

#? 🧺 Space complexity ➺ O(1) 

class Solution: 
      def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
            # initializes a list to store value of matrix in spiral way
            matrix_list = []

            # An index indicating the starting row of the current layer being filled
            start_row = 0
            # An index indicating the ending row of the current layer being filled
            end_row = len(matrix) - 1
            # An index indicating the starting column of the current layer being filled
            start_col = 0
            # An index indicating the ending column of the current layer being filled
            end_col = len(matrix[0]) - 1

            # uses a while loop to continue until wee traverse the whole matrix,
            # determined by `start_row <= end_row` and `start_col <= end_col`.
            while start_row <= end_row and start_col <= end_col:

                  # Top Row adding ...
                  for j in range(start_col, end_col + 1):
                        # add top row first
                        matrix_list.append(matrix[start_row][j])

                  # Right Column adding ...
                  for i in range(start_row + 1, end_row + 1):
                        # After the top row, it add down the rightmost column
                        matrix_list.append(matrix[i][end_col])

                  # Bottom Row adding...
                  for j in range(end_col - 1, start_col - 1, -1):
                        # if there is only one row left, in which case
                        if start_row == end_row:
                              # it breaks out of the loop to avoid adding the same value twice
                              break

                        # After the rightmost column, it add bottom row of the current layer
                        matrix_list.append(matrix[end_row][j])

                  # Left Column adding...
                  for i in range(end_row - 1, start_row, -1):
                        # if there is only one column left, in which case
                        if start_col == end_col:
                              # it breaks out of the loop to avoid adding the same value twice
                              break

                        # After bottom row of the current layer, it add leftmost column
                        matrix_list.append(matrix[i][start_col])

                  # Increment and Decrement Boundaries => to prepare for the next inner layer

                  # incrementing `start_row` and `start_col`,
                  start_row += 1
                  start_col += 1

                  # decrementing `end_row` and `end_col`
                  end_row -= 1
                  end_col -= 1

            # returns the filled `matrix`
            return matrix_list