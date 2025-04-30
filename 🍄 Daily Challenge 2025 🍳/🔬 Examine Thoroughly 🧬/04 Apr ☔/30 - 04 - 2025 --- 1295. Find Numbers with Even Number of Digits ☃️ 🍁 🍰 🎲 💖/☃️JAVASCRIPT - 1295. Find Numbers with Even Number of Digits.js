//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1295

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

function findNumbers(nums) {
      let res = 0;  // Initialize result count

      for (let num of nums) {
            // Check if number has 2, 4, or 6 digits
            if ((num > 9 && num < 100) || (num > 999 && num < 10000) || num === 100000) {
                  res++;  // Increment if condition is satisfied
            }
      }

      return res;  // Return total count
}
