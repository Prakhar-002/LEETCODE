#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3727

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def maxAlternatingSum(self, nums: list[int]) -> int:
            n = len(nums)

            # Square each element in nums
            for i in range(n):
                  nums[i] **= 2

            # Sort squares in ascending order
            nums.sort()

            # Assign the larger elements to positive terms and smaller elements to negative terms
            # Positive count: ceil(n / 2) -> slice [n // 2:]
            # Negative count: floor(n / 2) -> slice [:n // 2]
            return sum(nums[n // 2:]) - sum(nums[:n // 2])