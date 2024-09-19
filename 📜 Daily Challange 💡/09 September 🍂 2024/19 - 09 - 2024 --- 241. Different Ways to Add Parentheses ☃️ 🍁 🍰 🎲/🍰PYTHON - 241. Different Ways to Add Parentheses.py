#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 241

#? ⌚ Time complexity ➺ O(2^n) 👉🏻  n = len(expression)

#? 🧺 Space complexity ➺ O(2^n)

class Solution:
      def diffWaysToCompute(self, expression: str) -> List[int]:
            # List to store the computed results
            outputValues = []

            # Iterate through each character in the expression
            for i in range(len(expression)):
                  ch = expression[i]
                  # Check if the current character is an operator
                  if ch in ['+', '-', '*']:
                        # Recursively compute the left part of the expression
                        left = self.diffWaysToCompute(expression[:i])
                        # Recursively compute the right part of the expression
                        right = self.diffWaysToCompute(expression[i+1:])

                        # Combine results from left and right parts based on the operator
                        for l in left:
                              for r in right:
                                    # Addition
                                    if ch == '+':
                                          outputValues.append(l + r)
                                    # Subtraction
                                    elif ch == '-':
                                          outputValues.append(l - r)
                                    # Multiplication
                                    elif ch == '*':
                                          outputValues.append(l * r)

            # If no operators found, parse the expression as a single number
            if not outputValues:
                  # Convert the string to integer and add it to the output
                  outputValues.append(int(expression))

            # Return the list containing all computed results
            return outputValues