//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2707

//? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

var minExtraChar = function (s, dictionary) {
      // A set created from the `dictionary`
      // for faster membership tests to check if a substring is a valid word
      const words = new Set(dictionary);
      // Map stores the results of subProblems
      const dp = new Map();
      dp.set(s.length, 0);

      // function computes the minimal number of additional 
      // characters needed starting from index `i`
      function dfs(i) {
            // If `i` is already in `dp`
            // it means we have computed the needed extra chars for substring `s.slice(i)`
            if (dp.has(i)) {
                  // return this stored value
                  return dp.get(i);
            }

            // function considers two cases for each position `i`

            // Skipping the current character: `(1 + dfs(i + 1))`
            // assumes that if the char at index `i` is not part of any valid word
            // skip it, hence adding 1 to the count and moving forward
            let extraChars = 1 + dfs(i + 1); // skip cur char

            // Form words using the current character and extend to subsequent characters
            for (let j = i; j < s.length; j++) {
                  // If substring `s.slice(i, j+1)` from the current index `i` 
                  // to another index `j` is in the dictionary (`words`)
                  if (words.has(s.slice(i, j + 1))) {
                        // call recursively to solve for the remaining string `s.slice(j+1)`
                        extraChars = Math.min(extraChars, dfs(j + 1));
                  }
            }

            // `dp.set(i, extraChars)` is updated 
            dp.set(i, extraChars);
            // return the result
            return extraChars;
      }

      // execution starts with `dfs(0)`
      return dfs(0);
};

