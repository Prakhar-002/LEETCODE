//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2147

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(corridor)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int numberOfWays(String corridor) {
            /*
             * Count ways to place dividers so each section has exactly 2 'S' seats.
             * DP[3] states track seat counts in current unfinished section.
             */
            final int MOD = (int) 1e9 + 7;

            // zero: ways with 0 seats in current section
            // one: ways with 1 seat in current section
            // two: ways with 2 seats (valid section)
            long zero = 0, one = 0, two = 1;

            for (char c : corridor.toCharArray()) {
                  if (c == 'S') {
                        // Seat advances all previous states
                        zero = one;
                        one = two;
                        two = zero; // Previous zero becomes new two
                  } else {
                        // Plant: only valid sections can continue
                        two = (two + zero) % MOD;
                  }
            }

            return (int) zero;
      }
}
