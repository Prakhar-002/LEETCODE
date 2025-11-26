#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L1.3 Q2

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def evalRPN(self, tokens: List[str]) -> int:
            stack = []  # Stack to hold operands

            for n in tokens:
                  if n in "+-*/":
                        # Pop the top two operands for the operation
                        right = int(stack.pop())  # right operand
                        left = int(stack.pop())   # left operand

                        if n == "+":
                              stack.append(str(left + right))
                        elif n == "-":
                              stack.append(str(left - right))
                        elif n == "*":
                              stack.append(str(left * right))
                        else:
                              # Division truncates toward zero as per problem statement
                              stack.append(str(int(left / right)))
                  else:
                        # Push operand as string onto the stack
                        stack.append(n)

            # Final result will be the only element in stack
            return int(stack[-1])
