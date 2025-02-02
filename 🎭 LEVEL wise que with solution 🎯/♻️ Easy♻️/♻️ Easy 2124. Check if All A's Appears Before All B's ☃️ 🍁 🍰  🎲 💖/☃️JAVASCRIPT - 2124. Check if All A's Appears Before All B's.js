//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2124

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

// Function to check if every 'a' appears before every 'b' in the given string
var checkString = function (s) {
      // If "ba" is found in the string, return false, as it means a 'b' appears before an 'a'
      // Otherwise, return true
      return !s.includes("ba");
}