//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1249

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public String minRemoveToMakeValid(String s) {

            // ---------- First Pass (Left to Right): remove unmatched ')' ----------
            int open = 0;
            StringBuilder sb = new StringBuilder();

            for (char ch : s.toCharArray()) {
                  if (ch == '(') {
                        // Track unmatched opening brackets
                        open++;
                  } else if (ch == ')') {
                        // Skip this ')' if no unmatched '(' exists
                        if (open == 0)
                              continue;
                        // Otherwise consume one unmatched '('
                        open--;
                  }
                  sb.append(ch);
            }

            // ---------- Second Pass (Right to Left): remove unmatched '(' ----------
            int close = 0;
            StringBuilder ans = new StringBuilder();

            for (int i = sb.length() - 1; i >= 0; i--) {
                  char ch = sb.charAt(i);
                  if (ch == ')') {
                        // Track unmatched closing brackets
                        close++;
                  } else if (ch == '(') {
                        // Skip this '(' if no unmatched ')' exists
                        if (close == 0)
                              continue;
                        // Otherwise consume one unmatched ')'
                        close--;
                  }
                  ans.append(ch);
            }

            // Reverse since we built the string right to left
            return ans.reverse().toString();
      }
}