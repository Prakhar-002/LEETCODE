//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3190

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

// JavaScript version
var minimumOperations = function (nums) {
      let count = 0;

      // Iterate through each number in the array
      for (const n of nums) {
            // Check if the number is NOT divisible by 3
            if (n % 3 !== 0) {
                  // Increment count if the condition is true
                  count++;
            }
      }

      // Return the count of numbers not divisible by 3
      return count;
};
