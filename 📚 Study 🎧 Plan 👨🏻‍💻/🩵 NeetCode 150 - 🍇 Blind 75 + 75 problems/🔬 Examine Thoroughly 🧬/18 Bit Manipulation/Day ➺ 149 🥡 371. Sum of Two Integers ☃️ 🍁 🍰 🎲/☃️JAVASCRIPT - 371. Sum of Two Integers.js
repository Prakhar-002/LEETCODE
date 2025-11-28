//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L6 Q2

//? ⌚ Time complexity ➺ O(log b)

//? 🧺 Space complexity ➺ O(1)

function getSum(a, b) {
      let carry;
      // Loop until there is no carry
      while (b !== 0) {
            carry = (a & b);       // Calculate carry bits
            a = a ^ b;             // Add bits without carry (XOR)
            b = carry << 1;        // Shift carry to left for next addition
      }

      return a;                   // Final sum
}