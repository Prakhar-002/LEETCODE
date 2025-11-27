#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 48

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def rotate(self, matrix: List[List[int]]) -> None:
            # reverse the matrix first
            matrix.reverse()

            n = len(matrix)

            for i in range(n):
                  for j in range(i + 1, n):
                        # Taking transpose of matrix
                        matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]