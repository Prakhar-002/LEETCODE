//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 592

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(expression)

//? 🧺 Space complexity ➺ O(1)

#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
      string fractionAddition(string expression) {
            // `numerator` at 0 and `denominator` at 1, to keep track of the resulting fraction
            int numerator = 0, denominator = 1;
            int idx = 0, n = expression.length();

            // loop runs as long as `idx` is less than `n`
            while (idx < n) {
                  int sign = 1;
                  // `expression[i]` is a '+' or '-'. If it is, it sets a `sign` variable
                  if (expression[idx] == '+' || expression[idx] == '-') {
                        // `sign` variable to -1 for '-' or 1 for '+'
                        sign = expression[idx] == '-' ? -1 : 1;
                        // increments `i` for next char
                        idx++;
                  }

                  // initializes a variable `num` to 0
                  int num = 0;
                  // `while` loop to extract consecutive number as numerator
                  while (idx < n && isdigit(expression[idx])) {
                        // builds the number by multiplying the current `num` by 10 and adding the value of the new digit
                        num = num * 10 + (expression[idx++] - '0');
                  }

                  // `sign` variable is then applied to adjust it for positive or negative values.
                  num *= sign;

                  // After parsing the numerator, `i` is incremented to skip the '/' character
                  idx++;

                  int den = 0;
                  // `while` loop to extract consecutive number as denominator
                  while (idx < n && isdigit(expression[idx])) {
                        // builds the number by multiplying the current `num` by 10 and adding the value of the new digit
                        den = den * 10 + (expression[idx++] - '0');
                  }

                  // Ex. 2/3 + 5/7 = ((2 * 7) + (3 * 5)) / (3 * 7)
                  numerator = numerator * den + denominator * num;
                  denominator = denominator * den;

                  // calls the `gcd` method to find the greatest common divisor of the absolute value of the numerator and the denominator
                  int gcdFactor = greatestCommonDivisor(abs(numerator), denominator);

                  // The numerator and the denominator are then divided by this gcd value to reduce the fraction to its simplest form
                  numerator /= gcdFactor;
                  denominator /= gcdFactor;
            }

            return to_string(numerator) + "/" + to_string(denominator);
      }

private:
      // calculates the greatest common divisor using the Euclidean algorithm
      int greatestCommonDivisor(int a, int b) {
            // if denominator is 0 then numerator is gcd
            // else denominator will be mod by numerator and then recursively call
            return b == 0 ? a : greatestCommonDivisor(b, a % b);
      }
};

