//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 166

//? ⌚ Time complexity ➺ O(d) 👉🏻  d = denominator

//? 🧺 Space complexity ➺ O(d)

import java.util.HashMap;
import java.util.Map;

class Solution {
      public String fractionToDecimal(int numerator, int denominator) {
            // Handle zero numerator case immediately
            if (numerator == 0)
                  return "0";

            StringBuilder fraction = new StringBuilder();

            // Determine sign, negative if numerator and denominator have opposite signs
            if ((numerator < 0) ^ (denominator < 0))
                  fraction.append("-");

            long dividend = Math.abs((long) numerator);
            long divisor = Math.abs((long) denominator);

            // Append integer part
            fraction.append(dividend / divisor);

            long remainder = dividend % divisor;

            // If no remainder, return integer part
            if (remainder == 0)
                  return fraction.toString();

            // Append decimal point for fractional part
            fraction.append(".");

            // Map to store remainder indices for cycle detection
            Map<Long, Integer> map = new HashMap<>();

            while (remainder != 0) {
                  // If remainder seen before, insert '(' at recorded index and append ')'
                  if (map.containsKey(remainder)) {
                        fraction.insert(map.get(remainder), "(");
                        fraction.append(")");
                        break;
                  }

                  // Record current remainder's index in fraction string
                  map.put(remainder, fraction.length());

                  remainder *= 10;
                  fraction.append(remainder / divisor);
                  remainder %= divisor;
            }

            return fraction.toString();
      }
}
