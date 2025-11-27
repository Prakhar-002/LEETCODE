//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 202

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public double myPow(double x, int n) {
            // Helper function for recursive exponentiation
            class PowerCalculator {
                  public double pow(double x, int n) {
                        // Base case: any number^0 = 1
                        if (n == 0) {
                              return 1.0;
                        }

                        // Base case: 0^n = 0 for n > 0
                        if (x == 0) {
                              return 0.0;
                        }

                        // Recursively compute x^(n/2)
                        double res = pow(x, n / 2);

                        // Even exponent: (x^(n/2))^2
                        // Odd exponent: (x^(n/2))^2 * x
                        if (n % 2 == 0) {
                              return res * res;
                        } else {
                              return res * res * x;
                        }
                  }
            }

            PowerCalculator calc = new PowerCalculator();
            // Compute absolute power first
            double result = calc.pow(x, Math.abs(n));

            // Handle negative exponents
            return n >= 0 ? result : 1.0 / result;
      }
}
