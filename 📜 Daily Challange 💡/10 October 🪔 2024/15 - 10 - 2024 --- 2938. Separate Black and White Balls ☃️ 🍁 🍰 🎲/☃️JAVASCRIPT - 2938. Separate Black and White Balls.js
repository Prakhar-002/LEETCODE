//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2938

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

var minimumSteps = function (s) {
      // Initialize total steps needed to move all white tiles ('0') to the left
      let totalSteps = 0;

      // Track the position of the next available white tile ('0') to move
      let whitePosition = 0;

      // Iterate through each character in the string
      for (let curPosition = 0; curPosition < s.length; curPosition++) {
            // If the current tile is white ('0')
            if (s[curPosition] === "0") {
                  // Calculate the steps needed to move this tile to the correct position
                  // and add to totalSteps (difference between current position and whitePosition)
                  totalSteps += curPosition - whitePosition;

                  // Update whitePosition to the next available spot for a white tile
                  whitePosition++;
            }
      }

      // Return the total number of steps needed
      return totalSteps;
}