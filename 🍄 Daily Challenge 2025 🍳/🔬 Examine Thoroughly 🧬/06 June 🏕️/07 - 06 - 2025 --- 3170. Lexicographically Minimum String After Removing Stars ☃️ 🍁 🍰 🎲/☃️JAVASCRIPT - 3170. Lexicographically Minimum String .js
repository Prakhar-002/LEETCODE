//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3170

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var clearStars = function (inputStr) {
      const charIndices = Array.from({ length: 26 }, () => []); // 26 stacks
      const chars = inputStr.split('');

      // Traverse each character
      for (let i = 0; i < chars.length; i++) {
            const ch = chars[i];
            if (ch !== '*') {
                  // Push index into corresponding character stack
                  charIndices[ch.charCodeAt(0) - 97].push(i);
            } else {
                  // Find the smallest character index to remove
                  for (let j = 0; j < 26; j++) {
                        if (charIndices[j].length > 0) {
                              const pos = charIndices[j].pop();
                              chars[pos] = '*'; // Mark for removal
                              break;
                        }
                  }
            }
      }

      // Join non-asterisk characters
      return chars.filter((ch) => ch !== '*').join('');
};
