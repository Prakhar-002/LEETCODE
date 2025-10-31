#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3289

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from collections import defaultdict
from typing import List

class Solution:
      def getSneakyNumbers(self, nums: List[int]) -> List[int]:
            # Dictionary to count occurrences of each number, default value is 0
            sneaky = defaultdict(int)

            sneakyNum = []   # List to store numbers that appear exactly twice

            for x in nums:
                  sneaky[x] += 1   # Increment count for number x

                  # If count becomes 2, add x to result list (only once for each number)
                  if sneaky[x] == 2:
                        sneakyNum.append(x)

            return sneakyNum   # Return all numbers that appeared exactly twice
