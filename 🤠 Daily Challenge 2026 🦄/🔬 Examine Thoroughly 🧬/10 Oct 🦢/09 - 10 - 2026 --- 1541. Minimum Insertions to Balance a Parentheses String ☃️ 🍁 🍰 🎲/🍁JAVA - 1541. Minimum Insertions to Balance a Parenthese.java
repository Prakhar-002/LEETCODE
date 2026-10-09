//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1541

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int minInsertions(String s) {
            int count = 0; // Number of unmatched '('
            int res = 0; // Insertions needed
            int i = 0;
            int n = s.length();

            while (i < n) {
                  if (s.charAt(i) == '(') {
                        count++;
                        i++;
                  } else {
                        // Found a ')'
                        if (count > 0) {
                              count--;
                        } else {
                              // Insert one '(' to balance
                              res++;
                        }

                        // Check if the next character is also ')'
                        if (i + 1 < n && s.charAt(i + 1) == ')') {
                              i += 2;
                        } else {
                              // Only a single ')' was present, need 1 more ')'
                              res++;
                              i++;
                        }
                  }
            }

            // Each remaining '(' needs two ')'
            return res + (count * 2);
      }
}