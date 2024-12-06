//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 151

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var reverseWords = function (s) {
      // Add a leading space to handle edge cases
      s = " " + s;

      // Initialize pointers and result string
      let i = s.length - 1, j = s.length - 1;
      let res = "";

      // Traverse the string
      while (i > 0 && j > 0) {
            // Skip trailing spaces
            while (i > 0 && s[i] === ' ') {
                  i--;
            }

            // Set j to the last non-space character
            j = i;

            // Move i to the beginning of the current word
            while (i > 0 && s[i] !== ' ') {
                  i--;
            }

            // Append the current word to the result
            res += s.slice(i + 1, j + 1) + " ";
      }

      // Remove trailing spaces and return
      return res.trim();
}