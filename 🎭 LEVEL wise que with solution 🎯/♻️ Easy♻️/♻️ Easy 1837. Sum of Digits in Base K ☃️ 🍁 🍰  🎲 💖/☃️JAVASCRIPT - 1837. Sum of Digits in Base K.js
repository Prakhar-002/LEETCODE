//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1737

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var sumBase = function (n, k) {
      let digitSum = 0;  // Initialize digit sum

      while (n > 0) {
            digitSum += n % k;  // Add last base-k digit
            n = Math.floor(n / k);  // Remove last digit
      }

      return digitSum;  // Return total digit sum
};
