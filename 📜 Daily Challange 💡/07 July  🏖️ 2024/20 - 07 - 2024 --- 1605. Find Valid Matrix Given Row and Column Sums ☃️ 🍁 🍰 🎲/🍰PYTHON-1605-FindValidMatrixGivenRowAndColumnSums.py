#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 1605

#? ⌚ Time complexity -> O(n * m) 👉 N = Rows, M = columns

#? 🧺 Space complexity -> O(n * m) 👉 Making return Matrix 

class Solution:
      def restoreMatrix(self, rowSum: List[int], colSum: List[int]) -> List[List[int]]:
            # First satisfy rows 

            # Then satisfy columns by columns by shifting extra to right

            # cal the length 
            ROWS, COLS = len(rowSum), len(colSum)

            # make a matrix with same row and col filled with 0
            matrix = [[0] * COLS for _ in range(ROWS)]

            for r in range(ROWS):
                  # first satisfy the row by assigning the sum in 0 th place
                  matrix[r][0] = rowSum[r]

            # now satisfy columns
            for c in range(COLS):
                  # find the current col sum 
                  cur_col_sum = 0
                  for r in range(ROWS):
                        cur_col_sum += matrix[r][c]

                  row = 0

                  # while current col sum is > than col suppose to have 
                  while cur_col_sum > colSum[c]:
                        # find the diff how much extra we have
                        diff = cur_col_sum - colSum[c]

                        # max shift we can do wo next col
                        shift = min(matrix[row][c], diff)

                        # sub the max shift and add it to next col of that row
                        # for maintain the row sum
                        matrix[row][c] -= shift
                        matrix[row][c + 1] += shift

                        # dec the current col sum
                        cur_col_sum -= shift
                        row += 1

            return matrix

# --------------------------------------------------------

#* 🛠️ Modifying input array 

#? ⌚ Time complexity -> O(n * m) 👉 N = Rows, M = columns

#? 🧺 Space complexity -> O(n * m) 👉 Making return Matrix 

class Solution:
      def restoreMatrix(self, rowSum, colSum):
            matrix = [[0] * len(colSum) for _ in range(len(rowSum))]
            r, c = 0, 0

            while r < len(rowSum) and c < len(colSum):
                  # first assign then min of row's or col's index sum
                  matrix[r][c] = min(rowSum[r], colSum[c])

                  # if both are equal move to the next row col
                  if rowSum[r] == colSum[c]:
                        r += 1
                        c += 1
                  # if row's sum is greater
                  elif rowSum[r] > colSum[c]:
                        # sub the col's sum and move to next col
                        rowSum[r] -= colSum[c]
                        c += 1
                  # if col's sum is greater
                  else:
                        # sub the row's sum and move to next row
                        colSum[c] -= rowSum[r]
                        r += 1

            return matrix
