// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 301

// ? ⌚ Time complexity ➺ O(n) 👉🏻 n = len(nums)

// ? 🧺 Space complexity ➺ O(n)

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

class Solution {
      private Set<String> st;
      private int maxLen;
      private int n;

      public List<String> removeInvalidParentheses(String s) {
            // Set to store unique valid results
            st = new HashSet<>();
            n = s.length();
            maxLen = 0;

            StringBuilder curr = new StringBuilder();
            solve(0, curr, 0, s);

            return new ArrayList<>(st);
      }

      private void solve(int i, StringBuilder curr, int count, String s) {
            // If count becomes negative, more ')' than '(' exists
            if (count < 0) {
                  return;
            }

            // End of string reached
            if (i == n) {
                  // Valid if all '(' are matched
                  if (count == 0) {
                        int currLen = curr.length();

                        // Found a longer valid sequence; clear prior candidates
                        if (currLen > maxLen) {
                              maxLen = currLen;
                              st.clear();
                        }

                        // Add to results if matching maximum valid length
                        if (currLen == maxLen) {
                              st.add(curr.toString());
                        }
                  }
                  return;
            }

            char c = s.charAt(i);

            // Keep letters directly without altering count
            if (c != '(' && c != ')') {
                  curr.append(c);
                  solve(i + 1, curr, count, s);
                  curr.deleteCharAt(curr.length() - 1);
                  return;
            }

            // OPTION 1: Keep the current parenthesis
            curr.append(c);
            if (c == '(') {
                  solve(i + 1, curr, count + 1, s);
            } else {
                  solve(i + 1, curr, count - 1, s);
            }
            curr.deleteCharAt(curr.length() - 1);

            // OPTION 2: Remove the current parenthesis
            solve(i + 1, curr, count, s);
      }
}