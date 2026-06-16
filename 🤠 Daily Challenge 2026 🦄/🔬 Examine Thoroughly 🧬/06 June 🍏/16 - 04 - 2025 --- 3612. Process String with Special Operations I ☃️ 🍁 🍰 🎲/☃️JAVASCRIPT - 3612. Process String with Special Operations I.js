//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3612

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var processStr = function(s) {
      let result = [];

      for (const ch of s) {
            if (ch >= 'a' && ch <= 'z') {
                  // Append normal lowercase letters
                  result.push(ch);
            } else if (ch === '*' && result.length > 0) {
                  // Remove the last character
                  result.pop();
            } else if (ch === '#') {
                  // Duplicate the entire current array
                  result = result.concat(result);
            } else if (ch === '%') {
                  // Reverse the entire current array
                  result.reverse();
            }
      }

      return result.join('');
};