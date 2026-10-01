//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 20

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

import java.util.ArrayDeque;
import java.util.Deque;
import java.util.HashMap;
import java.util.Map;

class Solution {
      public boolean isValid(String s) {
            // Stack to keep track of opening brackets
            Deque<Character> stack = new ArrayDeque<>();

            // Map defining matching pairs of opening to closing brackets
            Map<Character, Character> mapping = new HashMap<>();
            mapping.put('(', ')');
            mapping.put('{', '}');
            mapping.put('[', ']');

            for (int i = 0; i < s.length(); i++) {
                  char ch = s.charAt(i);

                  // Push opening brackets onto the stack
                  if (mapping.containsKey(ch)) {
                        stack.push(ch);
                  } 
                  // If it is a closing bracket, check for matching open bracket
                  else if (mapping.containsValue(ch)) {
                        if (stack.isEmpty() || mapping.get(stack.pop()) != ch) {
                              return false;
                        }
                  }
            }

            // String is valid only when no unclosed brackets remain in the stack
            return stack.isEmpty();
      }
}