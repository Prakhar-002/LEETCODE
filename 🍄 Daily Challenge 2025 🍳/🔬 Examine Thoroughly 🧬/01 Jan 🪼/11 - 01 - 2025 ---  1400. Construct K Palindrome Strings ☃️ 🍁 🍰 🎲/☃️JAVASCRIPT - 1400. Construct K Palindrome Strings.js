//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1400

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

var canConstruct = function (s, k) {
      // If the string length is less than k, constructing k palindromes is impossible.
      if (s.length < k) {
            return false;
      }

      // If the string length equals k, each character can form a single-character palindrome.
      if (s.length === k) {
            return true;
      }

      // Count the frequency of each character in the string.
      const charCount = Array(26).fill(0);
      for (const ch of s) {
            charCount[ch.charCodeAt(0) - 'a'.charCodeAt(0)]++;
      }

      // Count the number of characters with odd frequencies.
      const oddCount = charCount.reduce((count, freq) => count + (freq % 2 !== 0 ? 1 : 0), 0);

      // We can construct k palindromes if the odd frequencies are less than or equal to k.
      return oddCount <= k;
}