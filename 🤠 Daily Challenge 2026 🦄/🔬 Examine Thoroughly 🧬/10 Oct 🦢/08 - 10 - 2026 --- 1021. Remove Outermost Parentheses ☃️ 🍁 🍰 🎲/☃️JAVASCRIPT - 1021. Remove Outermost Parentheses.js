//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1021

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

/**
 * @param {string} s
 * @return {string}
 */
var removeOuterParentheses = function(s) {
      let open = 0;
      let close = 0;
      let res = "";

      for (let i = 0; i < s.length; i++) {
            const ch = s[i];

            // Skip outermost '(' starting a primitive block
            if (open === close && ch === '(') {
                  open++;
                  continue;
            }

            // Update bracket counts
            if (ch === '(') {
                  open++;
            } else {
                  close++;
            }

            // Skip outermost ')' ending a primitive block
            if (open === close && ch === ')') {
                  continue;
            }

            // Append inner characters
            res += ch;
      }

      return res;
};