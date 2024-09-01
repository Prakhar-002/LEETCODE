#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2022

#? ⌚ Time complexity ➺ O(n * m) 

#? 🧺 Space complexity ➺ O(1)

class Solution:
      # `m`: An integer representing the number of rows desired in the 2D array
      # `n`: An integer representing the number of columns desired in the 2D array
      def construct2DArray(self, original: List[int], m: int, n: int) -> List[List[int]]:
            # if the total number of elements in `original` doesn't match the dimensions (`m * n`)
            if len(original) != m * n:
                  # return an empty list
                  # indicating that it's not possible to construct a 2D array with the given dimensions from `original`
                  return []

            # # Initialize a 2D array with the correct dimensions
            twoDimArray = [[0] * n for _ in range(m)]  

            # iterates over each index `i` in the `original` list
            for i in range(len(original)):
                  # `row` is calculated by `i // n` which is integer division, 
                  # ensuring that `row` will increase by `1` after every `n` iterations
                  row = i // n
                  # The column index `col` is calculated by `i % n`, which is the remainder of the division by `n`. 
                  # This ensures that `col` cycles through `0` to `n-1` as `i` increases, 
                  col = i % n
                  # populate 2D array
                  twoDimArray[row][col] = original[i]

            # Return the populated 2D array
            return twoDimArray
