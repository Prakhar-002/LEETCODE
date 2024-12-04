//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1455

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of words

//? 🧺 Space complexity ➺ O(n)

var isPrefixOfWord = function (sentence, searchWord) {
      // Split the sentence into words using the split() method
      const words = sentence.split(" ");

      // Iterate through each word with its 1-based index
      for (let index = 0; index < words.length; index++) {
            const word = words[index];

            // Check if the word starts with the searchWord
            if (word.startsWith(searchWord)) {
                  return index + 1; // Return the 1-based index if it's a prefix
            }
      }

      // Return -1 if no word starts with the searchWord
      return -1;
}
