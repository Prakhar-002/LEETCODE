
//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 394

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
      string decodeString(const string& s) {
            // Initialize a stack to help with decoding nested patterns
            stack<string> stack;

            for (char ch : s) {
                  if (ch != ']') {
                        // Push characters onto the stack until a closing bracket is encountered
                        stack.push(string(1, ch));
                  } else {
                        // Start constructing the substring inside the brackets
                        string substr;
                        while (!stack.empty() && stack.top() != "[") {
                              substr = stack.top() + substr;
                              stack.pop();
                        }

                        // Pop the '[' character from the stack
                        stack.pop();

                        // Retrieve the multiplier (digits preceding the brackets)
                        string key;
                        while (!stack.empty() && isdigit(stack.top()[0])) {
                              key = stack.top() + key;
                              stack.pop();
                        }

                        // Repeat the substring and push it back onto the stack
                        int multiplier = stoi(key);
                        string repeated;
                        for (int i = 0; i < multiplier; i++) {
                              repeated += substr;
                        }
                        stack.push(repeated);
                  }
            }

            // Join all elements in the stack to form the final decoded string
            string result;
            while (!stack.empty()) {
                  result = stack.top() + result;
                  stack.pop();
            }

            return result;
      }
};
