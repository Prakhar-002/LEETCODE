//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3174

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public String clearDigits(String s) {
            // Stack to store non-digit characters
            Stack<Character> stack = new Stack<>();

            // Iterate through each character in the string
            for (int i = 0; i < s.length(); i++) {
                  // If the character is a digit, 
                  if (Character.isDigit(s.charAt(i))) {
                        // remove the last added character from the stack
                        stack.pop();
                  } else {
                        // If it's not a digit, add it to the stack
                        stack.push(s.charAt(i));
                  }
            }

            // Convert stack contents to a string
            StringBuilder res = new StringBuilder();

            for(Character ch : stack){
                  res.append(ch);
            }

            // return result as a string
            return res.toString();
      }
}