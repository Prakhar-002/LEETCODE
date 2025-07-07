//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 383

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(ransomNote)

//? 🧺 Space complexity ➺ O(1)

var canConstruct = function (ransomNote, magazine) {
      const freq = new Array(26).fill(0); // Frequency of each letter

      // Count characters in magazine
      for (let ch of magazine) {
            freq[ch.charCodeAt(0) - 97]++;
      }

      // Check each character in ransomNote
      for (let ch of ransomNote) {
            const idx = ch.charCodeAt(0) - 97;
            if (freq[idx] === 0) {
                  return false; // Not enough characters
            }
            freq[idx]--; // Use character
      }

      return true; // All characters were found
};
