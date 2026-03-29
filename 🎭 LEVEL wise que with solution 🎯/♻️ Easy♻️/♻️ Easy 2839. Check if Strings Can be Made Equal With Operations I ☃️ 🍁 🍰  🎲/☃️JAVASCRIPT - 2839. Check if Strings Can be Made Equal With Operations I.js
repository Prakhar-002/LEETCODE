//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2839

//? ⌚ Time complexity ➺ O(1) 👉🏻  fixed 4-character strings, constant comparisons

//? 🧺 Space complexity ➺ O(1) 

var canBeEqual = function (s1, s2) {
      // Even-indexed positions (0, 2) can be swapped independently
      const evenMatch = (s1[0] === s2[0] && s1[2] === s2[2])
            || (s1[0] === s2[2] && s1[2] === s2[0]);

      // Odd-indexed positions (1, 3) can be swapped independently
      const oddMatch = (s1[1] === s2[1] && s1[3] === s2[3])
            || (s1[1] === s2[3] && s1[3] === s2[1]);

      return evenMatch && oddMatch;
};