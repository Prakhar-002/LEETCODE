//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2063

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

// ? 🧺 Space complexity ➺ O(1)

var countVowels = function (word) {
      let totalVowelCount = 0; // Stores the total contribution of vowels
      const vowels = new Set(['a', 'e', 'i', 'o', 'u']); // Set of vowel characters

      // Iterate through each character in the word
      for (let i = 0; i < word.length; i++) {
            if (vowels.has(word[i])) { // Check if the character is a vowel
                  // Calculate its contribution based on the formula
                  totalVowelCount += (i + 1) * (word.length - i);
            }
      }

      return totalVowelCount; // Return the total count of vowels in substrings
};
