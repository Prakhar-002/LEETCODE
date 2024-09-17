//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2085

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Total no of words 

//? 🧺 Space complexity ➺ O(n)

var countWords = function (words1, words2) {
      // Create objects to count occurrences of words
      const wordsOne = {};
      const wordsTwo = {};

      // Count occurrences of words in words1
      for (const word of words1) {
            wordsOne[word] = (wordsOne[word] || 0) + 1;
      }

      // Count occurrences of words in words2
      for (const word of words2) {
            wordsTwo[word] = (wordsTwo[word] || 0) + 1;
      }

      // Count words that appear exactly once in both lists
      let res = 0;

      // Check each word in words1
      for (const word of words1) {
            // If word appears exactly once in both lists
            if (wordsOne[word] === 1 && wordsTwo[word] === 1) {
                  res += 1;
            }
      }

      // Return the result
      return res;
}