//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1816

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

var truncateSentence = function(s, k) {
      // return a string formed by joining the first k words from the string s, 
      // where the words are separated by a single space " "
      return s.split(" ").slice(0, k).join(" ");
};