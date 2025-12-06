
//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 394

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public String decodeString(String s) {
            // Initialize a stack to help with decoding nested patterns
            Stack<String> stack = new Stack<>();

            for (int i = 0; i < s.length(); i++) {
                  if (s.charAt(i) != ']') {
                        // Push characters onto the stack until a closing bracket is encountered
                        stack.push(String.valueOf(s.charAt(i)));
                  } else {
                        // Start constructing the substring inside the brackets
                        StringBuilder substr = new StringBuilder();
                        while (!stack.peek().equals("[")) {
                              // Build the substring in reverse order by popping from the stack
                              substr.insert(0, stack.pop());
                        }

                        // Pop the '[' character from the stack
                        stack.pop();

                        // Retrieve the multiplier (digits preceding the brackets)
                        StringBuilder key = new StringBuilder();
                        while (!stack.isEmpty() && Character.isDigit(stack.peek().charAt(0))) {
                              // Build the multiplier in reverse order
                              key.insert(0, stack.pop());
                        }

                        // Repeat the substring and push it back onto the stack
                        String repeated = substr.toString().repeat(Integer.parseInt(key.toString()));
                        stack.push(repeated);
                  }
            }

            // Join all elements in the stack to form the final decoded string
            StringBuilder result = new StringBuilder();
            for (String str : stack) {
                  result.append(str);
            }

            return result.toString();
      }
}
