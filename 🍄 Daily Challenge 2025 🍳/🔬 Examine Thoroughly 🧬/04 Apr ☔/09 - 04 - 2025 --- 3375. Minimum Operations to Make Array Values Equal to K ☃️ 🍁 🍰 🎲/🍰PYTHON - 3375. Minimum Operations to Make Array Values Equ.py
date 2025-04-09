#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3375

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import List

class Solution:
      def minOperations(self, nums: List[int], k: int) -> int:
            unique_set = set()  # To store unique elements

            for num in nums:
                  if num < k:  # If any number is less than k, return -1
                        return -1
                  unique_set.add(num)  # Add each number to the set

            # If k is in the set, subtract 1 from count
            return len(unique_set) - 1 if k in unique_set else len(unique_set)
