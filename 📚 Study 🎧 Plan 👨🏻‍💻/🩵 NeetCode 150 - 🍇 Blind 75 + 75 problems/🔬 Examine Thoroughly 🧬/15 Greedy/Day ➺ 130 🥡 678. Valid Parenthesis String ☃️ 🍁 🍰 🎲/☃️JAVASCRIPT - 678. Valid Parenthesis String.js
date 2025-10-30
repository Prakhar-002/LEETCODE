//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 678

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

var checkValidString = function (s) {
      let leftMin = 0;  // Minimum possible unmatched '('
      let leftMax = 0;  // Maximum possible unmatched '('

      for (const ch of s) {
            if (ch === '(') {
                  leftMin++;  // '(' increases unmatched '('
                  leftMax++;
            } else if (ch === ')') {
                  leftMin--;  // ')' decreases unmatched '('
                  leftMax--;
            } else { // '*'
                  // '*' can be '(', ')' or empty
                  leftMin--;  // Assume '*' as ')'
                  leftMax++;  // Assume '*' as '('
            }

            // If max unmatched '(' is negative, invalid string
            if (leftMax < 0) return false;

            // Min unmatched '(' can't be negative, clamp to 0
            if (leftMin < 0) leftMin = 0;
      }

      // Valid if minimum unmatched '(' is zero after processing all chars
      return leftMin === 0;
};
