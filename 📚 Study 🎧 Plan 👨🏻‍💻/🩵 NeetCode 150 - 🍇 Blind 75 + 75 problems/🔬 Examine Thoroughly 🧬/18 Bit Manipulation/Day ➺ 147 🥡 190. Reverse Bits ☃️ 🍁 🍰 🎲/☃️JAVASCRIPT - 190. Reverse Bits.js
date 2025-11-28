//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 190

//? ⌚ Time complexity ➺ O(1) 

//? 🧺 Space complexity ➺ O(1)

var reverseBits = function (n) {
      let res = 0; // Result accumulator

      // Process each of 32 bits
      for (let i = 0; i < 32; i++) {
            // Extract i-th bit using right shift and bitwise AND
            let bit = (n >> i) & 1;

            // Position bit at (31-i)th place from MSB using left shift
            res |= (bit << (31 - i));
      }

      return res;
};
