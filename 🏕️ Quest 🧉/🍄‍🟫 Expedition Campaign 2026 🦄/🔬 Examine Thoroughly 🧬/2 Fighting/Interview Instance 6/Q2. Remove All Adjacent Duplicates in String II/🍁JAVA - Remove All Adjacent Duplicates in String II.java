//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1209

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

import java.util.Stack;

class Solution {
      public String removeDuplicates(String s, int k) {
            // Stack stores pairs of [character, count]
            // Initialized with sentinel value '$' to avoid empty stack checks
            Stack<int[]> stack = new Stack<>();
            stack.push(new int[] { '$', 0 });

            for (char ch : s.toCharArray()) {
                  // If current char matches top of stack, increment its count
                  if (stack.peek()[0] == ch) {
                        stack.peek()[1]++;

                        // If count reaches k, remove the group entirely
                        if (stack.peek()[1] == k) {
                              stack.pop();
                        }
                  }
                  // Otherwise push new character with count 1
                  else {
                        stack.push(new int[] { ch, 1 });
                  }
            }

            // Reconstruct string from remaining stack pairs
            StringBuilder sb = new StringBuilder();
            for (int[] pair : stack) {
                  // Skip the sentinel '$' entry at the bottom
                  if (pair[0] == '$')
                        continue;
                  // Repeat the character by its count
                  for (int i = 0; i < pair[1]; i++) {
                        sb.append((char) pair[0]);
                  }
            }

            return sb.toString();
      }
}