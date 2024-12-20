//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2390

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

var removeStars = function(s) {
      // Array to simulate stack behavior
      const charStack = [];

      // Iterate over each character in the input string
      for (const ch of s) {
            if (ch === '*') {
                  // Remove the top element for '*'
                  charStack.pop();
            } else {
                  // Add the character to the stack
                  charStack.push(ch);
            }
      }

      // Join the array to form the result string
      return charStack.join('');
}