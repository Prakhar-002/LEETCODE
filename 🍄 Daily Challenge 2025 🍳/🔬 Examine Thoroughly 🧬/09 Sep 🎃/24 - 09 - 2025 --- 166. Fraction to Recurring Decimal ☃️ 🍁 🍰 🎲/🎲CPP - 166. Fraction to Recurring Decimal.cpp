//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 166

//? ⌚ Time complexity ➺ O(d) 👉🏻  d = denominator

//? 🧺 Space complexity ➺ O(d)

#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
      string fractionToDecimal(int numerator, int denominator) {
            // Handle zero numerator
            if (numerator == 0) return "0";

            string fraction;

            // Determine sign using XOR
            bool negative = (numerator < 0) ^ (denominator < 0);
            if (negative) fraction += "-";

            // Use long long to avoid overflow
            long long dividend = abs((long long)numerator);
            long long divisor = abs((long long)denominator);

            // Append integer part
            fraction += to_string(dividend / divisor);

            long long remainder = dividend % divisor;
            if (remainder == 0) return fraction;

            fraction += ".";

            // Map remainder -> position in fraction string for cycle detection
            unordered_map<long long, int> mapIndex;

            while (remainder != 0) {
                  if (mapIndex.count(remainder)) {
                        // Insert '(' at first appearance index, append ')'
                        fraction.insert(mapIndex[remainder], "(");
                        fraction += ")";
                        break;
                  }
                  // Record the position of this remainder
                  mapIndex[remainder] = fraction.size();

                  remainder *= 10;
                  fraction += to_string(remainder / divisor);
                  remainder %= divisor;
            }

            return fraction;
      }
};
