#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3350

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def maxIncreasingSubarrays(self, nums: List[int]) -> int:
            n = len(nums)                # Total number of elements in list
            cnt = 1                      # Length of current increasing subarray
            precnt = 0                   # Length of previous increasing subarray
            ans = 0                      # Stores the result (maximum overlap length)

            # Iterate through the list starting from the second element
            for i in range(1, n):
                  # If the current number continues the increasing sequence
                  if nums[i] > nums[i - 1]:
                        cnt += 1
                  else:
                        # Sequence breaks - store current and reset counter
                        precnt = cnt
                        cnt = 1

                  # Option 1: Max overlap between consecutive increasing subarrays
                  ans = max(ans, min(precnt, cnt))

                  # Option 2: Split a long increasing subarray into half (best possible case)
                  ans = max(ans, cnt // 2)

            # Return maximum valid overlap or half-length
            return ans
