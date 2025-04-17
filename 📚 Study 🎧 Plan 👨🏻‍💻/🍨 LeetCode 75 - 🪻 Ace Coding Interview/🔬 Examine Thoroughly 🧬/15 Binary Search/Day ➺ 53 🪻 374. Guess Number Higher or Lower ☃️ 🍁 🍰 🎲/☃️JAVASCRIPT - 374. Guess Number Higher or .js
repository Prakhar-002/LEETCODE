//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 374

//? ⌚ Time complexity ➺ O(log n)

//? 🧺 Space complexity ➺ O(1)

// guess API is defined and available in GuessGame
var guessNumber = function (n) {
      let left = 1;              // Initialize the search range start
      let right = n;             // Initialize the search range end

      while (left <= right) {    // Continue searching while valid range exists
            let mid = Math.floor(left + (right - left) / 2); // Compute middle point safely
            let result = guess(mid);  // Call guess API

            if (result === 0) {
                  return mid;    // Correct number guessed
            } else if (result < 0) {
                  right = mid - 1; // Guess was too high, move left
            } else {
                  left = mid + 1;  // Guess was too low, move right
            }
      }

      return -1;  // Return -1 if not found (though this shouldn't happen per constraints)
};
