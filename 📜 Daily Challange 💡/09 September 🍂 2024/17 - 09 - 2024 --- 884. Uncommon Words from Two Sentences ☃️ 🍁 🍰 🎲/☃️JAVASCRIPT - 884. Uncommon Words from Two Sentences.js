//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 884

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Total No. of Words in s1 + s2

//? 🧺 Space complexity ➺ O(n)

var uncommonFromSentences = (s1, s2) => {
      // Create a Map to store word counts
      const count = new Map();

      // Combine the two input strings and split into words
      const words = (s1 + " " + s2).split(" ");

      // Count occurrences of each word
      for (const word of words) {
            // increments the count of each word in the `count` dict
            count.set(word, (count.get(word) || 0) + 1);
      }

      // Filter words that occur only once
      return Array.from(count.entries())
            .filter(([word, cnt]) => cnt === 1)
            .map(([word]) => word);
};