//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1249

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var minRemoveToMakeValid = function (s) {

      // ---------- First Pass (Left to Right): remove unmatched ')' ----------
      let open = 0;
      let res = [];

      for (const ch of s) {
            if (ch === '(') {
                  // Track unmatched opening brackets
                  open++;
            } else if (ch === ')') {
                  // Skip this ')' if no unmatched '(' exists
                  if (open === 0)
                        continue;
                  // Otherwise consume one unmatched '('
                  open--;
            }

            res.push(ch);
      }

      // ---------- Second Pass (Right to Left): remove unmatched '(' ----------
      let close = 0;
      let ans = [];

      for (let i = res.length - 1; i >= 0; i--) {
            const ch = res[i];
            if (ch === ')') {
                  // Track unmatched closing brackets
                  close++;
            } else if (ch === '(') {
                  // Skip this '(' if no unmatched ')' exists
                  if (close === 0)
                        continue;
                  // Otherwise consume one unmatched ')'
                  close--;
            }

            ans.push(ch);
      }

      // Reverse since we built the array right to left
      return ans.reverse().join('');
};