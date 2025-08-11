#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 78

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import List

class Solution:
      def subsets(self, nums: List[int]) -> List[List[int]]:
            # Temporary list to hold the current subset while building it
            subset = []
            # Final result list containing all subsets
            res = []

            def dfs(i):
                  # ----------------------------------------------------------
                  # Base case: If index i has reached end of nums,
                  # we have a complete subset (can be empty subset too).
                  # Append a copy of the current subset to results.
                  # ----------------------------------------------------------
                  if i >= len(nums):
                        res.append(subset[:])  # Must append COPY, not reference
                        return

                  # ----------------------------------------------------------
                  # Decision 1: Include nums[i] in the subset
                  # ----------------------------------------------------------
                  subset.append(nums[i])      # Choose current element
                  dfs(i + 1)                  # Move to next index

                  # ----------------------------------------------------------
                  # Decision 2: Backtrack - remove last element added
                  # and explore subsets *without* nums[i]
                  # ----------------------------------------------------------
                  subset.pop()                # Undo choice
                  dfs(i + 1)                  # Move to next index

            # Start DFS from index 0
            dfs(0)

            # Return the list of all possible subsets
            return res
