//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 150

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var evalRPN = function (tokens) {
      let stack = []; // Stack to store numbers

      // Iterate over each token in the input array
      for (let token of tokens) {
            if (token === "+") {

                  // Addition: Pop the top two numbers and push their sum
                  stack.push(stack.pop() + stack.pop());
            } else if (token === "-") {

                  // Subtraction: Pop the top two numbers and compute (second - first)
                  let a = stack.pop(), b = stack.pop();
                  stack.push(b - a);
            } else if (token === "*") {

                  // Multiplication: Pop the top two numbers and push their product
                  stack.push(stack.pop() * stack.pop());
            } else if (token === "/") {

                  // Division: Pop the top two numbers and compute (second / first)
                  let a = stack.pop(), b = stack.pop();
                  stack.push(Math.trunc(b / a)); // Ensure truncation toward zero
            } else {

                  // If the token is a number, convert to integer and push onto stack
                  stack.push(parseInt(token, 10));
            }
      }

      // The final result will be the only element left in the stack
      return stack.pop();
}