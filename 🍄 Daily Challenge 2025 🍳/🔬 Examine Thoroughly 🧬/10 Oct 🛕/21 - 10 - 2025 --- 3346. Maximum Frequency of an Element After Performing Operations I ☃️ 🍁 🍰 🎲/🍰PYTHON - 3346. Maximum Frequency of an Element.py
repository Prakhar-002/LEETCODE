#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3346

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import List
import bisect

class Solution:
      def maxFrequency(self, nums: List[int], k: int, numOperations: int) -> int:
            nums.sort()             # Sort nums for binary search and range queries
            ans = 0                 # To keep track of max frequency found
            num_count = {}          # Dictionary to store frequency of each distinct number
            last_num_index = 0      # Start index of current distinct number group

            # Count frequencies of distinct numbers in nums
            for i in range(len(nums)):
                  # When encountering a new number, record the previous number's count
                  if nums[i] != nums[last_num_index]:
                        count = i - last_num_index
                        num_count[nums[last_num_index]] = count
                        ans = max(ans, count)
                        last_num_index = i

            # Record count for last distinct number group
            count = len(nums) - last_num_index
            num_count[nums[last_num_index]] = count
            ans = max(ans, count)

            # Iterate over all candidate values in the range [min_num, max_num]
            for i in range(nums[0], nums[-1] + 1):
                  # Find leftmost index with values >= (i - k)
                  l = bisect.bisect_left(nums, i - k)
                  # Find rightmost index with values <= (i + k)
                  r = bisect.bisect_right(nums, i + k) - 1

                  if i in num_count:
                        # Max possible frequency is limited by operations plus existing count
                        temp_ans = min(r - l + 1, num_count[i] + numOperations)
                  else:
                        # If number not present, only operations can add at most numOperations
                        temp_ans = min(r - l + 1, numOperations)

                  ans = max(ans, temp_ans)  # Update global max frequency

            return ans
