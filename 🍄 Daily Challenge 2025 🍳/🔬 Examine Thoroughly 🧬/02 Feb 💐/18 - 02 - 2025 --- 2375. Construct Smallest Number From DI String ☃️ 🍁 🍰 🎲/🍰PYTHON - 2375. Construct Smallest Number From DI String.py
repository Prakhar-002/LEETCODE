#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2375

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(pattern)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def smallestNumber(self, pattern: str) -> str:
            # This will store the final smallest number following the pattern
            DINumString = ""

            # Stack to help build the number according to the given pattern
            stack = []

            # Iterate through the pattern and push numbers into the stack
            for num in range(len(pattern) + 1):
                  stack.append(num + 1)  # Push numbers in increasing order

                  # If we reach the end or encounter 'I', pop from stack and append
                  while stack and (num == len(pattern) or pattern[num] == 'I'):
                        DINumString += str(stack.pop())

            return DINumString  # Return the resulting smallest number
