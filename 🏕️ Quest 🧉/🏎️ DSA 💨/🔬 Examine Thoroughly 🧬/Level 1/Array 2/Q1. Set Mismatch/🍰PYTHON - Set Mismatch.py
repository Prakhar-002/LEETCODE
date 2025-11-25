#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L1.2 Q1

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def findErrorNums(self, nums: List[int]) -> List[int]:
            arr = [0, 0]  # arr[0] = duplicate, arr[1] = missing
            freq = [0] * (len(nums) + 1)  # Frequency array

            # Count frequency for each number in nums
            for n in nums:
                  freq[n] += 1 

            # Find the duplicate and missing numbers based on counts
            for i in range(1, len(freq)):
                  if freq[i] == 2:
                        arr[0] = i  # Duplicate
                  if freq[i] == 0:
                        arr[1] = i  # Missing

            return arr
