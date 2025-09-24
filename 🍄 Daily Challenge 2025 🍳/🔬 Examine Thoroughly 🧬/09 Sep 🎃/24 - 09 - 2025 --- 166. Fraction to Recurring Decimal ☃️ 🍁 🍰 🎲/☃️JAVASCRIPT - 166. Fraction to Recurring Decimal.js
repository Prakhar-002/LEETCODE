//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 166

//? ⌚ Time complexity ➺ O(d) 👉🏻  d = denominator

//? 🧺 Space complexity ➺ O(d)

const fractionToDecimal = (numerator, denominator) => {
      if (numerator === 0) return "0";

      const fraction = [];

      // Determine sign (XOR)
      if ((numerator < 0) ^ (denominator < 0)) {
            fraction.push("-");
      }

      // Use absolute values for calculation
      let dividend = Math.abs(numerator);
      const divisor = Math.abs(denominator);

      // Append integer part
      fraction.push(Math.floor(dividend / divisor).toString());

      let remainder = dividend % divisor;
      if (remainder === 0) {
            return fraction.join("");
      }

      fraction.push(".");

      const map = new Map();

      while (remainder !== 0) {
            if (map.has(remainder)) {
                  // Insert '(' at previous index of this remainder
                  fraction.splice(map.get(remainder), 0, "(");
                  fraction.push(")");
                  break;
            }
            map.set(remainder, fraction.length);

            remainder *= 10;
            fraction.push(Math.floor(remainder / divisor).toString());
            remainder %= divisor;
      }

      return fraction.join("");
}
