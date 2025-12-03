#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L4.1 Q2

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def reductionOperations(self, nums: List[int]) -> int:
            # Sort the array so equal numbers are grouped and values are non-decreasing
            nums.sort()
            n = len(nums)

            operations = 0  # Total number of reduction operations

            # Traverse from left to right starting at index 1
            for i in range(1, n):
                  # Whenever we encounter a new (larger) distinct value,
                  # all elements from this index to the end need one extra
                  # reduction step compared to the previous distinct value.
                  if nums[i] != nums[i - 1]:
                        operations += n - i

            return operations
