#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 679

#? ⌚ Time complexity ➺ O(1) 

#? 🧺 Space complexity ➺ O(1)

from typing import List
import math

class Solution:
      def judgePoint24(self, cards: List[int]) -> bool:
            # ----------------------------------------------------------
            # Step 1: Initialization and Backtracking Setup
            # ----------------------------------------------------------
            # `EPS` (epsilon) is a small constant used for comparing floating-point numbers.
            # Direct comparison (e.g., `num == 24.0`) can be unreliable due to precision errors.
            EPS = 1e-6

            # `backtrack` is the recursive helper function that will try every possible
            # combination of numbers and operations to see if 24 can be formed.
            def backtrack(nums: List[float]) -> bool:
                  # ----------------------------------------------------------
                  # Step 2: Base Case for Backtracking
                  # ----------------------------------------------------------
                  # If the list has been reduced to a single number, the recursion stops.
                  # We check if this final number is approximately equal to 24.
                  if len(nums) == 1:
                        return abs(nums[0] - 24.0) < EPS

                  # ----------------------------------------------------------
                  # Step 3: Recursive Step - Explore All Operations
                  # ----------------------------------------------------------
                  n = len(nums)
                  # Iterate through every unique pair of numbers (a, b) from the current list.
                  # `i` and `j` are the indices of the two numbers we select.
                  for i in range(n):
                        for j in range(i + 1, n):
                              # `rest` will be a new list containing all numbers except for `a` and `b`.
                              rest = [nums[k] for k in range(n) if k != i and k != j]
                              a, b = nums[i], nums[j]

                              # Generate all possible results from applying operations to `a` and `b`.
                              candidates = []
                              candidates.append(a + b)
                              candidates.append(a * b)
                              candidates.append(a - b)
                              candidates.append(b - a) # Subtraction is not commutative.

                              # For division, check to avoid division by zero.
                              if abs(b) > EPS:
                                    candidates.append(a / b)
                              if abs(a) > EPS:
                                    candidates.append(b / a) # Division is not commutative.

                              # For each new candidate value `x`, recursively call `backtrack`.
                              # The new list for the recursive call consists of the remaining numbers
                              # `rest` plus the new candidate `x`.
                              for x in candidates:
                                    if backtrack(rest + [x]):
                                          # If any recursive call returns True, a solution has been found.
                                          # Propagate True up the call stack immediately.
                                          return True

                  # If all pairs and operations have been tried from this state and none
                  # led to a solution, return False.
                  return False

            # ----------------------------------------------------------
            # Step 4: Initial Call and Return
            # ----------------------------------------------------------
            # Start the backtracking process by converting the initial integer cards
            # into a list of floats.
            return backtrack([float(x) for x in cards])
