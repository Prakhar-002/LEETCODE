#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2106

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def maxTotalFruits(self, fruits: list[list[int]], startPos: int, k: int) -> int:
            # Initialize two pointers for the sliding window
            left = 0
            total = 0         # Current total fruits in window
            res = 0           # Maximum result found so far

            # Iterate through the fruits list using 'right' pointer
            for right in range(len(fruits)):
                  total += fruits[right][1]     # Add fruits at current 'right' position

                  # Shrink the window from the left until the step cost is within k
                  while left <= right and self.step(fruits, startPos, left, right) > k:
                        total -= fruits[left][1]      # Remove fruits at 'left'
                        left += 1                     # Move left pointer

                  # Update the maximum fruits we can collect within the current window
                  res = max(res, total)

            return res

      def step(self, fruits: list[list[int]], startPos: int, left: int, right: int) -> int:
            # Calculate the minimum steps needed to visit all fruits from left to right
            return (
                  min(
                        abs(startPos - fruits[right][0]),     # Go to right first
                        abs(startPos - fruits[left][0])       # Or go to left first
                  ) + fruits[right][0] - fruits[left][0]      # Distance between left and right
            )
