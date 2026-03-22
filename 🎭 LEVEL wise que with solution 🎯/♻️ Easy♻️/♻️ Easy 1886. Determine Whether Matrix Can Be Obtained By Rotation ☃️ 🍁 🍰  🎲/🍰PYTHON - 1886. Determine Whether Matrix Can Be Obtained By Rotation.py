#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1886

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(mat)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:

      # ---------- Transpose: flip matrix along main diagonal ----------
      def transpose(self, mat: List[List[int]]) -> None:
            for i in range(len(mat)):
                  for j in range(i + 1, len(mat)):
                        mat[i][j], mat[j][i] = mat[j][i], mat[i][j]

      # ---------- Rotate 90° clockwise: transpose then reverse each row ----------
      def rotate(self, mat: List[List[int]]) -> None:
            self.transpose(mat)
            for row in mat:
                  row.reverse()

      def findRotation(self, mat: List[List[int]], target: List[List[int]]) -> bool:
            # Try all 4 rotations (0°, 90°, 180°, 270°)
            for _ in range(4):
                  # Check before rotating so 0° is also tested
                  if mat == target:
                        return True

                  # Rotate 90° clockwise for next iteration
                  self.rotate(mat)

            return False