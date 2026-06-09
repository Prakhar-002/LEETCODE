//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3689

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var maxTotalValue = function(nums, k) {
      // Find max and min using spread operator
      const maxVal = Math.max(...nums);
      const minVal = Math.min(...nums);

      // Spread between max and min scaled by k gives the answer
      return (maxVal - minVal) * k;
};