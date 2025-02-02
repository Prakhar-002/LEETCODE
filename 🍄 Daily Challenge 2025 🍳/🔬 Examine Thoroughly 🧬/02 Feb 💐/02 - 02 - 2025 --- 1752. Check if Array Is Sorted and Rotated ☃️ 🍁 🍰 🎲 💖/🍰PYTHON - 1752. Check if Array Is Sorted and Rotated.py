#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1752

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution: 
      def check(self, nums):
            k = 0  # Counter for rotation points
            n = len(nums)  # Get the length of the array

            # Loop through the array to count the number of disorder points
            for i in range(len(nums)):
                  # If the current element is greater than the next (circular condition), increment k
                  if nums[i] > nums[(i + 1) % n]:
                        k += 1

            # The array is sorted and rotated if there's at most one disorder point
            return False if k > 1 else True