//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 678

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

/**
 * @param {string} s
 * @return {boolean}
 */
var checkValidString = function(s) {
      let openCount = 0;
      let closeCount = 0;
      const n = s.length;

      // Left-to-right pass: treat '*' as '('
      for (let i = 0; i < n; i++) {
            const ch = s[i];
            if (ch === '(' || ch === '*') {
                  openCount++;
            } else {
                  openCount--;
            }

            // Excess ')' makes the substring invalid
            if (openCount < 0) {
                  return false;
            }
      }

      // Right-to-left pass: treat '*' as ')'
      for (let i = n - 1; i >= 0; i--) {
            const ch = s[i];
            if (ch === ')' || ch === '*') {
                  closeCount++;
            } else {
                  closeCount--;
            }

            // Excess '(' makes the substring invalid
            if (closeCount < 0) {
                  return false;
            }
      }

      return true;
};