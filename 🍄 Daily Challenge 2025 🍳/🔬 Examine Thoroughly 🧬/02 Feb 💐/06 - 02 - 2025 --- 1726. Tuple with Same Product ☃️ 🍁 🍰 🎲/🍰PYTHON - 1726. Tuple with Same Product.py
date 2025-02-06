#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1726

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n ^ 2)

from typing import List
from collections import defaultdict

class Solution:
      def tupleSameProduct(self, nums: List[int]) -> int:
            # Dictionary to count occurrences of each product
            product_count = defaultdict(int)

            # Iterate over all pairs of numbers in nums
            for i in range(len(nums)):
                  for j in range(i + 1, len(nums)):  # Start from i + 1 to avoid duplicate pairs
                        product = nums[i] * nums[j]
                        product_count[product] += 1  # Count occurrences of each product

            tuples = 0

            # Calculate the number of valid tuples
            for val in product_count.values():
                  if val > 1:
                        tuples += val * (val - 1) * 4  # Formula for counting valid (a, b, c, d) tuples

            return tuples

#!------------------------------------------------------------------------------------------------------ 

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n ^ 2)

class Solution:
      def tupleSameProduct(self, nums: List[int]) -> int:
            product_count = defaultdict(int)
            res = 0

            # Iterate over all pairs of numbers
            for i in range(len(nums)):
                  for j in range(i + 1, len(nums)):  # Avoid duplicate pairs
                        product = nums[i] * nums[j]

                        # If this product has been seen before, update result
                        res += product_count[product] * 8  

                        # Increment the count of this product
                        product_count[product] += 1  

            return res
