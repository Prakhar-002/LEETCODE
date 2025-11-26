//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 150

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int evalRPN(String[] tokens) {
            Stack<Integer> stack = new Stack<>(); // Stack to store numbers

            // Iterate over each token in the input array
            for (String token : tokens) {
                  if (token.equals("+")) {

                        // Addition: Pop the top two numbers and push their sum
                        stack.push(stack.pop() + stack.pop());
                  } else if (token.equals("-")) {

                        // Subtraction: Pop the top two numbers and compute (second - first)
                        int a = stack.pop(), b = stack.pop();
                        stack.push(b - a);
                  } else if (token.equals("*")) {

                        // Multiplication: Pop the top two numbers and push their product
                        stack.push(stack.pop() * stack.pop());
                  } else if (token.equals("/")) {

                        // Division: Pop the top two numbers and compute (second / first)
                        int a = stack.pop(), b = stack.pop();
                        stack.push(b / a); // Integer division (truncates toward zero)
                  } else {

                        // If the token is a number, parse it and push onto the stack
                        stack.push(Integer.parseInt(token));
                  }
            }

            // The final result will be the only element left in the stack
            return stack.pop();
      }
}