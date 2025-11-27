//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 43

//? ⌚ Time complexity ➺ O(1) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var multiply = function (num1, num2) {
      // Parse strings to BigInt for arbitrary-precision arithmetic
      // BigInt handles numbers larger than Number.MAX_SAFE_INTEGER
      const integer1 = BigInt(num1);
      const integer2 = BigInt(num2);

      // Multiply using BigInt multiplication operator
      const product = integer1 * integer2;

      // Convert BigInt result back to string using toString()
      return product.toString();
};