//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 299

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(secret)

//? 🧺 Space complexity ➺ O(1)

var getHint = function (secret, guess) {
      // Arrays to store counts of digits 0-9 for secret and guess
      const secretCount = new Array(10).fill(0);
      const guessCount = new Array(10).fill(0);

      let bulls = 0;
      let cows = 0;

      // First loop to count bulls and store unmatched digits
      for (let i = 0; i < secret.length; i++) {
            if (secret[i] === guess[i]) {
                  bulls++;  // Exact match
            } else {
                  secretCount[parseInt(secret[i])]++;
                  guessCount[parseInt(guess[i])]++;
            }
      }

      // Count cows by matching minimum of unmatched counts
      for (let i = 0; i < 10; i++) {
            cows += Math.min(secretCount[i], guessCount[i]);
      }

      // Format and return the result
      return `${bulls}A${cows}B`;
};
