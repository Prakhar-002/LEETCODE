//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1408

//? ⌚ Time complexity ➺ O(n^2 * m) 👉🏻  n = len(words)

//? 🧺 Space complexity ➺ O(n)      👉🏻  m = avg(len(word))

var stringMatching = function (words) {
      // Initialize a set to store substrings that match the criteria
      const matchingWords = new Set();

      // Iterate through each word in the list
      for (const word of words) {
            // Compare the current word with every other word in the list
            for (const potentialString of words) {
                  // Check if the potential substring is part of the current word
                  // and ensure it's not the same as the current word
                  if (word.includes(potentialString) && word !== potentialString) {
                        matchingWords.add(potentialString);
                  }
            }
      }

      // Convert the set to an array before returning
      return Array.from(matchingWords);
}