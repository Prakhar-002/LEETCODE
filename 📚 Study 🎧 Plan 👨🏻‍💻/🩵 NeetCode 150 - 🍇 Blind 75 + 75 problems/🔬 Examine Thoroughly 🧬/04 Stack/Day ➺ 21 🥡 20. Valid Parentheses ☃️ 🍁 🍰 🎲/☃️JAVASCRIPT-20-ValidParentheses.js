//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 20

//? ⌚ Time complexity -> O(n) 👉 length of s

//? 🧺 Space complexity -> O(n) 👉 making of stack

var isValid = function (s) {
      const stack = [];

      for (let ch of s) {
            if ('({['.includes(ch)) {
                  stack.push(ch);
            } else {
                  if (stack.length === 0) {
                        return false;
                  }

                  if ((stack[stack.length - 1] === '(' && ch === ')') ||
                        (stack[stack.length - 1] === '{' && ch === '}') ||
                        (stack[stack.length - 1] === '[' && ch === ']')) {
                        stack.pop();
                  } else {
                        return false;
                  }
            }
      }

      return stack.length === 0;
};