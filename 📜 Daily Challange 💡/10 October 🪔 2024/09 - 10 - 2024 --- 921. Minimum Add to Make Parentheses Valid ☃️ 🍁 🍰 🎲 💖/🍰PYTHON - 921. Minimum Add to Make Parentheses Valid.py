#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 921

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(n)

# https://github.com/Prakhar-002/LEETCODE

# ⌚ Time complexity -> O(n) ->  n = len(s)

#  Space complexity -> O(n)

class Solution:
      def minAddToMakeValid(self, s: str) -> int:
            # Initialize an empty stack to store parentheses
            stack = []

            # Iterate through each character in the input string
            for ch in s:
                  # Check if stack is not empty and the current character forms a pair with the top of the stack
                  if stack and (stack[-1] == '(' and ch == ')'):
                        # Remove the matching pair by popping the top element
                        stack.pop()
                  else:
                        # Push the current character onto the stack
                        stack.append(ch)

            # Return the size of the remaining stack, which represents the minimum length
            return len(stack)