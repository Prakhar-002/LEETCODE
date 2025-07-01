//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3330

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

//? 🧺 Space complexity ➺ O(1)

var possibleStringCount = function (word) {
      let ans = 1;
      let n = word.length;

      for (let i = 1; i < n; i++) {
            // If current and previous characters are the same
            if (word[i - 1] === word[i]) {
                  ans++;  // Count this as an extra possible string
            }
      }

      return ans;
};
