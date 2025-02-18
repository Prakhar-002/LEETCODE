//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2375

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(pattern)

//? 🧺 Space complexity ➺ O(n)

#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
      string smallestNumber(string pattern) {
            // Resulting string to store the smallest number
            string DINumString = "";

            // Stack to help build the number according to the pattern
            stack<int> stack;

            // Iterate through the pattern and push numbers into the stack
            for (int num = 0; num <= pattern.size(); num++) {
                  stack.push(num + 1);  // Push numbers sequentially

                  // If we reach the end or encounter 'I', pop from stack and append
                  while (!stack.empty() && (num == pattern.size() || pattern[num] == 'I')) {
                        DINumString += to_string(stack.top());
                        stack.pop();
                  }
            }

            return DINumString;  // Return the resulting smallest number
      }
};
