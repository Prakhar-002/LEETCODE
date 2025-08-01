#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 118

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n * n) 

class Solution:
      def generate(self, numRows: int) -> List[List[int]]:
            # Initialize result with the first row of Pascal's Triangle
            res = [[1]]

            # Generate rows from 2nd row to numRows
            for i in range(numRows - 1):
                  # Add padding 0s on both sides to simplify pairwise sum
                  temp = [0] + res[-1] + [0]

                  # Initialize new row
                  row = []

                  # Build new row by summing adjacent elements in temp
                  for j in range(len(res[-1]) + 1):
                        row.append(temp[j] + temp[j + 1])

                  # Append new row to the result
                  res.append(row)

            return res
