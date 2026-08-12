#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2958

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from collections import defaultdict

class Solution:
      def maxSubarrayLength(self, nums: list[int], k: int) -> int:
            # Hash map to track element frequencies in the current sliding window
            freq = defaultdict(int)

            # Left pointer of the sliding window
            left = 0
            max_len = 0

            # Expand window using the right pointer
            for right in range(len(nums)):
                  freq[nums[right]] += 1

                  # Shrink window from the left if the current element's frequency exceeds k
                  while freq[nums[right]] > k:
                        freq[nums[left]] -= 1
                        left += 1

                  # Update the maximum length of a valid subarray
                  max_len = max(max_len, right - left + 1)

            return max_len