#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 915

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def partitionDisjoint(self, nums: List[int]) -> int:
            # cur_max keeps track of the maximum in the left partition
            cur_max = nums[0]

            # possible_max stores the maximum value seen so far
            possible_max = nums[0]

            # length stores the size of the left partition
            length = 1

            # Iterate through the array to determine partition point
            for i in range(1, len(nums)):  # Start from index 1
                  if nums[i] < cur_max:
                        # If the current number is smaller than cur_max, expand the left partition
                        length = i + 1  
                        cur_max = possible_max  # Update cur_max to ensure valid partition
                  else:
                        # Update possible_max to keep track of max value encountered
                        possible_max = max(possible_max, nums[i])

            return length  # Return the size of the left partition
