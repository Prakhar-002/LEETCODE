//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 20

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

var isValid = function(s) {
      // Stack to track opening brackets
      const stack = [];
      const mapping = {
            '(': ')',
            '{': '}',
            '[': ']'
      };

      for (let i = 0; i < s.length; i++) {
            const ch = s[i];

            // If the character is an opening bracket, push it
            if (ch in mapping) {
                  stack.push(ch);
            } 
            // If it is a closing bracket, compare with the last pushed bracket
            else if (Object.values(mapping).includes(ch)) {
                  if (stack.length === 0 || mapping[stack.pop()] !== ch) {
                        return false;
                  }
            }
      }

      // Valid only if no unmatched opening brackets remain
      return stack.length === 0;
};