#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2033

#? ⌚ Time complexity ➺ O(n * m log n * m) 👉🏻  n = len(grid)

#? 🧺 Space complexity ➺ O(n * m)         👉🏻  m = len(grid[0])

from typing import List 

class Solution:
      def minOperations(self, grid: List[List[int]], x: int) -> int:
            # Initialize total sum of elements
            total = 0

            # Iterate over each row in the grid
            for row in grid:
                  for n in row:
                        total += n  # Add element to total sum

                        # Check if all elements have the same remainder when divided by x
                        if n % x != grid[0][0] % x:
                              return -1  # If not, return -1 since equalizing is impossible

            # Flatten the grid into a 1D list
            nums = [n for row in grid for n in row]

            # Sort the flattened list to find the median efficiently
            nums.sort()

            # Initialize prefix sum and minimum operations result
            prefix_sum  = 0
            min_operations = float('inf')

            # Iterate over sorted elements to compute minimum operations
            for i in range(len(nums)):
                  # Cost to adjust all elements before index 'i' to nums[i]
                  cost_left = nums[i] * i - prefix_sum 

                  # Cost to adjust all elements after index 'i' to nums[i]
                  cost_right = total - prefix_sum  - (nums[i] * (len(nums) - i))

                  # Compute the total operations needed
                  operation = (cost_left + cost_right) // x

                  # Store the minimum operations required
                  min_operations = min(min_operations, operation)

                  # Update prefix  sum with the current element
                  prefix_sum  += nums[i]

            return min_operations  # Return the minimum number of operations needed
