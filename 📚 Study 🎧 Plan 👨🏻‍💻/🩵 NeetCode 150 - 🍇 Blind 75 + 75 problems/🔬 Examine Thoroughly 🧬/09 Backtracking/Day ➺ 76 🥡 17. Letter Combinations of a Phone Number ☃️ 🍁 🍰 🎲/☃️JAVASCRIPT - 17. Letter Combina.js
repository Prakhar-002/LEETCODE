//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 17

//? ⌚ Time complexity ➺ O(n * 4 ^ n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var letterCombinations = function (digits) {
      // Final result array
      let res = [];

      // Mapping from digits to letters
      const digitToChar = {
            "2": "abc",
            "3": "def",
            "4": "ghi",
            "5": "jkl",
            "6": "mno",
            "7": "pqrs",  // corrected
            "8": "tuv",
            "9": "wxyz"
      };

      // Backtracking function
      function backtrack(i, curStr) {
            // Base Case: if built string equals digits length, save it
            if (curStr.length === digits.length) {
                  res.push(curStr);
                  return;
            }

            // Get the possible letters for the current digit
            let letters = digitToChar[digits[i]];

            // Try each letter and recurse for the next digit
            for (let ch of letters) {
                  backtrack(i + 1, curStr + ch);
            }
      }

      // Start backtracking if digits is not empty
      if (digits.length > 0) {
            backtrack(0, "");
      }

      return res;
};
