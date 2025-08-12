#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 90

#? ⌚ Time complexity ➺ O(n * 2 ^ n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import List 

class Solution:
      def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
            # Sort the array to group duplicates together
            nums.sort()
            res = []      # Will store all unique subsets
            subset = []   # Current subset being built

            def backtrack(i):
                  # ------------------------------------------------------
                  # Base Case:
                  # When we have considered all indices (i >= len(nums)),
                  # we add the current subset to results.
                  # ------------------------------------------------------
                  if i >= len(nums):
                        res.append(subset[:])  # Append a copy to avoid mutation
                        return

                  # ------------------------------------------------------
                  # Decision 1: Include nums[i] in the subset
                  # ------------------------------------------------------
                  subset.append(nums[i])       # Add current element
                  backtrack(i + 1)             # Recurse for next index
                  subset.pop()                 # Backtrack to remove last element

                  # ------------------------------------------------------
                  # Skip duplicate elements to avoid duplicate subsets.
                  # Move 'i' forward until it points to a different number.
                  # ------------------------------------------------------
                  while i + 1 < len(nums) and nums[i] == nums[i + 1]:
                        i += 1

                  # ------------------------------------------------------
                  # Decision 2: Exclude nums[i] and move to the next unique number
                  # ------------------------------------------------------
                  backtrack(i + 1)

            # Start backtracking from index 0
            backtrack(0)

            return res
