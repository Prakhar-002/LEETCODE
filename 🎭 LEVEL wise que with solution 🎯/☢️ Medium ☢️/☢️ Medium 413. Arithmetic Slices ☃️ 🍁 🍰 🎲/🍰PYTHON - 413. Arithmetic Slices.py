#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 413

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List 

class Solution:
      def numberOfArithmeticSlices(self, nums: List[int]) -> int:
            # Get the total number of elements in the input list.
            n = len(nums)
            # An arithmetic slice requires at least 3 elements, so if there are fewer,
            # no such slices can be formed.
            if n < 3:
                  return 0

            # `total` will accumulate the final count of all arithmetic slices found.
            total = 0
            # `prev` stores the number of *new* arithmetic slices that end at the previous index.
            # This is the core of our dynamic programming approach.
            prev = 0

            # We iterate from the third element (index 2) to the end of the list,
            # as we need to compare `nums[i]`, `nums[i-1]`, and `nums[i-2]`.
            for i in range(2, n):
                  # Check if the current element `nums[i]` maintains the arithmetic progression
                  # established by the previous two elements.
                  if nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2]:
                        # If the progression continues, the number of arithmetic slices ending at
                        # the current index `i` is one more than the number ending at `i-1`.
                        # Example: If [1,2,3] gives 1 slice, then [1,2,3,4] adds 2 new slices ([2,3,4] and [1,2,3,4]).
                        prev += 1
                        # Add this count of new slices to our running total.
                        total += prev 
                  else:
                        # If the sequence is broken, no new arithmetic slices can be formed ending
                        # at the current index, so we reset our counter.
                        prev = 0

            # After checking all elements, return the accumulated total.
            return total
