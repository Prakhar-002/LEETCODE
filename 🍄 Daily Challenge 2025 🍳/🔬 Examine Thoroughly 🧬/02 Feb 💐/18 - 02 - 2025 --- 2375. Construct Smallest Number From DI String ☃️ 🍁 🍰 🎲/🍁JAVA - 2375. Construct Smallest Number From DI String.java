//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2375

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(pattern)

//? 🧺 Space complexity ➺ O(n)

import java.util.Stack;

class Solution {
      public String smallestNumber(String pattern) {
            // StringBuilder to store the resulting smallest number
            StringBuilder DINumString = new StringBuilder();

            // Stack to help build the number according to the pattern
            Stack<Integer> stack = new Stack<>();

            // Iterate through the pattern and push numbers into the stack
            for (int num = 0; num <= pattern.length(); num++) {
                  stack.push(num + 1);  // Push numbers sequentially

                  // If we reach the end or encounter 'I', pop from stack and append
                  while (!stack.isEmpty() && (num == pattern.length() || pattern.charAt(num) == 'I')) {
                        DINumString.append(stack.pop());
                  }
            }

            // Convert StringBuilder to string and return
            return DINumString.toString();
      }
}
