#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2197

#? ⌚ Time complexity ➺ O(n log m) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from math import gcd
from typing import List 

class Solution:
      def replaceNonCoprimes(self, nums: List[int]) -> List[int]:
            stack = []  # Stack to store processed numbers

            for num in nums:  # Iterate through each number in the list
                  while stack:  # While stack is not empty
                        g = gcd(stack[-1], num)  # Compute GCD of stack's top and current num
                        if g == 1:  # If numbers are coprime, stop merging
                              break
                        num = (stack.pop() * num) // g  # Merge numbers by replacing with their LCM

                  stack.append(num)  # Add the processed (merged or original) number to stack

            return stack  # Return final stack as the result
