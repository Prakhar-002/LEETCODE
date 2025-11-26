#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 84

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(heights)

#? 🧺 Space complexity ➺ O(n) 

class Solution:
      def largestRectangleArea(self, heights: List[int]) -> int:
            n = len(heights)
            maxArea = 0                 # Variable to store the maximum area
            stack = []                 # Stack to store indices of bars

            # Iterate through all bars and an extra iteration for sentinel (to flush remaining stack)
            for i in range(n + 1):
                  # While stack is not empty and current bar is smaller than the bar at top of stack
                  # OR we're at the sentinel index `n`
                  while stack and (i == n or heights[stack[-1]] >= heights[i]):
                        height = heights[stack.pop()]  # Pop the height

                        # If stack is empty, width is i (from beginning)
                        # Else width is the distance between current index and the last index in stack - 1
                        width = i if not stack else i - stack[-1] - 1

                        # Calculate area and update maxArea
                        maxArea = max(maxArea, height * width)

                  # Push current index onto stack
                  stack.append(i)

            return maxArea
