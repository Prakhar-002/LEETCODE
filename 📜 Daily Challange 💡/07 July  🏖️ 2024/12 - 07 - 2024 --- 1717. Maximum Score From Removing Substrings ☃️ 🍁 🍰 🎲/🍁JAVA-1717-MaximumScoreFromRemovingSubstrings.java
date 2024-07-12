//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1717

//? ⌚ Time complexity -> O(n) 👉 String length 

//? 🧺 Space complexity -> O(n) 👉 using Stack 

import java.util.*;

class Solution {
      public int maximumGain(String s, int x, int y) {
            // we will call as per the x and y
            return x > y ? removeByPair("ab", x, y, s) : removeByPair("ba", y, x, s);
      }

      private int removeByPair(String pair, int x, int y, String s) {
            // let say x > y
            int points = 0;
            Stack<Character> stack = new Stack<>();

            // first we will remove "ab"
            for (char ch : s.toCharArray()) {
                  // check for the ch if it is b and on top of our stack is a
                  if (ch == pair.charAt(1) && !stack.isEmpty() && stack.peek() == pair.charAt(0)) {
                        //  remove a from top
                        stack.pop();
                        // add point for removing
                        points += x;
                  } else {
                        // just push every char in stack
                        stack.push(ch);
                  }
            }

            // now we will update the string for removing only the "ba" pair from string
            StringBuilder sb = new StringBuilder();
            while (!stack.isEmpty()) {
                  // clear stack for reuse
                  sb.append(stack.pop());
            }
            // updating stack
            s = sb.reverse().toString();

            //  now we will remove "ba"
            for (char ch : s.toCharArray()) {
                  // check for the ch if it is a and on top of our stack is b
                  if (ch == pair.charAt(0) && !stack.isEmpty() && stack.peek() == pair.charAt(1)) {
                        // remove b from top
                        stack.pop();
                        // add point for removing
                        points += y;
                  } else {
                        // just push to our stack
                        stack.push(ch);
                  }
            }

            // return total points
            return points;
      }
}