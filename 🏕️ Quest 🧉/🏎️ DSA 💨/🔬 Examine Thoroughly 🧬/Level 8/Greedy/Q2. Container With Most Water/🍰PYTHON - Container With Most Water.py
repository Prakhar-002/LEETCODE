#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 11

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(height)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def maxArea(self, height: List[int]) -> int:
            # Initialize two pointers: one at the beginning and 
            left = 0
            # one at the end of the array
            right = len(height) - 1

            # Variable to store the maximum water area found
            maxWater = 0

            # Iterate until the two pointers meet
            while left <= right:
                  # Calculate the current water area and update the maximum if this area is larger
                  maxWater = max((right - left) * min(height[left], height[right]), maxWater)

                  # Move the pointer corresponding to the smaller height inward
                  if height[left] < height[right]:
                        left += 1
                  else:
                        right -= 1

            # Return the maximum water area found
            return maxWater