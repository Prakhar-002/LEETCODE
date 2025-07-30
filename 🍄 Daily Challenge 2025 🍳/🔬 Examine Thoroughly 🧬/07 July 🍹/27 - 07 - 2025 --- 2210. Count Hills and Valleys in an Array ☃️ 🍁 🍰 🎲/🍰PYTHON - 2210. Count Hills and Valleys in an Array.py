#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2210

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def countHillValley(self, nums: List[int]) -> int:
            count = 0                    # Initialize count of hills and valleys
            left = 0                     # Pointer to track the last different element to the left

            # Loop from second element to the second last element
            for i in range(1, len(nums) - 1):
                  # Skip if current and next elements are equal (flat line)
                  if nums[i] != nums[i + 1]:
                        # Check if current element is a hill or a valley
                        if (nums[i] > nums[left] and nums[i] > nums[i + 1]) or \
                              (nums[i] < nums[left] and nums[i] < nums[i + 1]):
                              count += 1   # Increase count if hill or valley is found

                        left = i          # Update left pointer to current index

            return count                  # Return the total number of hills and valleys
