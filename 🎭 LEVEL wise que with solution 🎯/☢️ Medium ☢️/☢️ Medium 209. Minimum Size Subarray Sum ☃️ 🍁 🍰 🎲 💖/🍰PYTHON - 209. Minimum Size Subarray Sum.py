#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 209

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def minSubArrayLen(self, target: int, nums: List[int]) -> int:
            left, curSum = 0, 0                  # Initialize window start and current sum
            res = float('inf')                   # Track the minimum length (start with ∞)

            for right in range(len(nums)):       # Expand window to the right
                  curSum += nums[right]          # Add current element to the sum

                  # Shrink window while sum is ≥ target
                  while curSum >= target:
                        res = min(res, right - left + 1)  # Update result with current window size
                        curSum -= nums[left]              # Remove the leftmost element
                        left += 1                         # Move the left boundary forward

            # If res was updated, return it; otherwise, return 0 (no valid subarray)
            return res if res != float('inf') else 0
