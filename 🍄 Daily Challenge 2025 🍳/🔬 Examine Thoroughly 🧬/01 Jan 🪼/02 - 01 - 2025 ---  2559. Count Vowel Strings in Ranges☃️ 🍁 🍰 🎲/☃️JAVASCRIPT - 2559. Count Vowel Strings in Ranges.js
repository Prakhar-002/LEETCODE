//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2559

//? ⌚ Time complexity ➺ O(n + q) 👉🏻  n = len(words)

//? 🧺 Space complexity ➺ O(n)    👉🏻  q = len(queries) 

var vowelStrings = function (words, queries) {
      // Define vowels for quick lookup
      const vowels = "aeiou";

      // Initialize a prefix sum array to store cumulative counts of vowel strings
      const vowels_words = Array(words.length + 1).fill(0);

      // Build the prefix sum array
      for (let i = 0; i < words.length; i++) {
            // Check if the current word starts and ends with a vowel
            if (vowels.includes(words[i][0]) && vowels.includes(words[i][words[i].length - 1])) {
                  // Increment the count at the current index
                  vowels_words[i + 1] = vowels_words[i] + 1;
            } else {
                  // Carry forward the previous count
                  vowels_words[i + 1] = vowels_words[i];
            }
      }

      // Initialize the result array to store query results
      const ans = [];

      // Process each query
      for (const [st, end] of queries) {
            // Calculate the count of vowel strings in the range [st, end]
            ans.push(vowels_words[end + 1] - vowels_words[st]);
      }

      // Return the results for all queries
      return ans;
}