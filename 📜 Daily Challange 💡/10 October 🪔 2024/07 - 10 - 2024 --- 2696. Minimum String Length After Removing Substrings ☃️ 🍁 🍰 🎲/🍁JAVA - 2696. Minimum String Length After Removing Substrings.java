//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2696

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int minLength(String s) {
            Stack<Character> stack = new Stack<>();

            for (int i = 0; i < s.length(); i++) {
                  char ch = s.charAt(i);

                  // Check if stack is not empty before peeking
                  if (!stack.isEmpty()) {
                        char topStack = stack.peek();

                        // Create a string from the two characters
                        String str = "" + topStack + ch;

                        // Use equals() to compare strings
                        if (str.equals("AB") || str.equals("CD")) {
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
}
