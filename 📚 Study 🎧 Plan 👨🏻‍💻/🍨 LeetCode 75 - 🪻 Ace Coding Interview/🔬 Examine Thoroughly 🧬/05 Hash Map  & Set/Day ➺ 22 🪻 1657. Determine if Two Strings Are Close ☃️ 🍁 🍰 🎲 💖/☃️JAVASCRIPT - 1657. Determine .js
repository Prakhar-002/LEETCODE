//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1657

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(word1)

//? 🧺 Space complexity ➺ O(1)    👉🏻  m = len(word2)

var closeStrings = function (word1, word2) {
      // If lengths of the words don't match, they cannot be close
      if (word1.length !== word2.length) {
            return false;
      }

      // Frequency arrays for 26 lowercase English letters
      const freq1 = Array(26).fill(0);
      const freq2 = Array(26).fill(0);

      // Populate the frequency arrays
      for (const char of word1) {
            freq1[char.charCodeAt(0) - 'a'.charCodeAt(0)]++;
      }
      for (const char of word2) {
            freq2[char.charCodeAt(0) - 'a'.charCodeAt(0)]++;
      }

      // Check if both words use the same set of characters
      for (let i = 0; i < 26; i++) {
            if ((freq1[i] > 0) !== (freq2[i] > 0)) {
                  return false;
            }
      }

      // Compare sorted frequency distributions
      freq1.sort((a, b) => a - b);
      freq2.sort((a, b) => a - b);
      return freq1.toString() === freq2.toString();
}