//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 20

//? ⌚ Time complexity -> O(n) 👉 length of s

//? 🧺 Space complexity -> O(n) 👉 making of stack

var isValid = function (s) {
      // Stack to keep track of opening brackets
      const stack = [];

      // Map each opening bracket to its corresponding closing bracket
      const mapping = {
            '(': ')',
            '{': '}',
            '[': ']'
      };

      for (const ch of s) {
            // If current char is an opening bracket, push onto stack
            if (mapping[ch]) {
                  stack.push(ch);
            }
            // If current char is a closing bracket
            else {
                  // Stack must be non-empty and top must match current closing bracket
                  if (stack.length === 0 || mapping[stack.pop()] !== ch) {
                        return false;
                  }
            }
      }

      // Valid only if all opening brackets were matched and closed
      return stack.length === 0;
};