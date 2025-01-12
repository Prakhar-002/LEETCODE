//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2116

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

var canBeValid = function (s, locked) {
      // Get the length of the string
      const strLen = s.length;

      // If the length of the string is odd, it cannot be a valid parentheses sequence
      if (strLen % 2 === 1) {
            return false;
      }

      // Initialize arrays to keep track of open brackets and unlocked positions
      const openBrackets = [];
      const unlocked = [];

      // Iterate through the string
      for (let i = 0; i < s.length; i++) {
            if (locked[i] === '0') {
                  // If the character is unlocked, add its index to the unlocked array
                  unlocked.push(i);
            } else if (s[i] === '(') {
                  // If the character is a locked '(', add its index to openBrackets
                  openBrackets.push(i);
            } else if (s[i] === ')') {
                  if (openBrackets.length > 0) {
                        // If there is a matching open bracket, pop it
                        openBrackets.pop();
                  } else if (unlocked.length > 0) {
                        // If there are unlocked positions available, use one to match ')'
                        unlocked.pop();
                  } else {
                        // If no match is possible, return false
                        return false;
                  }
            }
      }

      // Check for remaining open brackets and unlocked positions
      while (openBrackets.length > 0 && unlocked.length > 0 && openBrackets[openBrackets.length - 1] < unlocked[unlocked.length - 1]) {
            // Match open brackets with unlocked positions if they can be closed
            openBrackets.pop();
            unlocked.pop();
      }

      // If there are any unmatched open brackets left, return false
      if (openBrackets.length > 0) {
            return false;
      }

      // If all checks pass, the string can be valid
      return true;
}
