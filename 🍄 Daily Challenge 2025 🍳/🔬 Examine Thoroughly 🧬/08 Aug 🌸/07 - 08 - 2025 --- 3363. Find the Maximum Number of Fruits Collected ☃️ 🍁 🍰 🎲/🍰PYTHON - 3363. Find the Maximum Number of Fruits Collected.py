#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3363

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def maxCollectedFruits(self, fruits):
            n = len(fruits)

            # Step 1: Collect diagonal fruits (same row and column)
            ans = sum(fruits[i][i] for i in range(n))

            # Helper function to calculate max path sum
            def dp():
                  # prev and curr arrays to store max fruit collected up to each column
                  prev = [float("-inf")] * n
                  curr = [float("-inf")] * n

                  # Start from top-right corner in the triangle (first row to last column)
                  prev[n - 1] = fruits[0][n - 1]

                  # Traverse rows from 1 to n-2 (excluding top and bottom rows)
                  for i in range(1, n - 1):
                        for j in range(max(n - 1 - i, i + 1), n):
                              # Try coming from previous row's same column, left, or right
                              best = prev[j]
                              if j - 1 >= 0:
                                    best = max(best, prev[j - 1])
                              if j + 1 < n:
                                    best = max(best, prev[j + 1])

                              # Current cell = best from previous row + current fruit
                              curr[j] = best + fruits[i][j]
                        
                        # Swap for next row computation
                        prev, curr = curr, prev

                  # Return the max collected fruit when reaching the bottom-right
                  return prev[n - 1]

            # Step 2: Add max path fruits from original triangle
            ans += dp()

            # Step 3: Flip the matrix to calculate for second triangle (mirror)
            for i in range(n):
                  for j in range(i):
                        fruits[i][j], fruits[j][i] = fruits[j][i], fruits[i][j]

            # Step 4: Add max path fruits from the flipped triangle
            ans += dp()

            return ans
