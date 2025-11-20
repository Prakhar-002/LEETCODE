//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L7 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int countDigitOne(int n) {
            int count = 0;  // Total count of digit '1'
            long i = 1;     // Current digit place (ones, tens, hundreds, ...)

            // While current digit place is within the number n
            while (i <= n) {
                  long divider = i * 10;
                  // Count complete cycles of '1' at current digit place
                  count += (n / divider) * i;
                  // Add partial count for leftover beyond last full cycle
                  count += Math.min(Math.max(n % divider - i + 1, 0), i);
                  i *= 10;  // Move to next digit place
            }

            return count;  // Return total count of digit '1' from 1 to n
      }
}
