//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2390

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public String removeStars(String s) {
            // Create a stack to store characters of the string
            Stack<Character> charStack = new Stack<>();

            // Iterate over each character in the input string
            for (char ch : s.toCharArray()) {
                  // If the character is '*', remove the top element from the stack
                  if (ch == '*') {
                        charStack.pop();
                  } else {
                        // Otherwise, push the character onto the stack
                        charStack.push(ch);
                  }
            }

            // Use a StringBuilder to construct the result string
            StringBuilder sb = new StringBuilder();

            // Append each character from the stack to the StringBuilder
            for (Character ch : charStack) {
                  sb.append(ch);
            }

            // Convert the StringBuilder to a string and return the result
            return sb.toString();
      }
}
