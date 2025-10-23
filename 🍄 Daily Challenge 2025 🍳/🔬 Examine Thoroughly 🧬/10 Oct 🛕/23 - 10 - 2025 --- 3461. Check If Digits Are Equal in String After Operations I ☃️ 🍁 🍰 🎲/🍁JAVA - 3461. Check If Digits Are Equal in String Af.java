//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3461

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public boolean hasSameDigits(String s) {
            // Repeatedly combine adjacent digits modulo 10
            while (s.length() > 2) {
                  StringBuilder temp = new StringBuilder();
                  for (int i = 0; i < s.length() - 1; i++) {
                        int sum = ((s.charAt(i) - '0') + (s.charAt(i + 1) - '0')) % 10;
                        temp.append(sum);
                  }

                  s = temp.toString();
            }

            // Compare last two digits
            return s.charAt(0) == s.charAt(1);
      }
}
