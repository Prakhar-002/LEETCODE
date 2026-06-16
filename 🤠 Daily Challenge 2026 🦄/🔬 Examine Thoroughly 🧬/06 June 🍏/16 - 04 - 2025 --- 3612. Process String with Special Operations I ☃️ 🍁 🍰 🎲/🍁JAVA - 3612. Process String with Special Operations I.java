//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3612

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public String processStr(String s) {
            StringBuilder result = new StringBuilder();

            for (char ch : s.toCharArray()) {
                  if (Character.isLowerCase(ch)) {
                        // Append normal lowercase letters
                        result.append(ch);
                  } else if (ch == '*' && result.length() > 0) {
                        // Remove the last character
                        result.deleteCharAt(result.length() - 1);
                  } else if (ch == '#') {
                        // Duplicate the entire current string
                        result.append(result);
                  } else if (ch == '%') {
                        // Reverse the entire current string
                        result.reverse();
                  }
            }

            return result.toString();
      }
}