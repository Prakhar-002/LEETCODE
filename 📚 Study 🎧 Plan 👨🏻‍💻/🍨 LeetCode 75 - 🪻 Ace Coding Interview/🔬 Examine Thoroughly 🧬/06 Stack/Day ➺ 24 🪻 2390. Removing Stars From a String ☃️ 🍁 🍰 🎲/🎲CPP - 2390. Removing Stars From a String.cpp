//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2390

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
      string removeStars(const string& s) {
            // Stack to store characters
            stack<char> charStack;

            // Iterate over each character in the input string
            for (char ch : s) {
                  if (ch == '*') {
                        // Remove the top element for '*'
                        charStack.pop();
                  } else {
                        // Add the character to the stack
                        charStack.push(ch);
                  }
            }

            // Construct the result string from the stack
            string result(charStack.size(), ' ');
            for (int i = charStack.size() - 1; i >= 0; --i) {
                  result[i] = charStack.top();
                  charStack.pop();
            }

            return result;
      }
};
