//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1523

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var countOdds = function (low, high) {
      // (high + 1) / 2 = count of odds from 1 to high inclusive
      // low / 2 = count of odds from 1 to low-1 inclusive  
      // Subtract: odds in range [low, high]
      return Math.floor((high + 1) / 2) - Math.floor(low / 2);
};
