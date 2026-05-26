//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3120

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

//? 🧺 Space complexity ➺ O(n)

var numberOfSpecialChars = function(word) {
      // Build a set of all unique characters in the word
      const wordSet = new Set(word);

      let ans = 0;

      for (const ch of word) {
            if (ch === ch.toLowerCase() && ch !== ch.toUpperCase()) {
                  // ch is lowercase — check if uppercase pair exists
                  if (wordSet.has(ch.toUpperCase())) {
                        ans++;
                        // Remove both to avoid counting same pair twice
                        wordSet.delete(ch);
                        wordSet.delete(ch.toUpperCase());
                  }
            } else if (ch === ch.toUpperCase() && ch !== ch.toLowerCase()) {
                  // ch is uppercase — check if lowercase pair exists
                  if (wordSet.has(ch.toLowerCase())) {
                        ans++;
                        // Remove both to avoid counting same pair twice
                        wordSet.delete(ch);
                        wordSet.delete(ch.toLowerCase());
                  }
            }
      }

      return ans;
};