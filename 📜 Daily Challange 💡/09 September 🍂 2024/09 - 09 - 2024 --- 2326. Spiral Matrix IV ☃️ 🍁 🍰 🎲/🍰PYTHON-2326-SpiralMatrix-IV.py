#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2326

#? ⌚ Time complexity ➺ O(m * n) 👉🏻 m = No. o rows n = No. of columns

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def spiralMatrix(self, m: int, n: int, head: ListNode) -> List[List[int]]:
            # initializes a 2D array `matrix` of integers with dimensions `m` by `n`
            # To store linked list value in this matrix in spiral formate  
            matrix = [[-1 for _ in range(n)] for _ in range(m)]

            # An index indicating the starting row of the current layer being filled
            start_row = 0
            # An index indicating the ending row of the current layer being filled
            end_row = m - 1
            # An index indicating the starting column of the current layer being filled
            start_col = 0
            # An index indicating the ending column of the current layer being filled
            end_col = n - 1

            # uses a while loop to continue the spiral process as long as there is a layer to fill, 
            # determined by `start_row <= end_row` and `start_col <= end_col`.
            while start_row <= end_row and start_col <= end_col:

                  # Top Row Filling ... 
                  for j in range(start_col, end_col + 1):
                        #  filling the top row with linkedList value if not head`head` is `None`) then -1
                        matrix[start_row][j] = head.val if head else -1
                        # update if  `head` is not `None`
                        head = head.next if head else head

                  # Right Column Filling ...
                  for i in range(start_row + 1, end_row + 1):
                        # After the top row, it fills down the rightmost column 
                        # with linkedList value if not head`head` is `None`) then -1
                        matrix[i][end_col] = head.val if head else -1
                        # update if  `head` is not `None`
                        head = head.next if head else head

                  # Bottom Row Filling...
                  if start_row != end_row:
                        for j in range(end_col - 1, start_col - 1, -1):
                              # After the rightmost column, it fills bottom row of the current layer  
                              # with linkedList value if not head`head` is `None`) then -1
                              matrix[end_row][j] = head.val if head else -1
                              # update if  `head` is not `None`
                              head = head.next if head else head

                  # Left Column Filling...
                  if start_col != end_col:
                        for i in range(end_row - 1, start_row, -1):
                              # After bottom row of the current layer, it fills leftmost column 
                              # with linkedList value if not head`head` is `None`) then -1
                              matrix[i][start_col] = head.val if head else -1
                              # update if  `head` is not `None`
                              head = head.next if head else head

                  # Increment and Decrement Boundaries => to prepare for the next inner layer

                  # incrementing `start_row` and `start_col`,
                  start_row += 1
                  start_col += 1

                  # decrementing `end_row` and `end_col`
                  end_row -= 1
                  end_col -= 1

            # returns the filled `matrix`
            return matrix

