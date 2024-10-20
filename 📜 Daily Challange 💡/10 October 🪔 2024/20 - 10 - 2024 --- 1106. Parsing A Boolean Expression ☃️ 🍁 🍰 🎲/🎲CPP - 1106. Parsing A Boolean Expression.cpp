//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1106

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(expression)

//? 🧺 Space complexity ➺ O(n)

#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

class Solution {
public:
      bool parseBoolExpr(string expression) {
            // Initialize an index pointer 'i' to track position in the string
            int i = 0;

            // Recursive lambda function to evaluate boolean expressions
            function<bool()> solveBoolExpr = [&]() -> bool {
                  // Get the current character from the expression
                  char ch = expression[i];

                  // Move the index pointer to the next character
                  i++;

                  // Case 1: If the character is 't' (true), return true
                  if (ch == 't') return true;

                  // Case 2: If the character is 'f' (false), return false
                  if (ch == 'f') return false;

                  // Case 3: If the character is '!', it's a NOT operation
                  if (ch == '!') {
                        // Skip the open parenthesis and solve the next sub-expression
                        i++;
                        // Negate the result of the sub-expression
                        bool boolRes = !solveBoolExpr();
                        // Skip the closing parenthesis
                        i++;
                        return boolRes;
                  }

                  // Case 4: Handle '&' (AND) or '|' (OR) operations
                  vector<bool> children;  // Vector to hold the results of sub-expressions
                  i++;  // Skip the opening parenthesis

                  // Loop through the sub-expressions until a closing parenthesis is found
                  while (expression[i] != ')') {
                        // If the current character is not a comma, solve the sub-expression
                        if (expression[i] != ',') {
                              children.push_back(solveBoolExpr());
                        } else {
                              // Skip commas between sub-expressions
                              i++;
                        }
                  }

                  // Skip the closing parenthesis
                  i++;

                  // If it's an AND operation, return true only if all children are true
                  if (ch == '&')
                        return all_of(children.begin(), children.end(), [](bool v) { return v; });

                  // If it's an OR operation, return true if at least one child is true
                  if (ch == '|')
                        return any_of(children.begin(), children.end(), [](bool v) { return v; });

                  return false;
            };

            // Start solving the boolean expression
            return solveBoolExpr();
      }
};

