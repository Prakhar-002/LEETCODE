//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1190

//? ⌚ Time complexity -> O(n) 👉 String length

//? 🧺 Space complexity -> O(n) 👉 Making Reverse SubString

import java.util.*;

class Solution {
      public String reverseParentheses(String s) {
            // we shall store i for "(" to j for ")"
            // store pair open parenthesis to its close parenthesis
            Map<Integer, Integer> parenPair = new HashMap<>();
            // using stack for extracting parenthesis
            Stack<Integer> stack = new Stack<>();

            for (int i = 0; i < s.length(); i++) {
                  char ch = s.charAt(i);
                  // if we got open parenthesis store the idx
                  if (ch == '(') {
                        stack.push(i);
                  } else if (ch == ')') {
                        // i is at close parenthesis
                        // j is at open parenthesis
                        int j = stack.pop();
                        // store the pair (i to j) and (j to i)
                        parenPair.put(i, j);
                        parenPair.put(j, i);
                  }
            }

            // preWork is done now main

            int i = 0, direction = 1;
            StringBuilder revStr = new StringBuilder();

            while (i < s.length()) {
                  if (s.charAt(i) == '(' || s.charAt(i) == ')') {
                        // if somewhere we found parenthesis
                        // we switch to its corresponding open or close paren
                        i = parenPair.get(i);
                        // and change the direction of adding in result
                        direction = -direction;
                  } else {
                        // simply add in our revStr
                        revStr.append(s.charAt(i));
                  }

                  // inc our i with direction
                  // so either it will go with inc or dec mean -> dir or <- dir
                  i += direction;
            }

            // convert StringBuilder to string
            return revStr.toString();
      }
}

// ------------------------------------------------------

// ⌚ Time complexity -> O(n ^ 2) 👉 n is String length

// 🧺 Space complexity -> O(n * m) 👉 using Stack m times

class Solution {
      public String reverseParentheses(String s) {
            // take an empty stack
            Stack<Character> stack = new Stack<>();

            // Traverse whole character in string
            for (char ch : s.toCharArray()) {
                  // if we get a close parenthesis
                  if (ch == ')') {
                        // partition to store the value btw ()
                        StringBuilder portion = new StringBuilder();

                        // pop until open parenthesis come
                        // for corresponding open parenthesis
                        while (stack.peek() != '(') {
                              // pop from stack until "(" comes
                              portion.append(stack.pop());
                        }
                        // pop "(" too
                        stack.pop();
                        // now store the partition itself in stack
                        // cause stack push and pop reverse the string we're done with reverse
                        for (char c : portion.toString().toCharArray()) {
                              stack.push(c);
                        }
                  }
                  // we append ch in stack until a close parenthesis comes
                  else {
                        stack.push(ch);
                  }
            }

            // join stack values return string
            StringBuilder result = new StringBuilder();
            for (char c : stack) {
                  result.append(c);
            }
            return result.toString();
      }
}

