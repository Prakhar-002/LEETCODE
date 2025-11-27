//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 202

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      double myPow(double x, int n) {
            // Handle edge case: n == INT_MIN (abs(n) overflows)
            if (n == INT_MIN) {
                  // Use x^(n+1) to avoid overflow and multiply by x^-1 later
                  return myPow(x, n + 1) / x;
            }

            // Recursive helper function for exponentiation
            function<double(double, int)> pow = [&](double base, int exp) -> double {
                  if (exp == 0) return 1.0;      // Base case: x^0 = 1
                  if (base == 0) return 0.0;     // Base case: 0^n = 0 for n > 0

                  double res = pow(base, exp / 2);  // Recursive call for half exponent

                  if (exp % 2 == 0) {
                        return res * res;
                  } else {
                        return res * res * base;
                  }
            };

            int absN = n < 0 ? -n : n;
            double result = pow(x, absN);          // Calculate power with absolute exponent

            return n >= 0 ? result : 1.0 / result; // Handle negative exponent by reciprocal
      }
};
