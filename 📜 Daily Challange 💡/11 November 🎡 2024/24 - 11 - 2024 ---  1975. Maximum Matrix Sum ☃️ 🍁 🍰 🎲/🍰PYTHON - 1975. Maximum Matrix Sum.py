#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1975

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(matrix), 

#? 🧺 Space complexity ➺ O(1) 👉🏻 m = len(matrix[0])

class Solution:
      def maxMatrixSum(self, matrix: List[List[int]]) -> int:
            # max_sum to store the sum of absolute values of the matrix elements,
            max_sum = 0
            # minus to count the number of negative elements,
            minus = 0
            # min_val to keep track of the smallest absolute value in the matrix.
            min_val = float("inf")

            # Iterate through each row in the matrix.
            for row in matrix:
                  # Iterate through each element in the row.
                  for n in row:
                        # Increment the minus counter if the current element is negative.
                        minus += 1 if n < 0 else 0
                        # Add the absolute value of the current element to max_sum.
                        max_sum += abs(n)
                        # Update min_val to the smallest absolute value encountered so far.
                        min_val = min(min_val, abs(n))

            # If the count of negative numbers is even, return the total max_sum.
            # Otherwise, subtract twice the smallest absolute value to make the matrix sum maximum.
            return max_sum if minus % 2 == 0 else max_sum - min_val * 2
