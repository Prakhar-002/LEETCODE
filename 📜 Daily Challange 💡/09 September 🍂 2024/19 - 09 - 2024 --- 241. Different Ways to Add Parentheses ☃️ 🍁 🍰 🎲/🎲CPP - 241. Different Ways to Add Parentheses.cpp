//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 241

//? ⌚ Time complexity ➺ O(2^n) 👉🏻  n = len(expression)

//? 🧺 Space complexity ➺ O(2^n)

#include <vector>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
      vector<int> diffWaysToCompute(string expression) {
            // Vector to store the computed results
            vector<int> outputValues;

            // Iterate through each character in the expression
            for (int i = 0; i < expression.length(); i++) {
                  char ch = expression[i];
                  // Check if the current character is an operator
                  if (ch == '+' || ch == '-' || ch == '*') {
                        // Recursively compute the left part of the expression
                        vector<int> left = diffWaysToCompute(expression.substr(0, i));
                        // Recursively compute the right part of the expression
                        vector<int> right = diffWaysToCompute(expression.substr(i + 1));

                        // Combine results from left and right parts based on the operator
                        for (int l : left) {
                              for (int r : right) {
                                    // Addition
                                    if (ch == '+')
                                          outputValues.push_back(l + r);
                                    // Subtraction
                                    else if (ch == '-')
                                          outputValues.push_back(l - r);
                                    // Multiplication
                                    else if (ch == '*')
                                          outputValues.push_back(l * r);
                              }
                        }
                  }
            }

            // If no operators found, parse the expression as a single number
            if (outputValues.empty()) {
                  // Convert the string to integer and add it to the output
                  outputValues.push_back(stoi(expression));
            }

            // Return the vector containing all computed results
            return outputValues;
      }
};