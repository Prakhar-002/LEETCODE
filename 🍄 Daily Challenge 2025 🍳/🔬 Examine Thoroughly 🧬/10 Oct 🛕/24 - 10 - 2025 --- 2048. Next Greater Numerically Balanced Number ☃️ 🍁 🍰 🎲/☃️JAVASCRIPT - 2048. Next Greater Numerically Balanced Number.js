//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2048

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = C - n

//? 🧺 Space complexity ➺ O(1)

/**
 * Determines if a given number `x` is numerically balanced.
 * A numerically balanced (or beautiful) number is one where
 * each digit `d` appears exactly `d` times.
 * 
 * Examples:
 *   - 22     → digit 2 appears 2 times ✔️
 *   - 122333 → 1 appears 1×, 2 appears 2×, 3 appears 3× ✔️
 *   - 1234   → invalid ✖ (each digit appears only once)
 * 
 * @param {number} x - The number to check.
 * @returns {boolean} - True if the number is balanced, else false.
 */
function isBalance(x) {
      const count = new Array(10).fill(0); // Frequency array for digits 0–9

      // Count each digit’s occurrences
      while (x > 0) {
            const digit = x % 10;
            count[digit]++;
            x = Math.floor(x / 10); // Remove last digit
      }

      // Validate numeric balance condition:
      // For any non-zero digit 'd', its frequency must equal 'd'
      for (let d = 1; d < 10; d++) {
            if (count[d] > 0 && count[d] !== d) {
                  return false;
            }
      }

      return true; // All digits pass the numeric balance check
}

/**
 * Finds the next numerically balanced number greater than 'n'.
 * 
 * Algorithm:
 *   - Starting from n + 1, test each number using isBalance().
 *   - The first number that satisfies the property is returned.
 *   - The search limit (1,224,444) is chosen as this covers all
 *     possible numerically balanced combinations (e.g., 1, 22, 122333, …).
 * 
 * @param {number} n - The input number to find next balanced number for.
 * @returns {number} - The next greater numerically balanced number.
 */
var nextBeautifulNumber = function (n) {
      // Sequentially test all numbers after n until a balanced one is found
      for (let i = n + 1; i <= 1224444; i++) {
            if (isBalance(i)) {
                  return i; // Return immediately upon finding valid number
            }
      }
      return -1; // Theoretically unreachable within defined constraints
};
