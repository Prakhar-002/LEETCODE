//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2553

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var separateDigits = function(nums) {
      const res = [];

      for (const num of nums) {
            // String(num) turns the number into a sequence of digit characters
            for (const ch of String(num)) {
                  // Number(ch) parses the single character back into an integer
                  res.push(Number(ch));
            }
      }

      return res;
};