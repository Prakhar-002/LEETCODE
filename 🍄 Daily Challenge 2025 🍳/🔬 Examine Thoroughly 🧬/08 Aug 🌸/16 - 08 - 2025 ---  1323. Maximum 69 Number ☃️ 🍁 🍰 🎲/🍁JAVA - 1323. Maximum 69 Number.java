//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1323

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int maximum69Number(int num) {
            // Convert the integer to a character array for easy modification
            char[] s_chars = String.valueOf(num).toCharArray();

            // ----------------------------------------------------------
            // Iterate through the digits to find the first '6'
            // ----------------------------------------------------------
            for (int i = 0; i < s_chars.length; i++) {
                  // If the current digit is '6'
                  if (s_chars[i] == '6') {
                        // Change it to '9'
                        s_chars[i] = '9';
                        // Since we want the maximum possible number,
                        // changing the leftmost '6' to '9' will yield the largest result.
                        // So, we can stop after the first replacement.
                        break;
                  }
            }

            // Convert the character array back to a string and then to an integer
            return Integer.parseInt(new String(s_chars));
      }
}
