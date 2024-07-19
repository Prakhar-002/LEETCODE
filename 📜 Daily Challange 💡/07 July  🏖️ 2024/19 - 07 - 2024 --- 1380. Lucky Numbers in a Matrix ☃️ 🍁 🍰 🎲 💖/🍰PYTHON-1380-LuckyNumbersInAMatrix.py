#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 1380

#? ⌚ Time complexity -> O(n * m) 👉 N = rows , M = columns

#? 🧺 Space complexity -> O(min(n, m)) 👉 Minimum of rows or columns 

from typing import List

class Solution:
    def luckyNumbers (self, matrix: List[List[int]]) -> List[int]:
        
        def is_max_in_column(matrix: List[List[int]], number: int, col: int) -> bool:
            for row in range(len(matrix)):
                if matrix[row][col] > number:
                    return False
            return True

        def find_column(matrix: List[List[int]], row: int) -> int:
            # the the first col is our minCol
            min_col = 0
            # and the first val of that row:col is our minNumber
            min_number = matrix[row][min_col]

            for col in range(len(matrix[row])):
                # if somewhere in entire columns
                # we got a number less that our minNumber
                if matrix[row][col] < min_number:
                    # update our minNumber
                    min_number = matrix[row][col]
                    # update our minNumber
                    min_col = col

            return min_col

        lucky_numbers = []

        for row in range(len(matrix)):

            # Find col of the min elem in every row
            min_col = find_column(matrix, row)
            # extract the number
            number = matrix[row][min_col]

            # check if this number also maximum in it's column
            if is_max_in_column(matrix, number, min_col):
                lucky_numbers.append(number)

        return lucky_numbers