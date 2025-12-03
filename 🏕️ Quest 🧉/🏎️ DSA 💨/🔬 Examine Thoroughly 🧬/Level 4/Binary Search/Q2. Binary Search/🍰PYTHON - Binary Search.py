#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 704

#? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def search(self, nums: List[int], target: int) -> int:
            l, r = 0, len(nums) - 1  # Initialize left and right pointers

            while l <= r:  # Continue until the search space is exhausted
                  m = l + ((r - l) // 2)  # Compute mid to avoid overflow

                  if nums[m] == target:
                        return m  # Target found at index m
                  elif nums[m] < target:
                        l = m + 1  # Target is on the right half
                  else:
                        r = m - 1  # Target is on the left half

            return -1  # Target not found