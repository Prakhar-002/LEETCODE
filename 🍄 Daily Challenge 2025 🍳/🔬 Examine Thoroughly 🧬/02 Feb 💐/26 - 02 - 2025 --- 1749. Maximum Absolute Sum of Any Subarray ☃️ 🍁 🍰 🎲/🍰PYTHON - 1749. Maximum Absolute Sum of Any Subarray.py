#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1749

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def maxAbsoluteSum(self, nums: List[int]) -> int:
            minSubarraySum = 0  # 🔽 Tracks the minimum subarray sum ending at the current index
            maxSubarraySum = 0  # 🔼 Tracks the maximum subarray sum ending at the current index

            maxPositiveSum = float("-inf")  # 💰 Stores the maximum positive subarray sum
            minNegativeSum = float("inf")  # ❄️ Stores the minimum negative subarray sum

            # 🔄 Iterate through each number in the array
            for num in nums:
                  # 🔽 Reset minSubarraySum if it becomes positive, otherwise add current number
                  minSubarraySum = num if minSubarraySum > 0 else minSubarraySum + num

                  # ✅ Update minNegativeSum to track the lowest sum encountered
                  minNegativeSum = min(minNegativeSum, minSubarraySum)

                  # 🔼 Reset maxSubarraySum if it becomes negative, otherwise add current number
                  maxSubarraySum = num if maxSubarraySum < 0 else maxSubarraySum + num

                  # ✅ Update maxPositiveSum to track the highest sum encountered
                  maxPositiveSum = max(maxPositiveSum, maxSubarraySum)

            # 🔥 Return the maximum absolute sum found in either direction
            return max(maxPositiveSum, abs(minNegativeSum))
