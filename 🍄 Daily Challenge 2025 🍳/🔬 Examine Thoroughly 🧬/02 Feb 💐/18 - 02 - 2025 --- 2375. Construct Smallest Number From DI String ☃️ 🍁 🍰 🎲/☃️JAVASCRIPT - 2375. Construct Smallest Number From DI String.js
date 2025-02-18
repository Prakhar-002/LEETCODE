//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2375

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(pattern)

//? 🧺 Space complexity ➺ O(n)

var smallestNumber = function (pattern) {
      // String to store the resulting smallest number
      let DINumString = "";

      // Stack to help build the number according to the pattern
      let stack = [];

      // Iterate through the pattern and push numbers into the stack
      for (let num = 0; num <= pattern.length; num++) {
            stack.push(num + 1);  // Push numbers sequentially

            // If we reach the end or encounter 'I', pop from stack and append
            while (stack.length > 0 && (num === pattern.length || pattern[num] === 'I')) {
                  DINumString += stack.pop();
            }
      }

      return DINumString;  // Return the resulting smallest number
}