//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 921

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

import java.util.Stack;

class Solution {
      public int minAddToMakeValid(String s) {
            // Initialize count of open parentheses and minimum additions needed
            int openCount = 0;
            int minAdditions = 0;

            // Iterate through each character in the input string
            for (char ch : s.toCharArray()) {
                  if (ch == '(') {
                        // Increment open parentheses count
                        openCount++;
                  } else if (ch == ')') {
                        if (openCount > 0) {
                              // Matching pair found, decrement open count
                              openCount--;
                        } else {
                              // No matching open parenthesis, increment minimum additions
                              minAdditions++;
                        }
                  }
            }

            // Add remaining open parentheses to minimum additions
            minAdditions += openCount;

            // Return the total minimum additions needed
            return minAdditions;
      }
}

//!--------------------------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻 n = len(s)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int minAddToMakeValid(String s) {
            // Initialize an empty stack to store parentheses
            Stack<Character> stack = new Stack<>();

            // Iterate through each character in the input string
            for (char ch : s.toCharArray()) {
                  // Check if stack is not empty and the current character forms a pair with the
                  // top of the stack
                  if (!stack.isEmpty() && stack.peek() == '(' && ch == ')') {
                        // Remove the matching pair by popping the top element
                        stack.pop();
                  } else {
                        // Push the current character onto the stack
                        stack.push(ch);
                  }
            }

            // Return the size of the remaining stack, which represents the minimum length
            return stack.size();
      }
}
