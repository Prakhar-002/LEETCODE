//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3174

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var clearDigits = function (s) {
      // Stack to store non-digit characters
      let stack = [];

      // Iterate through each character in the string
      for (let ch of s) {
            // If the character is a digit, remove the last added character from the stack
            if (!isNaN(ch)) {
                  if (stack.length > 0) {
                        stack.pop();
                  }
            } else {
                  // If it's not a digit, add it to the stack
                  stack.push(ch);
            }
      }

      // Convert stack contents to a string
      return stack.join("");
}