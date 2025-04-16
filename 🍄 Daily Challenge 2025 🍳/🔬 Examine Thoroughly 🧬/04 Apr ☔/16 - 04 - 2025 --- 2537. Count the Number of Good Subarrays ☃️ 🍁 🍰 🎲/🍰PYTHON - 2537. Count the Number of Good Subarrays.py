#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2537

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from collections import defaultdict

class Solution:
      def countGood(self, nums: List[int], k: int) -> int:
            freq_cnt = defaultdict(int)  # Stores frequency of each number in current window
            left = 0                     # Left pointer of sliding window
            good_pair = 0               # Count of good pairs in current window
            good_subarray = 0           # Total good subarray

            for right in range(len(nums)):  # Right pointer moves from left to right
                  # Add frequency of current number to good_pair count
                  good_pair += freq_cnt[nums[right]]

                  # Increase frequency of current number
                  freq_cnt[nums[right]] += 1

                  # While we have enough good pairs in the window
                  while good_pair >= k:
                        # All subarray starting from 'left' to 'right' are valid
                        good_subarray += len(nums) - right

                        # Shrink window from the left
                        freq_cnt[nums[left]] -= 1

                        # Decrease frequency of current number
                        good_pair -= freq_cnt[nums[left]]

                        #  Left pointer moves 1 step
                        left += 1

            return good_subarray  # Return the total count of good subarray
