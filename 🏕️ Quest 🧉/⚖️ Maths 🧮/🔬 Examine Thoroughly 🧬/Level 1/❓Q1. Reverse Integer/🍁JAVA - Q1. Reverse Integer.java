//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L1 Quiz Q1

//? ⌚ Time complexity ➺ O(n)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int reverse(int x) {
            int num = Math.abs(x); // Work with absolute value of x to handle negative numbers
            long rev = 0;          // Use long to handle overflow during reversal

            // Extract digits from num and build reversed number
            while (num > 0) {
                  int pop = num % 10;    // Extract last digit
                  num = num / 10;        // Remove last digit
                  rev = (rev * 10) + pop; // Append extracted digit reversing order
            }

            // Check if reversed number fits in 32-bit integer range
            if (rev >= Integer.MIN_VALUE && rev <= Integer.MAX_VALUE) {
                  // Return reversed number with original sign
                  return x < 0 ? (int) (-rev) : (int) rev;
            } else {
                  // If overflow occurs, return 0 as per problem constraints
                  return 0;
            }
      }
}
