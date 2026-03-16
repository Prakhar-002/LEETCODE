#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1074

#? ⌚ Time complexity ➺ O(n^2 * m) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(m)

from collections import defaultdict 

class Solution:
      def numSubmatrixSumTarget(self, matrix: list[list[int]], target: int) -> int:
            rows = len(matrix)        # m
            cols = len(matrix[0])     # n

            # First take the cumulative sum row-wise
            for row in range(rows):
                  for col in range(1, cols):
                        matrix[row][col] += matrix[row][col - 1]

            # Now, find the "No. of subarrays with sum k" in the downward direction
            result = 0

            for startCol in range(cols):
                  for currCol in range(startCol, cols):

                        # We need to find all submatrices sum
                        # Now comes the concept of "No. of subarrays with sum k"
                        freq_map = defaultdict(int)
                        freq_map[0] = 1    # base case: empty prefix
                        cumulative_sum = 0

                        # Go downwards row-wise
                        for row in range(rows):

                              # Subtract left boundary if startCol > 0 to get column-range sum
                              cumulative_sum += (
                                    matrix[row][currCol]
                                    - (matrix[row][startCol - 1] if startCol > 0 else 0)
                              )

                              # If (cumulative_sum - target) was seen before,
                              # those many subarrays ending here have sum == target
                              if (cumulative_sum - target) in freq_map:
                                    result += freq_map[cumulative_sum - target]

                              # Record current cumulative sum in map
                              freq_map[cumulative_sum] += 1

            return result