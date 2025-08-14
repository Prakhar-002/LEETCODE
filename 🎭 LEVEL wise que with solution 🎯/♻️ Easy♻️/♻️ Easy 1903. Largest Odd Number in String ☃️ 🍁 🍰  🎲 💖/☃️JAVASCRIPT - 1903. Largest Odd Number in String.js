//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1903

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(num)

//? 🧺 Space complexity ➺ O(1)

var largestOddNumber = function (num) {
      // Iterate from the last character to the first
      for (let i = num.length - 1; i >= 0; i--) {
            // Convert current char to integer and check if odd
            let digit = parseInt(num[i], 10);
            if (digit % 2 !== 0) {
                  // Return substring from start to this index (inclusive)
                  return num.substring(0, i + 1);
            }
      }
      // If no odd digit found, return empty string
      return "";
};
