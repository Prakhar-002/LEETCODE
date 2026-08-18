#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3471

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from collections import Counter

class Solution:
      def largestInteger(self, nums: list[int], k: int) -> int:
            # Count overall frequencies of elements in nums
            freq = Counter(nums)

            # If k == 1, any element appearing exactly once is in only 1 subarray of size 1
            if k == 1:
                  return max((x for x in nums if freq[x] == 1), default=-1)

            # If k == len(nums), there is only 1 subarray of size k, so the max element wins
            if k == len(nums):
                  return max(nums)

            # For 1 < k < len(nums), only the boundary elements (nums[0] and nums[-1])
            # can appear in exactly one subarray of size k, provided they are unique overall
            ans = -1

            if freq[nums[0]] == 1:
                  ans = max(ans, nums[0])

            if freq[nums[-1]] == 1:
                  ans = max(ans, nums[-1])

            return ans