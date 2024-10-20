//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1106

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(expression)

//? 🧺 Space complexity ➺ O(n)

var parseBoolExpr = (expression) => {
      // Initialize an index pointer 'i' to track position in the string
      let i = 0;

      // Recursive helper function to evaluate boolean expressions
      const solveBoolExpr = () => {
            // Get the current character from the expression
            let ch = expression[i];

            // Move the index pointer to the next character
            i++;

            // Case 1: If the character is 't' (true), return true
            if (ch === 't') return true;

            // Case 2: If the character is 'f' (false), return false
            if (ch === 'f') return false;

            // Case 3: If the character is '!', it's a NOT operation
            if (ch === '!') {
                  // Skip the open parenthesis and solve the next sub-expression
                  i++;
                  // Negate the result of the sub-expression
                  let boolRes = !solveBoolExpr();
                  // Skip the closing parenthesis
                  i++;
                  return boolRes;
            }

            // Case 4: Handle '&' (AND) or '|' (OR) operations
            let children = [];  // Array to hold the results of sub-expressions
            i++;  // Skip the opening parenthesis

            // Loop through the sub-expressions until a closing parenthesis is found
            while (expression[i] !== ')') {
                  // If the current character is not a comma, solve the sub-expression
                  if (expression[i] !== ',') {
                        children.push(solveBoolExpr());
                  } else {
                        // Skip commas between sub-expressions
                        i++;
                  }
            }

            // Skip the closing parenthesis
            i++;

            // If it's an AND operation, return true only if all children are true
            if (ch === '&') {
                  return children.every(Boolean);
            }

            // If it's an OR operation, return true if at least one child is true
            if (ch === '|') {
                  return children.some(Boolean);
            }
      };

      // Start solving the boolean expression
      return solveBoolExpr();
};

