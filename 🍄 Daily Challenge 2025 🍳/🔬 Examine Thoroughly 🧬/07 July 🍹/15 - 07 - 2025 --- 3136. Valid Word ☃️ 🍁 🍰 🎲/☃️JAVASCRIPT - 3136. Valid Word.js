//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3136

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

//? 🧺 Space complexity ➺ O(1)

var isValid = function (word) {
      // If word is shorter than 3, it's automatically invalid
      if (word.length < 3) return false;

      let hasVowel = false;
      let hasConsonant = false;

      // Define vowel and invalid characters
      const vowels = new Set("aeiouAEIOU");
      const invalid = new Set(["@", "#", "$"]);

      for (let ch of word) {
            // If contains any invalid characters
            if (invalid.has(ch)) return false;

            // Check if it's a vowel
            if (vowels.has(ch)) {
                  hasVowel = true;
            }

            // If digit, ignore
            else if (!isNaN(ch) && ch !== ' ') {
                  continue;
            }

            // If it's a letter but not a vowel, it's a consonant
            else if ((/[a-zA-Z]/).test(ch)) {
                  hasConsonant = true;
            }
      }

      // Word is valid only if it has at least one vowel and one consonant
      return hasVowel && hasConsonant;
};
