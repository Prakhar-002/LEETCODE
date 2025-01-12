//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2116

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public boolean canBeValid(String s, String locked) {
            // Get the length of the string
            int strLen = s.length();

            // If the length of the string is odd, it cannot be a valid parentheses sequence
            if (strLen % 2 == 1) {
                  return false;
            }

            // Initialize lists to keep track of open brackets and unlocked positions
            Stack<Integer> openBrackets = new Stack<>();
            Stack<Integer> unlocked = new Stack<>();

            // Iterate through the string
            for (int i = 0; i < s.length(); i++) {
                  if (locked.charAt(i) == '0') {
                        // If the character is unlocked, add its index to the unlocked stack
                        unlocked.push(i);
                  } else if (s.charAt(i) == '(') {
                        // If the character is a locked '(', add its index to openBrackets
                        openBrackets.push(i);
                  } else if (s.charAt(i) == ')') {
                        if (!openBrackets.isEmpty()) {
                              // If there is a matching open bracket, pop it
                              openBrackets.pop();
                        } else if (!unlocked.isEmpty()) {
                              // If there are unlocked positions available, use one to match ')'
                              unlocked.pop();
                        } else {
                              // If no match is possible, return false
                              return false;
                        }
                  }
            }

            // Check for remaining open brackets and unlocked positions
            while (!openBrackets.isEmpty() && !unlocked.isEmpty() && openBrackets.peek() < unlocked.peek()) {
                  // Match open brackets with unlocked positions if they can be closed
                  openBrackets.pop();
                  unlocked.pop();
            }

            // If there are any unmatched open brackets left, return false
            if (!openBrackets.isEmpty()) {
                  return false;
            }

            // If all checks pass, the string can be valid
            return true;
      }
}
