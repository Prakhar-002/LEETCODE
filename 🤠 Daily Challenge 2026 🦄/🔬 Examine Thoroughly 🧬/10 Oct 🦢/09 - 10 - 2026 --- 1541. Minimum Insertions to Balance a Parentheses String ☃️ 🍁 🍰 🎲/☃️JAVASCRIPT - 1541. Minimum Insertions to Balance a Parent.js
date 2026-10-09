//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1541

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

var minInsertions = function(s) {
      let count = 0; // Number of unmatched '('
      let res = 0;   // Count of insertions needed
      let i = 0;
      const n = s.length;

      while (i < n) {
            if (s[i] === '(') {
                  count++;
                  i++;
            } else {
                  // Encountered ')'
                  if (count > 0) {
                        count--;
                  } else {
                        // Insert '(' before this sequence
                        res++;
                  }

                  // Check if there is a consecutive ')'
                  if (i + 1 < n && s[i + 1] === ')') {
                        i += 2;
                  } else {
                        // Single ')' requires 1 extra ')' to complete the pair
                        res++;
                        i++;
                  }
            }
      }

      // Add 2 closing brackets for every unmatched opening bracket
      return res + (count * 2);
};