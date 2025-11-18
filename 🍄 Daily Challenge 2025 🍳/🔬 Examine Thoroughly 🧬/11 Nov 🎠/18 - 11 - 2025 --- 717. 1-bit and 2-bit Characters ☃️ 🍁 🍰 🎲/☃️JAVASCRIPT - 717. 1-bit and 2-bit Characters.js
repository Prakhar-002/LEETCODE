//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 717

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(bits)

//? 🧺 Space complexity ➺ O(1)

var isOneBitCharacter = function(bits) {
      let i = 0;

      // Traverse the bits array until the second last bit
      while (i < bits.length - 1) {
            if (bits[i] === 1) {
                  // Two-bit character found, skip next bit
                  i += 2;
            } else {
                  // One-bit character, move to next bit
                  i += 1;
            }
      }

      // If i stops on last bit, it means the last character is a one-bit character (0)
      return i === bits.length - 1;
};
