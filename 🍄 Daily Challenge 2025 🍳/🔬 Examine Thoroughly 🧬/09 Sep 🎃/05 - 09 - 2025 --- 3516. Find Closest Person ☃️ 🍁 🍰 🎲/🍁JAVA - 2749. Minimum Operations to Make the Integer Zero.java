//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2749

//? ⌚ Time complexity ➺ O(k)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int makeTheIntegerZero(int num1, int num2) {
            int k = 1;
            // ------ Try increasing k stepwise; each k is an attempt
            while (true) {
                  // ------ Calculate what remains after subtracting k * num2
                  long x = (long) num1 - (long) num2 * k;

                  // ------ If x is less than k, it's impossible to split x into k positive powers
                  // of two
                  if (x < k) {
                        return -1;
                  }

                  // ------ If k >= bit count (number of set bits), it's possible
                  // Long.bitCount(x) returns number of '1's in x's binary representation
                  if (k >= Long.bitCount(x)) {
                        return k;
                  }

                  // ------ Try next k
                  k++;
            }
      }
}
