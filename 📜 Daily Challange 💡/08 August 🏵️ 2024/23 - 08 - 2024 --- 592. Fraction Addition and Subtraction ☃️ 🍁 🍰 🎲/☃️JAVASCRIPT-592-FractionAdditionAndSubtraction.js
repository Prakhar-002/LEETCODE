//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 592

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(expression)

//? 🧺 Space complexity ➺ O(1)

function fractionAddition(expression) {
      // `numerator` at 0 and `denominator` at 1, to keep track of the resulting fraction
      let numerator = 0, denominator = 1;
      let idx = 0, n = expression.length;

      // loop runs as long as `idx` is less than `n`
      while (idx < n) {
            let sign = 1;
            // `expression[idx]` is a '+' or '-'. If it is, it sets a `sign` variable
            if (expression[idx] === '+' || expression[idx] === '-') {
                  // `sign` variable to -1 for '-' or 1 for '+'
                  sign = expression[idx] === '-' ? -1 : 1;
                  // increments `idx` for next char
                  idx++;
            }

            // initializes a variable `num` to 0
            let num = 0;
            // `while` loop to extract consecutive number as numerator
            while (idx < n && !isNaN(expression[idx])) {
                  // builds the number by multiplying the current `num` by 10 and adding the value of the new digit
                  num = num * 10 + parseInt(expression[idx++]);
            }

            // `sign` variable is then applied to adjust it for positive or negative values.
            num *= sign;

            // After parsing the numerator, `idx` is incremented to skip the '/' character
            idx++;

            let den = 0;
            // `while` loop to extract consecutive number as denominator
            while (idx < n && !isNaN(expression[idx])) {
                  // builds the number by multiplying the current `num` by 10 and adding the value of the new digit
                  den = den * 10 + parseInt(expression[idx++]);
            }

            // Ex. 2/3 + 5/7 = ((2 * 7) + (3 * 5)) / (3 * 7)
            numerator = numerator * den + denominator * num;
            denominator = denominator * den;

            // calls the `greatestCommonDivisor` function to find the greatest common divisor
            // of the absolute value of the numerator and the denominator
            const gcdFactor = greatestCommonDivisor(Math.abs(numerator), denominator);

            // The numerator and the denominator are
            // then divided by this gcd value to reduce the fraction to its simplest form
            numerator /= gcdFactor;
            denominator /= gcdFactor;
      }

      return `${numerator}/${denominator}`;
}

// Calculates the greatest common divisor using the Euclidean algorithm.
function greatestCommonDivisor(a, b) {
      // if denominator is 0 then numerator is gcd
      // else denominator will be mod by numerator and then recursively call
      return b === 0 ? a : greatestCommonDivisor(b, a % b);
}

