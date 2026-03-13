#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1994

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(heights)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def canSeePersonsCount(self, heights: List[int]) -> List[int]:
            # Get total number of people (length of heights array)
            N = len(heights)
            # Initialize result array to store visible count for each person
            res = [0] * N

            # Use stack to track heights of people we can potentially see
            stack = []

            # Iterate from right to left (from back of line to front)
            for i in range(N - 1, -1, -1):
                  height = heights[i]
                  visible = 0

                  # Pop people from stack who are shorter than current person
                  # Each popped person is visible to current person
                  while stack and height > stack[-1]:
                        visible += 1
                        stack.pop()

                  # If stack not empty, tallest remaining person is also visible
                  if stack:
                        visible += 1

                  # Store count of visible people for person at index i
                  res[i] = visible
                  # Push current person's height onto stack for future comparisons
                  stack.append(height)

            return res
