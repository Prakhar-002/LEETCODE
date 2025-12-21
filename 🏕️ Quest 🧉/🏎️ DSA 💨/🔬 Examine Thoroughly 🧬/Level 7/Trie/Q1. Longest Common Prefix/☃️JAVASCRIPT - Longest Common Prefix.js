//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L7.4 Q1

//? ⌚ Time complexity ➺ O(n *) 👉🏻  n = len(strs)

//? 🧺 Space complexity ➺ O(1)  👉🏻  m = len(strs[0])

var longestCommonPrefix = function (strs) {
      // If the input array is empty, return empty string
      if (strs.length === 0) {
            return "";
      }

      // We use the first string as a reference
      // For each index i in the first string:
      for (let i = 0; i < strs[0].length; ++i) {
            // Check every other string in the array
            for (let j = 1; j < strs.length; ++j) {
                  // If we have reached the end of current string OR
                  // the character at position i does not match strs[0][i],
                  // then the common prefix ends at index i
                  if (i === strs[j].length || strs[j][i] !== strs[0][i]) {
                        return strs[0].substring(0, i);
                  }
            }
      }

      // If we finish the loop, the entire first string is the common prefix
      return strs[0];
};
