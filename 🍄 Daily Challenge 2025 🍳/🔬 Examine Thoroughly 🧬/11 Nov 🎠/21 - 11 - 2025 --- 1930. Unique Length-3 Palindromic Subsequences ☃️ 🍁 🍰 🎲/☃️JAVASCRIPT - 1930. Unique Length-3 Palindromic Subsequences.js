//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1930

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

// ? 🧺 Space complexity ➺ O(1)

var countPalindromicSubsequence = function (s) {
      // Create a set of all unique letters in the string `s`
      const letters = new Set(s);

      // Initialize the answer variable to count unique palindromic subsequences
      let palindromes = 0;

      // Iterate over each unique letter in the string
      for (const letter of letters) {
            // Find the first and last occurrence of the current letter in the string
            const i = s.indexOf(letter);
            const j = s.lastIndexOf(letter);

            // Create a set to store unique characters between the first and last occurrence
            const between = new Set();

            // Iterate over characters between the first and last occurrence of the letter
            for (let k = i + 1; k < j; k++) {
                  // Add each character to the set to ensure uniqueness
                  between.add(s[k]);
            }

            // Add the size of the `between` set to the answer, 
            // as it represents the number of unique palindromic subsequences
            palindromes += between.size;
      }

      // Return the total count of unique palindromic subsequences
      return palindromes;
}