#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3397

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List
import math

class Solution:
      def maxDistinctElements(self, nums: List[int], k: int) -> int:
            # First sort the list to enable greedy assignment
            nums.sort()

            cnt = 0               # Counts the maximum distinct elements after adjustment
            prev = -math.inf      # Tracks last assigned number to ensure distinctness

            # Iterate over sorted numbers
            for num in nums:
                  # Calculate assigned value for current number to keep distinctness and adjustment constraints
                  # Lower bound is either num - k or one more than previous assigned (to keep distinct)
                  # Upper bound is num + k, ensure assigned value is within allowed range
                  curr = min(max(num - k, prev + 1), num + k)

                  # If assigned value is strictly greater than previous, increment count
                  if curr > prev:
                        cnt += 1
                        prev = curr  # Update the last assigned value

            return cnt
