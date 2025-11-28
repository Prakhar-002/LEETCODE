//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.3 Q1

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(1)

var detectCapitalUse = function (word) {
      let cap = 0;          // Counter for uppercase letters
      let small = 0;        // Counter for lowercase letters

      // Traverse the word letter by letter
      for (let ch of word) {
            if (ch === ch.toUpperCase()) {
                  cap++;     // Increment uppercase count if character is uppercase
            } else {
                  small++;   // Increment lowercase count otherwise
            }
      }

      // Check if exactly one uppercase letter which is the first letter
      if (cap === 1 && word[0] === word[0].toUpperCase()) {
            return true;
      }

      // Check if all letters are uppercase or all letters are lowercase
      if (cap === word.length || small === word.length) {
            return true;
      }

      // Otherwise, capitalization usage is invalid
      return false;
};
