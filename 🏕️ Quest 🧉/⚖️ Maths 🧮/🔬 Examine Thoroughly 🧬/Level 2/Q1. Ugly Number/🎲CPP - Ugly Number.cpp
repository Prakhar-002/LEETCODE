//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L2 Q1

//? ⌚ Time complexity ➺ O(log n)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      bool isUgly(int n) {
            if (n < 1) {
                  return false;  // Only positive numbers can be ugly
            }

            // Remove all factors of 2
            while (n % 2 == 0) {
                  n /= 2;
            }

            // Remove all factors of 3
            while (n % 3 == 0) {
                  n /= 3;
            }

            // Remove all factors of 5
            while (n % 5 == 0) {
                  n /= 5;
            }

            // Return true if reduced to 1, else false
            return n == 1;
      }
};
