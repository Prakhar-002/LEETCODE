//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2185

//? ⌚ Time complexity ➺ O(n * m) 👉🏻   n = No. of words

//? 🧺 Space complexity ➺ O(1) 👉🏻  m = len(prefix)   

var prefixCount = function (words, prefix) {
      // Initialize a counter to store the number of matching prefixes
      let count = 0;

      // Iterate through each word in the word list
      for (const word of words) {
            // Check if the current word starts with the given prefix
            if (word.startsWith(prefix)) {
                  // Increment the counter if a match is found
                  count++;
            }
      }

      // Return the final count of words matching the prefix
      return count;
}