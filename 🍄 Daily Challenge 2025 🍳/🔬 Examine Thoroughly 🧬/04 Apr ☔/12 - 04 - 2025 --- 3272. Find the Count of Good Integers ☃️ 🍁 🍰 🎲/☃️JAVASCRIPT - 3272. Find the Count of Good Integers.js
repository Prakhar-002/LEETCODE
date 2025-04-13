//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3272

//? ⌚ Time complexity ➺ O(n log n * (10 ^ m)) 👉🏻  m = (n + 1) / 2

//? 🧺 Space complexity ➺ O(n * (10 ^ m))

var countGoodIntegers = function (n, k) {
      const uniqueDigitPatterns = new Set();  // To store unique digit combinations

      const halfLengthBase = Math.pow(10, Math.floor((n - 1) / 2));  // Half-length base
      const skipMiddle = n % 2 === 1;  // True if n is odd

      for (let half = halfLengthBase; half < halfLengthBase * 10; half++) {
            const halfStr = half.toString();  // Convert half to string
            const rev = [...halfStr].reverse().join("");  // Reverse half string

            let fullPalindromeStr = skipMiddle
                  ? halfStr + rev.slice(1)  // Skip middle digit if odd
                  : halfStr + rev;  // Otherwise mirror completely

            const fullPalindrome = parseInt(fullPalindromeStr, 10);  // Convert to number

            if (fullPalindrome % k === 0) {
                  const sortedStr = [...fullPalindromeStr].sort().join("");  // Sort digits
                  uniqueDigitPatterns.add(sortedStr);  // Add to set
            }
      }

      const factorials = [1];  // Precompute factorials
      for (let i = 1; i <= n; i++) {
            factorials[i] = factorials[i - 1] * i;
      }

      let totalCount = 0;  // Final count

      for (const pattern of uniqueDigitPatterns) {
            const freq = Array(10).fill(0);  // Frequency of digits

            for (const digit of pattern) {
                  freq[parseInt(digit, 10)]++;  // Count digits
            }

            let permutations = (n - freq[0]) * factorials[n - 1];  // Avoid leading 0s

            for (const f of freq) {
                  if (f > 1) permutations /= factorials[f];  // Handle repeated digits
            }

            totalCount += permutations;  // Add to result
      }

      return totalCount;  // Return final result
}