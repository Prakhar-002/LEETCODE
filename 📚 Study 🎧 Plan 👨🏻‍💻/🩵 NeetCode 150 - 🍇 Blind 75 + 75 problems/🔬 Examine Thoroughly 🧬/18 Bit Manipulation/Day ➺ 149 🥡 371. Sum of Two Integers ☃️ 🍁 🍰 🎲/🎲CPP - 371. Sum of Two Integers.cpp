//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L6 Q2

//? ⌚ Time complexity ➺ O(log b)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int getSum(int a, int b) {
            int carry;
            // Iterate until carry is zero
            while (b != 0) {
                  carry = a & b;       // Calculate carry bits
                  a = a ^ b;           // Sum bits without carry
                  b = carry << 1;      // Shift carry bits for next iteration
            }

            return a;                 // Result after all carries added
      }
};
