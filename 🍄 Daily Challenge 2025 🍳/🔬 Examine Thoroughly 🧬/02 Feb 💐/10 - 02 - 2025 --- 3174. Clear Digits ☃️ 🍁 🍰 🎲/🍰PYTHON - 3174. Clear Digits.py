#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3174

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def clearDigits(self, s: str) -> str:
            # Stack to store non-digit characters
            stack = []

            # Iterate through each character in the string
            for ch in s:
                  # If the character is a digit, remove the last added character from the stack
                  if ch.isdigit():
                        stack.pop()
                  else:
                        # If it's not a digit, add it to the stack
                        stack.append(ch)

            # Convert stack contents to a string
            return "".join(stack)
