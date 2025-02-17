//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1079

//? ⌚ Time complexity ➺ O(n ^ n) 👉🏻  n = Unique char in s

//? 🧺 Space complexity ➺ O(n)

var numTilePossibilities = function(tiles) {
      // Count occurrences of each character in the string
      let charCount = new Map();
      for (let ch of tiles) {
            charCount.set(ch, (charCount.get(ch) || 0) + 1);
      }

      return backtrack(charCount);
};

function backtrack(charCount) {
      let letters = 0; // Tracks the number of unique sequences

      // Iterate through all characters in the map
      for (let [ch, count] of charCount.entries()) {
            if (count > 0) { // If there are tiles left of this type
                  charCount.set(ch, count - 1); // Use one tile
                  letters += 1; // Count the current sequence
                  letters += backtrack(charCount); // Recursively explore further
                  charCount.set(ch, count); // Backtrack (restore tile count)
            }
      }
      return letters; // Return total sequences found
}
