//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2696

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

var minLength = function (s) {
      // Initialize an empty array to store characters
      let stack = [];

      // Iterate through each character in the input string
      for (let ch of s) {
            // Check if stack is not empty and the current character forms a pair with the top of the stack
            if (stack.length && ((stack[stack.length - 1] === 'A' && ch === 'B') 
                  || 
            (stack[stack.length - 1] === 'C' && ch === 'D'))) {
                  // Remove the matching pair by popping the top element
                  stack.pop();
            } else {
                  // Push the current character onto the stack
                  stack.push(ch);
            }
      }

      // Return the size of the remaining stack, which represents the minimum length
      return stack.length;
};