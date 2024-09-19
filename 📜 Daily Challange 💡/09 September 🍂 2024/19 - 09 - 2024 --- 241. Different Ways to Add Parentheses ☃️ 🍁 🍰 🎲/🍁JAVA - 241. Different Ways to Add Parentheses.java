//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 241

//? ⌚ Time complexity ➺ O(2^n) 👉🏻  n = len(expression)

//? 🧺 Space complexity ➺ O(2^n)

import java.util.*;

class Solution {
      public List<Integer> diffWaysToCompute(String expression) {
            // List to store the computed results
            List<Integer> outputValues = new ArrayList<>();

            // Iterate through each character in the expression
            for (int i = 0; i < expression.length(); i++) {
                  char ch = expression.charAt(i);
                  // Check if the current character is an operator
                  if (ch == '+' || ch == '-' || ch == '*') {
                        // Recursively compute the left part of the expression
                        List<Integer> left = diffWaysToCompute(expression.substring(0, i));
                        // Recursively compute the right part of the expression
                        List<Integer> right = diffWaysToCompute(expression.substring(i + 1));

                        // Combine results from left and right parts based on the operator
                        for (int l : left) {
                              for (int r : right) {
                                    // Addition
                                    if (ch == '+')
                                          outputValues.add(l + r);
                                    // Subtraction
                                    else if (ch == '-')
                                          outputValues.add(l - r);
                                    // Multiplication
                                    else if (ch == '*')
                                          outputValues.add(l * r);
                              }
                        }
                  }
            }

            // If no operators found, parse the expression as a single number
            if (outputValues.isEmpty()) {
                  // Convert the string to integer and add it to the output
                  outputValues.add(Integer.parseInt(expression));
            }

            // Return the list containing all computed results
            return outputValues;
      }
}
