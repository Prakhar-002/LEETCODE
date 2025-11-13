//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L2 Q1

//? ⌚ Time complexity ➺ O(log n) 

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public boolean isUgly(int n) {
            if (n < 1) {
                  return false; // Ugly numbers are positive integers
            }

            // Remove factors of 2
            while (n % 2 == 0) {
                  n /= 2;
            }

            // Remove factors of 3
            while (n % 3 == 0) {
                  n /= 3;
            }

            // Remove factors of 5
            while (n % 5 == 0) {
                  n /= 5;
            }

            // If after removing all 2,3,5 factors, n is 1 then ugly else not
            return n == 1;
      }
}
