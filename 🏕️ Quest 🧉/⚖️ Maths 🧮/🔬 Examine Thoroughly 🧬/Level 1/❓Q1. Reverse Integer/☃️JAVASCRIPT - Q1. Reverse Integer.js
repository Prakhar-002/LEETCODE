//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L1 Quiz Q1

//? ⌚ Time complexity ➺ O(n)

//? 🧺 Space complexity ➺ O(1)

function reverse(x) {
      let num = Math.abs(x);  // Work with absolute number
      let rev = 0;            // Reversed number

      while (num > 0) {
            let pop = num % 10;   // Extract last digit
            num = Math.floor(num / 10);  // Remove last digit
            rev = rev * 10 + pop; // Append digit at end
      }

      // Check 32-bit integer overflow bounds
      if (rev > 2147483647) return 0;

      return x < 0 ? -rev : rev;  // Return with original sign
}
