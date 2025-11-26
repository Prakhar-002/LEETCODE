
#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 739

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import List

class Solution:
      def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
            n = len(temperatures)  # Get the length of the temperature list
            answer = [0] * n  # Initialize result list with zeros
            tempStack = []  # Stack to store (index, temperature)

            # Iterate through the temperatures list
            for i, currTemp in enumerate(temperatures):

                  # Process stack while the current temperature is greater than the top of stack
                  while tempStack and currTemp > tempStack[-1][1]:

                        prevIndex, prevTemp = tempStack.pop()  # Get the last stored temperature index

                        answer[prevIndex] = i - prevIndex  # Calculate the days difference

                  # Push the current temperature with index onto the stack
                  tempStack.append((i, currTemp))

            return answer  # Return the result list
