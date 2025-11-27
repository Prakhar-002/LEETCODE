#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3381

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def maxSubarraySum(self, nums: List[int], k: int) -> int:
            prefix = [float("inf")] * k  # Array to track minimum prefix sums for each remainder mod k
            prefix[0] = 0                # Prefix sum for remainder 0 is initialized as 0
            res = float("-inf")          # Result initialized to negative infinity for max comparison
            total = 0                    # Running total prefix sum

            # Iterate over each element in nums array
            for i, n in enumerate(nums):
                  total += n            # Add current element to running sum
                  length = i + 1        # Current subarray length
                  prefix_len = length % k  # Remainder of length mod k

                  # Calculate max sum for subarray with length divisible by k
                  res = max(res, total - prefix[prefix_len])

                  # Update prefix array to hold minimum prefix sum for this remainder class
                  prefix[prefix_len] = min(prefix[prefix_len], total)

            return res
