#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1437

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def kLengthApart(self, nums: List[int], k: int) -> bool:
            # Initialize places with k for the first occurrence of 1
            places = k

            # Iterate over nums to find 1's positions
            for num in nums:
                  # If we found a 1, check the distance
                  if num == 1:
                        # If 1 appears before k places, return False
                        if places < k:
                              return False
                        # Otherwise, reset the places counter
                        places = 0
                  else:
                        # Count the places for every zero
                        places += 1

            # If we've made it through the entire array, return True
            return True