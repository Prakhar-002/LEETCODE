//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 20

//? ⌚ Time complexity -> O(n) 👉 length of s

//? 🧺 Space complexity -> O(n) 👉 making of stack

import java.util.Stack; 

class Solution {
      public boolean isValid(String s) {
            Stack<Character> st = new Stack<>();

            for (int i = 0; i < s.length(); i++) {
                  char ch = s.charAt(i);

                  if (ch == '(' || ch == '{' || ch == '[') {
                        st.push(ch);
                  } else {
                        if (st.isEmpty()) {
                              return false;
                        }

                        if ((st.peek() == '(' && ch == ')') || (st.peek() == '{' && ch == '}')
                                    || (st.peek() == '[' && ch == ']')) {
                              st.pop();
                        } else {
                              return false;
                        }
                  }
            }

            return st.isEmpty();
      }
}