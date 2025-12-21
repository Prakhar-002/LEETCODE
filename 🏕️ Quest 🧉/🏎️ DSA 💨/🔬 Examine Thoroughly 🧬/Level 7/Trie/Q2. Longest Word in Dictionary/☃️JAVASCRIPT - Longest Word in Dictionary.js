//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L7.4 Q2

// ? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(words)

// ? 🧺 Space complexity ➺ O(n)

function longestWord(words) {
      // Sort words lexicographically so that when lengths tie,
      // the lexicographically smaller word is chosen.
      words.sort();

      // Set to store words that can be built so far.
      const builtWords = new Set();

      let result = "";

      for (const w of words) {
            // If word length is 1, it is always valid.
            // Otherwise, check if its prefix (without last char) exists in builtWords.
            if (w.length === 1 || builtWords.has(w.slice(0, w.length - 1))) {
                  // Update result if this word is longer than the current result.
                  if (w.length > result.length) {
                        result = w;
                  }
                  // Add current word so it can be used to build longer words.
                  builtWords.add(w);
            }
      }

      return result;
}
