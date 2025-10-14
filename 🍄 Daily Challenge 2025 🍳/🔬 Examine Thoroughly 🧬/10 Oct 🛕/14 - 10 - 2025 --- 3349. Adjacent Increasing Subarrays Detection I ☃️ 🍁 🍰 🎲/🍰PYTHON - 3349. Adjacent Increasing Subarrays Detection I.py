#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3349

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List 

class Solution:
      def hasIncreasingSubarrays(self, nums: List[int], k: int) -> bool:
            knew = k - 1  # Number of required consecutive increasing pairs

            # If k is 1, trivial case - always True
            if not knew:
                  return True

            # Iterate through array from index k+1 until end
            for i in range(k + 1, len(nums)):
                  # Check if pair at (i-1, i) is increasing and pair at (i-k-1, i-k) is increasing
                  if nums[i] > nums[i - 1] and nums[i - k] > nums[i - k - 1]:
                        knew -= 1  # Found one valid pair, reduce count
                  else:
                        knew = k - 1  # Reset count when condition breaks

                  # If found enough consecutive increasing pairs, return True
                  if not knew:
                        return True

            # If loop completes without success, return False
            return False
