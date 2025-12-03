//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.4 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

var rotateString = function (s, goal) {
      // If lengths differ, goal cannot be a rotation of s
      if (s.length !== goal.length) {
            return false;
      }

      // Concatenate s with itself; any rotation of s
      // must appear as a substring of s + s
      const doubledString = s + s;

      // Check if goal is a substring of the doubled string
      return doubledString.includes(goal);
};
