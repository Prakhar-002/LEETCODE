#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2946

#? ⌚ Time complexity ➺ O(n * m) 

#? 🧺 Space complexity ➺ O(n * m)

class Solution:
      def areSimilar(self, mat: List[List[int]], k: int) -> bool:
            m = len(mat)  # Number of rows
            n = len(mat[0])  # Number of columns
            # Effective shifts needed; shifting by 'n' results in the same row
            k = k % n

            for i in range(m):
                  for j in range(n):
                        # Even rows (0-indexed) shift left, odd rows shift right
                        # To check similarity, we compare current element with its shifted counterpart
                        if i % 2 == 0:
                              # For even rows, element at j should match element at (j + k) % n
                              finalIdx = (j + k) % n
                        else:
                              # For odd rows, element at j should match element at (j - k + n) % n
                              finalIdx = (j - k + n) % n 

                        # If any element doesn't match its shifted version, return False
                        if mat[i][j] != mat[i][finalIdx]:
                              return False

            return True