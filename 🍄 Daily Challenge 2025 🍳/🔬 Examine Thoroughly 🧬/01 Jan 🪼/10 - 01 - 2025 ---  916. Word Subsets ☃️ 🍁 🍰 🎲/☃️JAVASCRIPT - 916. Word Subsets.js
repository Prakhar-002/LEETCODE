//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 916

//? ⌚ Time complexity ➺ O(m * p + n * q) 

//*   👉🏻  n = len(word1) p = avg(len(word in word1))
//*   👉🏻  m = len(word2) q = avg(len(word in word2))

//? 🧺 Space complexity ➺ O(1)   

// Method to count the frequency of each letter in a word.
// Returns an array of size 26, where each index corresponds
// to the count of letters 'a' to 'z'.
var wordsLetterCount = function (word) {
      const letters = Array(26).fill(0); // Initialize array with zeros.
      for (const letter of word) {
            // Increment the count for the corresponding letter.
            letters[letter.charCodeAt(0) - 'a'.charCodeAt(0)]++;
      }
      return letters;
}

// Method to find all universal words in word1 that satisfy the conditions
// of being a superset for each word in word2.
var wordSubsets = function (word1, word2) {
      const word2MaxCnt = Array(26).fill(0); // Maximum letter frequencies for word2.

      // Update maximum frequency counts for each letter in word2.
      for (const word of word2) {
            const count = wordsLetterCount(word);
            for (let i = 0; i < 26; i++) {
                  word2MaxCnt[i] = Math.max(word2MaxCnt[i], count[i]);
            }
      }

      const universal = []; // List to store universal words.

      // Check each word in word1 against the conditions.
      for (const word of word1) {
            const count = wordsLetterCount(word);

            // Ensure the word meets all frequency requirements.
            if (word2MaxCnt.every((x, i) => count[i] >= x)) {
                  universal.push(word);
            }
      }

      return universal;
}

