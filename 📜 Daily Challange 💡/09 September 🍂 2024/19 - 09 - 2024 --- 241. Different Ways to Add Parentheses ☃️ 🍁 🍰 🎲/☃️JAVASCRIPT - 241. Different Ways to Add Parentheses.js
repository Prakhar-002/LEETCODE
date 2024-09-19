//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 241

//? ⌚ Time complexity ➺ O(2^n) 👉🏻  n = len(expression)

//? 🧺 Space complexity ➺ O(2^n)

var diffWaysToCompute = function (expression) {
      // Array to store the computed results
      const outputValues = [];

      // Iterate through each character in the expression
      for (let i = 0; i < expression.length; i++) {
            const ch = expression[i];
            // Check if the current character is an operator
            if (ch === '+' || ch === '-' || ch === '*') {
                  // Recursively compute the left part of the expression
                  const left = diffWaysToCompute(expression.slice(0, i));
                  // Recursively compute the right part of the expression
                  const right = diffWaysToCompute(expression.slice(i + 1));

                  // Combine results from left and right parts based on the operator
                  for (const l of left) {
                        for (const r of right) {
                              // Addition
                              if (ch === '+')
                                    outputValues.push(l + r);
                              // Subtraction
                              else if (ch === '-')
                                    outputValues.push(l - r);
                              // Multiplication
                              else if (ch === '*')
                                    outputValues.push(l * r);
                        }
                  }
            }
      }

      // If no operators found, parse the expression as a single number
      if (outputValues.length === 0) {
            // Convert the string to integer and add it to the output
            outputValues.push(parseInt(expression));
      }

      // Return the array containing all computed results
      return outputValues;
};