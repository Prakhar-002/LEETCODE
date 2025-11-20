//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L7 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

function countDigitOne(n) {
      let count = 0;   // Total number of digit '1's
      let i = 1;       // Current digit place

      // Iterate over every digit place until i exceeds n
      while (i <= n) {
            let divider = i * 10;
            // Add count of full cycles of 1 in current digit place
            count += Math.floor(n / divider) * i;
            // Add count of remaining part
            count += Math.min(Math.max(n % divider - i + 1, 0), i);
            i *= 10;
      }

      return count;    // Total count of digit '1's from 1 to n
}
