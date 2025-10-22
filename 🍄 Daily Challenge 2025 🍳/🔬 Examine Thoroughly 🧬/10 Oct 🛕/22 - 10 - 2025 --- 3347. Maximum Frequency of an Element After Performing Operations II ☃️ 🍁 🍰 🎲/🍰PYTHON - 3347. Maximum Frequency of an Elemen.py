#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3347

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import List
from collections import defaultdict
import bisect

class Solution:
      def maxFrequency(self, nums: List[int], k: int, numOperations: int) -> int:
            nums.sort()                       # Sort nums for efficient range queries
            ans = 0                          # To track maximum frequency found
            num_count = defaultdict(int)    # Frequency count of distinct numbers
            modes = set()                   # Set of candidate values to consider

            # Helper function to add possible candidates (modes) to 'modes' set
            def add_mode(value):
                  modes.add(value)
                  # Include value-k and value+k if they lie within the range of nums
                  if value - k >= nums[0]:
                        modes.add(value - k)
                  if value + k <= nums[-1]:
                        modes.add(value + k)

            last_num_index = 0
            # Count frequency of each distinct number and add modes
            for i in range(len(nums)):
                  if nums[i] != nums[last_num_index]:
                        count = i - last_num_index
                        num_count[nums[last_num_index]] = count
                        ans = max(ans, count)
                        add_mode(nums[last_num_index])
                        last_num_index = i

            # Add frequency/count and modes for the last group
            count = len(nums) - last_num_index
            num_count[nums[last_num_index]] = count
            ans = max(ans, count)
            add_mode(nums[last_num_index])

            # Iterate over all candidate values in sorted order
            for mode in sorted(modes):
                  # Find leftmost index such that nums[index] >= mode-k
                  l = bisect.bisect_left(nums, mode - k)
                  # Find rightmost index such that nums[index] <= mode+k
                  r = bisect.bisect_right(nums, mode + k) - 1
                  if mode in num_count:
                        # Max possible frequency capped by total count in range and operations
                        temp_ans = min(r - l + 1, num_count[mode] + numOperations)
                  else:
                        # If mode not in nums, only numOperations applies
                        temp_ans = min(r - l + 1, numOperations)
                  ans = max(ans, temp_ans)    # Update global maximum

            return ans
