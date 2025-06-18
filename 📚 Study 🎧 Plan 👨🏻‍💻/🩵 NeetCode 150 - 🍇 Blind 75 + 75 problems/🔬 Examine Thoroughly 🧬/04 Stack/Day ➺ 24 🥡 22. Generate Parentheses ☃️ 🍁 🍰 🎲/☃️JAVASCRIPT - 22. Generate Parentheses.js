//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 22

//? ⌚ Time complexity ➺ O(4 ^ n / √n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var generateParenthesis = function (n) {
      const res = [];      // To store all valid combinations
      const stack = [];    // Acts like a stack to build current string

      // Recursive backtracking function
      function backtrack(open, close) {
            // Base case: if both counts reach 'n', valid sequence is found
            if (open === n && close === n) {
                  res.push(stack.join(''));
                  return;
            }

            // Add an open parenthesis if count < n
            if (open < n) {
                  stack.push('(');
                  backtrack(open + 1, close);
                  stack.pop(); // Backtrack
            }

            // Add a close parenthesis if it's valid
            if (close < open) {
                  stack.push(')');
                  backtrack(open, close + 1);
                  stack.pop(); // Backtrack
            }
      }

      backtrack(0, 0); // Start the recursion
      return res;
};
