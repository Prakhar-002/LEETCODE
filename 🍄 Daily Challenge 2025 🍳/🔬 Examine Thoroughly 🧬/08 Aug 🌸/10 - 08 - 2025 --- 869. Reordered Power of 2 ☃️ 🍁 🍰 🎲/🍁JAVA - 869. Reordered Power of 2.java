//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 869

//? ⌚ Time complexity ➺ O(d log d) 👉🏻  d = Digits in n

//? 🧺 Space complexity ➺ O(d)

class Solution {
      // Main function: checks if n's digits can be reordered to form a power of 2
      public boolean reorderedPowerOf2(int n) {
            // Helper: Converts number to a character array, sorts it, and returns as string
            String target = countDigits(n);

            // Try all powers of 2 (up to 2^30 covers possible digit lengths)
            for (int i = 0; i < 31; i++) {
                  // Generate power of 2, count and sort its digits
                  String powerDigits = countDigits(1 << i);
                  // If digits match, n is a reordered power of 2
                  if (powerDigits.equals(target)) {
                        return true;
                  }
            }

            // No match found
            return false;
      }

      // Helper function to count and order the digits of a number as a string
      private String countDigits(int x) {
            char[] chars = String.valueOf(x).toCharArray();
            Arrays.sort(chars);
            return new String(chars);
      }
}
