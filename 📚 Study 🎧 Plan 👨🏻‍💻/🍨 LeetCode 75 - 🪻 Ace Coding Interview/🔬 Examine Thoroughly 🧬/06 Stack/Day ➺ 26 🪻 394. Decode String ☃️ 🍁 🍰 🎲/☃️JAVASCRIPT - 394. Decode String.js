//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 394

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

var decodeString = function (s) {
      // Initialize a stack to help with decoding nested patterns
      const stack = [];

      for (let i = 0; i < s.length; i++) {
            if (s[i] !== ']') {
                  // Push characters onto the stack until a closing bracket is encountered
                  stack.push(s[i]);
            } else {
                  // Start constructing the substring inside the brackets
                  let substr = "";
                  while (stack[stack.length - 1] !== '[') {
                        // Build the substring in reverse order by popping from the stack
                        substr = stack.pop() + substr;
                  }

                  // Pop the '[' character from the stack
                  stack.pop();

                  // Retrieve the multiplier (digits preceding the brackets)
                  let key = "";
                  while (stack.length > 0 && /\d/.test(stack[stack.length - 1])) {
                        // Build the multiplier in reverse order
                        key = stack.pop() + key;
                  }

                  // Repeat the substring and push it back onto the stack
                  stack.push(substr.repeat(Number(key)));
            }
      }

      // Join all elements in the stack to form the final decoded string
      return stack.join('');
}