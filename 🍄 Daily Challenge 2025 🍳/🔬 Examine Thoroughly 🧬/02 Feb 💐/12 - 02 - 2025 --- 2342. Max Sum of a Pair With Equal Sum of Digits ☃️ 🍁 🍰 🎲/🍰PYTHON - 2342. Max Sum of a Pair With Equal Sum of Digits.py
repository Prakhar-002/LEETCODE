#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2342

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from collections import defaultdict
from typing import List

class Solution:
      # Function to calculate the sum of digits of a number
      def digit_sum(self, num):
            digit_sum = 0

            # Extract each digit and add to sum
            while num:
                  digit_sum += num % 10  # Get last digit
                  num //= 10  # Remove last digit

            return digit_sum

      # Function to find the maximum sum of two numbers with the same digit sum
      def maximumSum(self, nums: List[int]) -> int:
            digit_sum_list = defaultdict(list)  # Dictionary to store numbers by their digit sum

            for n in nums:
                  dSum = self.digit_sum(n)  # Compute digit sum of the number
                  
                  digit_sum_list[dSum].append(n)  # Group numbers by digit sum

                  digit_list = digit_sum_list[dSum]

                  # Maintain only the top two largest numbers in the list
                  if len(digit_list) > 2:
                        digit_sum_list[dSum] = sorted(digit_list)[1:]

            res = -1  # Default result if no valid pair exists

            for n, l in digit_sum_list.items():
                  if len(l) == 2:  # Only consider groups with exactly two numbers
                        res = max(res, sum(l))  # Update maximum sum

            return res
