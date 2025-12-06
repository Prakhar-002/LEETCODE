//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L5.3 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

function findLps(s) {
      const n = s.length;
      const lps = new Array(n).fill(0); // Initialize all to 0

      let length = 0; // Length of current longest prefix-suffix
      let i = 1;      // Start from index 1

      while (i < n) {
            if (s[i] === s[length]) {
                  // Characters match: extend current prefix-suffix
                  length++;
                  lps[i] = length;
                  i++;
            } else {
                  if (length !== 0) {
                        // Fall back to previous longest prefix-suffix
                        // Don't move i here, we try to match with shorter border
                        length = lps[length - 1];
                  } else {
                        // No border to fall back to, lps[i] remains 0
                        i++;
                  }
            }
      }
      return lps;
}

var longestPrefix = function (s) {
      // Build LPS array for the whole string
      const prefixLps = findLps(s);

      // The last value in LPS array is the length of the longest happy prefix
      const happyPrefixLen = prefixLps[prefixLps.length - 1];

      // Return that prefix substring
      return s.slice(0, happyPrefixLen);
};
