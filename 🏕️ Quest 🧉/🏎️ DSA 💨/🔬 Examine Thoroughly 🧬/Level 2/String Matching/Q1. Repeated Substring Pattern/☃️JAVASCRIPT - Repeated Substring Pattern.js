//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.4 Q1

//? ⌚ Time complexity ➺ O(n * sqrt(n)) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

var repeatedSubstringPattern = function (s) {
      const n = s.length;  // Total length of the string

      // Try all possible substring lengths from n/2 down to 1
      for (let len = Math.floor(n / 2); len >= 1; len--) {
            // Length must divide n to be a valid repeating block
            if (n % len === 0) {
                  const times = Math.floor(n / len);      // Number of repeats needed
                  const pattern = s.slice(0, len);        // Candidate substring

                  // Build repeated string
                  let built = "";
                  for (let i = 0; i < times; i++) {
                        built += pattern;
                  }

                  // If built string equals original, pattern is valid
                  if (built === s) {
                        return true;
                  }
            }
      }

      // No repeating substring pattern found
      return false;
};
