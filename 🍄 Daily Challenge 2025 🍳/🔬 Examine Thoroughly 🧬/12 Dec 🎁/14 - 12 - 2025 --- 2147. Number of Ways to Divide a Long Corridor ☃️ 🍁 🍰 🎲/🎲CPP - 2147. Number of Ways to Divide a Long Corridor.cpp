//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2147

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(corridor)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int numberOfWays(string corridor) {
            /**
             * DP solution: track #seats in current unfinished section (0,1,2).
             * Each section must have exactly 2 seats between dividers.
             */
            const int MOD = 1e9 + 7;

            // zero: ways ending with completed section (0 seats so far)
            // one: ways with 1 seat pending
            // two: ways with 2 seats (valid, divider possible)
            long long zero = 0, one = 0, two = 1;

            for (char c : corridor) {
                  if (c == 'S') {
                        // New seat → shift all states forward
                        zero = one;
                        one = two;
                        two = zero;
                  }
                  else {
                        // Plant: only add to valid/completed sections
                        two = (two + zero) % MOD;
                  }
            }

            return zero;
      }
};