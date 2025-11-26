//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 150

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

class Solution
{
public:
      int evalRPN(vector<string> &tokens)
      {
            stack<int> stack; // Stack to store numbers

            // Iterate over each token in the input vector
            for (const string &token : tokens)
            {
                  if (token == "+")
                  {

                        // Addition: Pop the top two numbers and push their sum
                        int a = stack.top();
                        stack.pop();
                        int b = stack.top();
                        stack.pop();
                        stack.push(a + b);
                  }
                  else if (token == "-")
                  {

                        // Subtraction: Pop the top two numbers and compute (second - first)
                        int a = stack.top();
                        stack.pop();
                        int b = stack.top();
                        stack.pop();
                        stack.push(b - a);
                  }
                  else if (token == "*")
                  {

                        // Multiplication: Pop the top two numbers and push their product
                        int a = stack.top();
                        stack.pop();
                        int b = stack.top();
                        stack.pop();
                        stack.push(a * b);
                  }
                  else if (token == "/")
                  {

                        // Division: Pop the top two numbers and compute (second / first)
                        int a = stack.top();
                        stack.pop();
                        int b = stack.top();
                        stack.pop();
                        stack.push(b / a); // Integer division (truncates toward zero)
                  }
                  else
                  {

                        // If the token is a number, convert to int and push onto stack
                        stack.push(stoi(token));
                  }
            }

            // The final result will be the only element left in the stack
            return stack.top();
      }
};