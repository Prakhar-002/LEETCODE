//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1957

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

var makeFancyString = function (s) {
      // if length is less than 2, return the same string
      if (s.length < 2) {
            return s;
      }

      // Initialize 'fancy' as an array with the first two characters of 's'
      let fancy = [s[0], s[1]];

      // Start iterating from the third character in the string
      for (let i = 2; i < s.length; i++) {
            const ch = s[i];

            // Initialize 'fancy' with the first two characters of 's'.
            let n = fancy.length;

            // Check if the last two characters in 'fancy' are the same as the current character
            if (fancy[n - 1] === ch && fancy[n - 2] === ch) {
                  continue;
            } else {
                  // Otherwise, add 'ch' to 'fancy'
                  fancy.push(ch);
            }
      }

      // Join the array into a string and return the result
      return fancy.join('');
};