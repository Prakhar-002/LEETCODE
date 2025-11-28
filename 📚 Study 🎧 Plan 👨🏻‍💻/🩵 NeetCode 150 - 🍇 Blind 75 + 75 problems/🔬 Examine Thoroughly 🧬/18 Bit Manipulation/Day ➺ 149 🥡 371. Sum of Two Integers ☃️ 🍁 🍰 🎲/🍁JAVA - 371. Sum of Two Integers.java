//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L6 Q2

//? ⌚ Time complexity ➺ O(log b)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int getSum(int a, int b) {
            int c;

            // Continue until there's no carry left (b == 0)
            while (b != 0) {
                  c = (a & b);        // Carry bits where both a and b have 1s
                  a = a ^ b;          // Sum bits without carry (XOR operation)
                  b = c << 1;         // Carry bits shifted left for next addition
            }

            return a;                // Final sum when no carry remains
      }
}
