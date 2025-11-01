#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 7

#? ⌚ Time complexity -> O(LogN) 👉 Number of digit in x

#? 🧺 Space complexity -> O(1) 

from typing import List

class Solution:
      def getSneakyNumbers(self, nums: List[int]) -> List[int]:
            # Dictionary to count occurrences of each number
            sneaky = defaultdict(int)
            # List to store numbers appearing exactly twice
            sneakyNum = []

            for x in nums:
                  # Increment count for the number
                  sneaky[x] += 1

                  # Add to result when count hits 2 (only first time duplicate appears)
                  if sneaky[x] == 2:
                        sneakyNum.append(x)

            return sneakyNum
