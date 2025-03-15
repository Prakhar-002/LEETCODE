#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2560

# ? ⌚ Time complexity ➺ O(n log m) 👉🏻  n = len(nums)

# ? 🧺 Space complexity ➺ O(1)  👉🏻  m = max(nums) - min(nums)

from typing import List

class Solution:
      # Helper function to check if we can rob `k` houses 
      # without robbing two consecutive houses when the max house value is `max_rob_value`
      def can_rob_houses(self, nums: List[int], max_rob_value: int, k: int) -> bool:
            i = 0
            houses_robbed = 0

            while i < len(nums):
                  # If the current house value is within `max_rob_value`, rob it and skip the next house
                  if nums[i] <= max_rob_value:
                        i += 2
                        houses_robbed += 1
                  else:
                        i += 1  # Skip to the next house

                  # If we have robbed `k` houses, we can return early
                  if houses_robbed == k:
                        break

            return houses_robbed == k  # Check if we successfully robbed `k` houses

      def minCapability(self, nums: List[int], k: int) -> int:
            min_rob_capability = 0  # Stores the minimum max capability needed to rob `k` houses
            l, r = min(nums), max(nums)  # Binary search range for robbery capability

            # Perform binary search to find the minimal max house value we can rob
            while l <= r:
                  m = (l + r) // 2

                  if self.can_rob_houses(nums, m, k):  # Check if it's possible to rob `k` houses with this max value
                        min_rob_capability = m  # Update the result
                        r = m - 1  # Try to minimize further
                  else:
                        l = m + 1  # Increase capability limit

            return min_rob_capability
