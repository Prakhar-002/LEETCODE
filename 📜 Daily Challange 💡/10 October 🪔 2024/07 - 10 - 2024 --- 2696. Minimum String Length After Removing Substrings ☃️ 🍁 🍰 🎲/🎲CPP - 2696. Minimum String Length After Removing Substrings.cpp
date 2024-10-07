//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2696

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
      int minLength(string s) {
            stack<char> stack;

            for (char ch : s) {
                  // Check if stack is not empty before peeking
                  if (!stack.empty()) {
                        char topStack = stack.top();

                        // Create a string from the two characters
                        string str = string(1, topStack) + ch;

                        // Compare strings
                        if (str == "AB" || str == "CD") {
                              // Remove the matching pair
                              stack.pop();
                              // move to the next char
                              continue;
                        }
                  }

                  // Push the current character onto the stack
                  stack.push(ch);
            }

            // Return the size of the remaining stack
            return stack.size();
      }
};

