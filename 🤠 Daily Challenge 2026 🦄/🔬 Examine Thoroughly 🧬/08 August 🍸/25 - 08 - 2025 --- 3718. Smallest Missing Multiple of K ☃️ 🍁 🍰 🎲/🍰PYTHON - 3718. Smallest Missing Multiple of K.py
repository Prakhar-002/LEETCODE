#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3718

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def missingMultiple(self, nums: list[int], k: int) -> int:
            # Sort the array in ascending order
            nums.sort()

            # Start searching from the first positive multiple of k
            multiple = k

            # Iterate through each number in the sorted array
            for num in nums:
                  # If current multiple exists, check the next multiple
                  if num == multiple:
                        multiple += k
                  # If we encounter a number strictly greater than the current multiple,
                  # it means the current multiple was skipped and is missing
                  elif num > multiple:
                        return multiple

            # If all searched multiples were present in nums, return the next multiple
            return multiple