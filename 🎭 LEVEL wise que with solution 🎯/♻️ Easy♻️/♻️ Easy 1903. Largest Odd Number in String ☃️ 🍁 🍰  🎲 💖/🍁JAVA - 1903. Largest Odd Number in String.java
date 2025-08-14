//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1903

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(num)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public String largestOddNumber(String num) {
            // Iterate from the end of the string towards the beginning
            for (int i = num.length() - 1; i >= 0; i--) {
                  // Convert current char to integer and check if it is odd
                  int digit = num.charAt(i) - '0';
                  if (digit % 2 != 0) {
                        // Return substring from start to this index (inclusive)
                        return num.substring(0, i + 1);
                  }
            }
            // If no odd digit found, return empty string
            return "";
      }
}
