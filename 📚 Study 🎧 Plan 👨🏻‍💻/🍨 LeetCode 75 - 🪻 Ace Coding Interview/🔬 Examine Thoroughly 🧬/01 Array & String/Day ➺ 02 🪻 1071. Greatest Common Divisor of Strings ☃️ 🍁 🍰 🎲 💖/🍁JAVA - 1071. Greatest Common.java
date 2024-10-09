//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1071

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = min(str1.length, str2.length)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public String gcdOfStrings(String str1, String str2) {
            // Check if concatenated strings are equal or not, if not return ""
            if (!(str1 + str2).equals(str2 + str1))
                  return "";

            // else return the substring from 0 to gcd of size(str1), size(str2)
            int gcd = gcd(str1.length(), str2.length());
            return str1.substring(0, gcd);
      }

      private int gcd(int a, int b) {
            return b == 0 ? a : gcd(b, a % b);
      }
}