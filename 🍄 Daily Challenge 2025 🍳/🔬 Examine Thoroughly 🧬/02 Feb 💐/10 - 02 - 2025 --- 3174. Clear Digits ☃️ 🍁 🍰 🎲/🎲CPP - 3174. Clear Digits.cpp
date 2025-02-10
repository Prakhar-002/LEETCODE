//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3174

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
      string clearDigits(string s) {
            // Stack to store non-digit characters
            stack<char> stack;

            // Iterate through each character in the string
            for (char ch : s) {
                  // If the character is a digit, remove the last added character from the stack
                  if (isdigit(ch)) {
                        stack.pop();
                  } else {
                        // If it's not a digit, add it to the stack
                        stack.push(ch);
                  }
            }

            // Convert stack contents to a string
            string result;
            while (!stack.empty()) {
                  result = stack.top() + result;
                  stack.pop();
            }

            return result;
      }
};
