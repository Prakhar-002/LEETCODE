//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L1 Quiz Q1

//? ⌚ Time complexity ➺ O(n)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int reverse(int x) {
            int num = abs(x);    // Absolute value of input
            long long rev = 0;   // Use long long to detect overflow

            while (num > 0) {
                  int pop = num % 10;        // Extract last digit
                  num /= 10;                 // Remove last digit
                  rev = rev * 10 + pop;      // Append digit to reversed number
            }

            // Check for 32-bit overflow
            if (rev > INT_MAX) return 0;

            return x < 0 ? -rev : rev;  // Restore sign and return
      }
};
