//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2429

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

var minimizeXor = function (num1, num2) {
      // Step 1: Count the number of 1 bits in num2.
      let bits = 0;
      while (num2 > 0) {
            bits += num2 & 1;  // Increment bits if the least significant bit of num2 is 1.
            num2 >>= 1;         // Shift num2 right to check the next bit.
      }

      // Step 2: Take the highest '1' bits from num1.
      let x = 0;
      for (let i = 31; i >= 0 && bits > 0; i--) {
            if ((num1 & (1 << i)) !== 0) { // Check if the i-th bit of num1 is 1.
                  x |= 1 << i;        // Set the i-th bit of x to 1.
                  bits--;             // Decrease the bit count.
            }
      }

      // Step 3: Take the lowest '0' bits from num1.
      for (let i = 0; i <= 31 && bits > 0; i++) {
            if ((num1 & (1 << i)) === 0) { // Check if the i-th bit of num1 is 0.
                  x |= 1 << i;            // Set the i-th bit of x to 1.
                  bits--;                 // Decrease the bit count.
            }
      }

      // Return the minimized xor value.
      return x;
}