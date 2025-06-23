//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2081

//? ⌚ Time complexity ➺ O(n ^ 5) 👉🏻  n = 10

//? 🧺 Space complexity ➺ O(1)

// Main function to calculate the sum of the first `n` k-mirror numbers
var kMirror = function (k, n) {
      const digit = new Array(100);    // Array to hold digits when converting to base-k
      let left = 1;                    // Starting boundary of the current number range
      let count = 0;                   // Number of valid k-mirror numbers found so far
      let ans = 0n;                    // Result sum stored as BigInt

      // Keep finding palindromes until we find `n` valid k-mirror numbers
      while (count < n) {
            const right = left * 10;   // Define the end boundary of current number range

            // Try both odd (op = 0) and even (op = 1) length palindromes
            for (let op = 0; op < 2; ++op) {
                  // Build base-10 palindromes
                  for (let i = left; i < right && count < n; ++i) {
                        let combined = BigInt(i);  // Start building full palindrome
                        let x = (op === 0) ? Math.floor(i / 10) : i;

                        // Reverse part of `x` and append to `combined` to form a full palindrome
                        while (x > 0) {
                              combined = combined * 10n + BigInt(x % 10);
                              x = Math.floor(x / 10);
                        }

                        // If the number is also a palindrome in base-k, accept it
                        if (isPalindrome(combined, k, digit)) {
                              ++count;
                              ans += combined;
                        }
                  }
            }

            left = right;  // Move to next range (e.g., 1–9 → 10–99)
      }

      return Number(ans);  // Convert BigInt result back to number before returning
};

// Helper function to check if a number is a palindrome in base-k
function isPalindrome(x, k, digit) {
      let length = -1;

      // Convert number x to base-k and store each digit
      while (x > 0n) {
            ++length;
            digit[length] = Number(x % BigInt(k));
            x = x / BigInt(k);
      }

      // Check if digits array is a palindrome
      for (let i = 0, j = length; i < j; ++i, --j) {
            if (digit[i] !== digit[j]) {
                  return false;
            }
      }

      return true;
}
