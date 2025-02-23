#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 150

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import List

class Solution:
      def evalRPN(self, tokens: List[str]) -> int:
            stack = []  # Stack to store numbers and intermediate results

            # Iterate over each token in the input
            for ch in tokens:
                  if ch == '+':
                        # Addition: Pop the top two numbers and push their sum
                        stack.append(stack.pop() + stack.pop())
                  elif ch == '-':
                        # Subtraction: Pop the top two numbers, compute (second - first), and push the result
                        a, b = stack.pop(), stack.pop()
                        stack.append(b - a)
                  elif ch == '*':
                        # Multiplication: Pop the top two numbers and push their product
                        stack.append(stack.pop() * stack.pop())
                  elif ch == '/':
                        # Division: Pop the top two numbers, compute (second / first), and push the result
                        a, b = stack.pop(), stack.pop()
                        stack.append(int(float(b) / a))  # Ensure truncation toward zero
                  else:
                        # If the token is a number, convert to int and push onto stack
                        stack.append(int(ch))

            # The final result will be the only element left in the stack
            return stack[0]
