//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3223

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

var minimumLength = function (s) {
      // Create an array to count occurrences of each letter in the string
      const charFreq = Array(26).fill(0);

      // Iterate over each character in the string
      for (const char of s) {
            // Increment the count for the corresponding character
            charFreq[char.charCodeAt(0) - 'a'.charCodeAt(0)]++;
      }

      // Initialize the result variable to store the minimum length
      let minLength = 0;

      // Iterate through the frequency counts
      for (const freq of charFreq) {
            if (freq > 0) { // If the character appears in the string
                  // Add 1 if frequency is odd, otherwise add 2
                  minLength += (freq % 2 === 1) ? 1 : 2;
            }
      }

      // Return the calculated minimum length
      return minLength;
}