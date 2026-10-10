//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 301

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

/**
 * @param {string} s
 * @return {string[]}
 */
var removeInvalidParentheses = function(s) {
      // Set to hold unique maximum-length valid results
      const st = new Set();
      const n = s.length;
      let maxLen = 0;

      function solve(i, curr, count) {
            // Prune branch if unmatched ')' exceeds '('
            if (count < 0) {
                  return;
            }

            // Processed entire string
            if (i === n) {
                  if (count === 0) {
                        const currLen = curr.length;

                        // Found a longer valid string; clear previous entries
                        if (currLen > maxLen) {
                              maxLen = currLen;
                              st.clear();
                        }

                        // Keep strings matching the maximal length
                        if (currLen === maxLen) {
                              st.add(curr.join(""));
                        }
                  }
                  return;
            }

            const c = s[i];

            // Always retain non-parentheses characters
            if (c !== '(' && c !== ')') {
                  curr.push(c);
                  solve(i + 1, curr, count);
                  curr.pop();
                  return;
            }

            // OPTION 1: Keep the current parenthesis
            curr.push(c);
            if (c === '(') {
                  solve(i + 1, curr, count + 1);
            } else {
                  solve(i + 1, curr, count - 1);
            }
            curr.pop();

            // OPTION 2: Remove the current parenthesis
            solve(i + 1, curr, count);
      }

      solve(0, [], 0);
      return Array.from(st);
};