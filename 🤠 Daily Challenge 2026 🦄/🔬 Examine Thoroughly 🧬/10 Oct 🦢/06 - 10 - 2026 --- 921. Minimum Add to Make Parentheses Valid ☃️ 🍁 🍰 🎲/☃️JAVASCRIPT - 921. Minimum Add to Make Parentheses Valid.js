//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 921

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

const minAddToMakeValid = function (s) {
      // Initialize count of open parentheses and minimum additions needed
      let openCount = 0;
      let minAdditions = 0;

      // Iterate through each character in the input string
      for (let ch of s) {
            if (ch === '(') {
                  // Increment open parentheses count
                  openCount++;
            } else if (ch === ')') {
                  if (openCount > 0) {
                        // Matching pair found, decrement open count
                        openCount--;
                  } else {
                        // No matching open parenthesis, increment minimum additions
                        minAdditions++;
                  }
            }
      }

      // Add remaining open parentheses to minimum additions
      minAdditions += openCount;

      // Return the total minimum additions needed
      return minAdditions;
};

//!--------------------------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻 n = len(s)

//? 🧺 Space complexity ➺ O(n)

function minAddToMakeValid(s) {
      // Initialize an empty array to store parentheses
      const stack = [];

      // Iterate through each character in the input string
      for (let ch of s) {
            // Check if stack is not empty and the current character forms a pair with the top of the stack
            if (stack.length && stack[stack.length - 1] === '(' && ch === ')') {
                  // Remove the matching pair by popping the top element
                  stack.pop();
            } else {
                  // Push the current character onto the stack
                  stack.push(ch);
            }
      }

      // Return the size of the remaining stack, which represents the minimum length
      return stack.length;
}

