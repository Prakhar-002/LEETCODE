//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2197

//? ⌚ Time complexity ➺ O(n log m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var replaceNonCoprimes = function (nums) {
      const stack = []; // Stack to store processed numbers

      // Helper function to compute the GCD (Greatest Common Divisor) using Euclidean algorithm
      const gcd = (a, b) => {
            while (b !== 0) {
                  const t = b;  // Temporary variable to hold current b
                  b = a % b;    // Update b to remainder of a divided by b
                  a = t;        // Assign old b to a
            }
            return a;        // Return GCD
      };

      // Iterate through each number in the input array
      for (let num of nums) {
            // While there is a number on the stack, check if the top and current number are non-coprime
            while (stack.length > 0) {
                  const top = stack[stack.length - 1];  // Access the top of stack
                  const g = gcd(top, num);                // Compute GCD of top and current number

                  if (g === 1) {                         // If coprime (GCD == 1), stop merging
                        break;
                  }

                  stack.pop();                          // Remove the top element from the stack

                  // Merge top and current number by their LCM (Least Common Multiple)
                  num = (top / g) * num;
            }

            stack.push(num);                         // Push the merged/current number into the stack
      }

      return stack;                               // Return the final processed stack
};
