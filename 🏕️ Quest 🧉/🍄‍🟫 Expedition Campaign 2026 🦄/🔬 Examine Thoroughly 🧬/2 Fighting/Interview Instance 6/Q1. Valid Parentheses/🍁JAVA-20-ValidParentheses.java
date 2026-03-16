//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 20

//? ⌚ Time complexity -> O(n) 👉 length of s

//? 🧺 Space complexity -> O(n) 👉 making of stack

import java.util.Stack;
import java.util.Map;
import java.util.HashMap;

class Solution {
      public boolean isValid(String s) {
            // Stack to keep track of opening brackets
            Stack<Character> stack = new Stack<>();

            // Map each opening bracket to its corresponding closing bracket
            Map<Character, Character> mapping = new HashMap<>();
            mapping.put('(', ')');
            mapping.put('{', '}');
            mapping.put('[', ']');

            for (char ch : s.toCharArray()) {
                  // If current char is an opening bracket, push onto stack
                  if (mapping.containsKey(ch)) {
                        stack.push(ch);
                  }
                  // If current char is a closing bracket
                  else if (mapping.containsValue(ch)) {
                        // Stack must be non-empty and top must match current closing bracket
                        if (stack.isEmpty() || mapping.get(stack.pop()) != ch) {
                              return false;
                        }
                  }
            }

            // Valid only if all opening brackets were matched and closed
            return stack.isEmpty();
      }
}