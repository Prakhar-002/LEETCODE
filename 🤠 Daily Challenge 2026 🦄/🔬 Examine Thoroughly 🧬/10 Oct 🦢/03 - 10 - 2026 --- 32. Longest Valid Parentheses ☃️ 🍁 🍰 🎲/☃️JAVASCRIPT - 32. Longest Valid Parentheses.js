//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 22

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var longestValidParentheses = function(s) {
      const n = s.length;
      let open = 0;
      let close = 0;
      let result = 0;

      // Pass 1: Scan left to right
      for (let i = 0; i < n; i++) {
            if (s[i] === '(') {
                  open++;
            } else {
                  close++;
            }

            // Valid balanced substring
            if (open === close) {
                  result = Math.max(result, open + close);
            } 
            // Invalidate if closing brackets exceed opening brackets
            else if (close > open) {
                  open = 0;
                  close = 0;
            }
      }

      // Reset counters
      open = 0;
      close = 0;

      // Pass 2: Scan right to left
      for (let i = n - 1; i >= 0; i--) {
            if (s[i] === '(') {
                  open++;
            } else {
                  close++;
            }

            // Valid balanced substring
            if (open === close) {
                  result = Math.max(result, open + close);
            } 
            // Invalidate if opening brackets exceed closing brackets
            else if (open > close) {
                  open = 0;
                  close = 0;
            }
      }

      return result;
};