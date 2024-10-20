#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1106

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(expression)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def parseBoolExpr(self, expression: str) -> bool:
            # Initialize an index pointer 'i' to track position in the string
            i = 0

            # Recursive helper function to evaluate boolean expressions
            def solveBoolExpr():
                  nonlocal i  # Allows modifying the index 'i' from the outer scope

                  # Get the current character from the expression
                  ch = expression[i]

                  # Move the index pointer to the next character
                  i += 1

                  # Case 1: If the character is 't' (true), return True
                  if ch == 't':
                        return True

                  # Case 2: If the character is 'f' (false), return False
                  if ch == 'f':
                        return False

                  # Case 3: If the character is '!', it's a NOT operation
                  if ch == '!':
                        # Skip the open parenthesis and solve the next sub-expression
                        i += 1
                        # Negate the result of the sub-expression
                        boolRes = not solveBoolExpr()
                        # Skip the closing parenthesis
                        i += 1
                        return boolRes

                  # Case 4: Handle '&' (AND) or '|' (OR) operations
                  children = []  # List to hold the results of sub-expressions
                  i += 1  # Skip the opening parenthesis

                  # Loop through the sub-expressions until a closing parenthesis is found
                  while expression[i] != ')':
                        # If the current character is not a comma, solve the sub-expression
                        if expression[i] != ',': 
                              children.append(solveBoolExpr())
                        else:
                              # Skip commas between sub-expressions
                              i += 1

                  # Skip the closing parenthesis
                  i += 1

                  # If it's an AND operation, return True only if all children are True
                  if ch == '&':
                        return all(children)

                  # If it's an OR operation, return True if at least one child is True
                  if ch == '|':
                        return any(children)

            # Start solving the boolean expression
            return solveBoolExpr()
