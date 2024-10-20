//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1106

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(expression)

//? 🧺 Space complexity ➺ O(n)

import java.util.ArrayList;
import java.util.List;

class Solution {
      private int i;
      private String expression;

      public boolean parseBoolExpr(String expression) {
            this.expression = expression;
            this.i = 0;
            // Start solving the boolean expression
            return solveBoolExpr();
      }

      private boolean solveBoolExpr() {
            // Get the current character from the expression
            char ch = expression.charAt(i);

            // Move the index pointer to the next character
            i++;

            // Case 1: If the character is 't' (true), return True
            if (ch == 't') {
                  return true;
            }

            // Case 2: If the character is 'f' (false), return False
            if (ch == 'f') {
                  return false;
            }

            // Case 3: If the character is '!', it's a NOT operation
            if (ch == '!') {
                  // Skip the open parenthesis and solve the next sub-expression
                  i++;
                  // Negate the result of the sub-expression
                  boolean boolRes = !solveBoolExpr();
                  // Skip the closing parenthesis
                  i++;
                  return boolRes;
            }

            // Case 4: Handle '&' (AND) or '|' (OR) operations
            List<Boolean> children = new ArrayList<>();  // List to hold the results of sub-expressions
            i++;  // Skip the opening parenthesis

            // Loop through the sub-expressions until a closing parenthesis is found
            while (expression.charAt(i) != ')') {
                  // If the current character is not a comma, solve the sub-expression
                  if (expression.charAt(i) != ',') {
                        children.add(solveBoolExpr());
                  } else {
                        // Skip commas between sub-expressions
                        i++;
                  }
            }

            // Skip the closing parenthesis
            i++;

            // If it's an AND operation, return True only if all children are True
            if (ch == '&') {
                  return children.stream().allMatch(Boolean::booleanValue);
            }

            // If it's an OR operation, return True if at least one child is True
            if (ch == '|') {
                  return children.stream().anyMatch(Boolean::booleanValue);
            }

            throw new IllegalArgumentException("Invalid expression");
      }
}

