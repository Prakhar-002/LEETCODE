//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2429

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public:
            int minimizeXor(int num1, int num2) {
                  // Step 1: Count the number of 1 bits in num2 (i.e., how many '1' bits it has).
                  int bits = 0;
                  while (num2 > 0) {
                        bits += num2 & 1;  // Increment bits if the least significant bit of num2 is 1.
                        num2 >>= 1;         // Shift num2 right to check the next bit.
                  }

                  // Step 2: Take the highest '1' bits from num1 (maximize the number of bits used).
                  int x = 0;
                  for (int i = 31; i >= 0 && bits > 0; i--) {
                        if (num1 & (1 << i)) { // Check if the i-th bit of num1 is 1.
                              x |= 1 << i;        // Set the i-th bit of x to 1.
                              bits--;             // Decrease the bit count.
                        }
                  }

                  // Step 3: Take the lowest '0' bits from num1 (to fill remaining '1' bits from num2).
                  for (int i = 0; i <= 31 && bits > 0; i++) {
                        if (!(num1 & (1 << i))) { // Check if the i-th bit of num1 is 0.
                              x |= 1 << i;            // Set the i-th bit of x to 1.
                              bits--;                 // Decrease the bit count.
                        }
                  }

                  // Return the minimized xor value.
                  return x;
            }
};
