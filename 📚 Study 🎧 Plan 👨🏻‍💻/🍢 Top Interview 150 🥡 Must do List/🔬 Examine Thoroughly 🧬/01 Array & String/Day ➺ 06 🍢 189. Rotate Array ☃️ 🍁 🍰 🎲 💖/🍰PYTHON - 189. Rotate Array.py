#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 189

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      # Helper function to reverse a portion of the array
      def reverseArray(self, arr, start, end):
            while start < end:
                  # Swap elements
                  arr[start], arr[end] = arr[end], arr[start]
                  start += 1
                  end -= 1

      def rotate(self, nums, k):
            # Handle cases where k is greater than the array length
            k %= len(nums)

            # Reverse the first part of the array
            self.reverseArray(nums, 0, len(nums) - k - 1)

            # Reverse the second part of the array
            self.reverseArray(nums, len(nums) - k, len(nums) - 1)

            # Reverse the entire array to achieve rotation
            self.reverseArray(nums, 0, len(nums) - 1)
