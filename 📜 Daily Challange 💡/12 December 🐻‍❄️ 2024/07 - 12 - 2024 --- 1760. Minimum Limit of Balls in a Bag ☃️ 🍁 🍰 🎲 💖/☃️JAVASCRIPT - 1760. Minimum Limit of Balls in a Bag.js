//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1760

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

// Helper function to check if the division is possible
var canDivide = function (nums, maxBalls, maxOperations) {
      let operations = 0;

      for (let n of nums) {
            // Calculate operations needed for the current bag
            operations += Math.ceil(n / maxBalls) - 1;

            // If operations exceed the limit, return false
            if (operations > maxOperations) {
                  return false;
            }
      }

      return true; // Division is possible
}

// Main function to find the minimum possible maximum size
var minimumSize = function (nums, maxOperations) {
      let left = 1, right = Math.max(...nums);

      while (left < right) {
            let mid = left + Math.floor((right - left) / 2);

            if (canDivide(nums, mid, maxOperations)) {
                  right = mid; // Reduce upper bound
            } else {
                  left = mid + 1; // Increase lower bound
            }
      }

      return left; // The smallest maximum size
}

