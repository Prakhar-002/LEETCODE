#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3487

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def maxSum(self, nums: List[int]) -> int:
            # Create a set of all positive numbers from the list
            # This ensures no duplicates and filters out non-positive numbers (<= 0)
            positiveNumsSet = set([num for num in nums if num > 0])

            # If there are no positive numbers, return the maximum number from the list
            # Otherwise, return the sum of the unique positive numbers
            return max(nums) if len(positiveNumsSet) == 0 else sum(positiveNumsSet)
