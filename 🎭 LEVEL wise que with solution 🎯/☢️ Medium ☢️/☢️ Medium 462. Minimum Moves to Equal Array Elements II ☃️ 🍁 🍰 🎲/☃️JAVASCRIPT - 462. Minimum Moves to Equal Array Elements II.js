//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 462

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var minMoves2 = function (nums) {
      // Sort the array to find the median efficiently
      nums.sort((a, b) => a - b);

      // The median minimizes the sum of absolute differences
      let median = nums[Math.floor(nums.length / 2)];

      // Initialize the move counter
      let count = 0;

      // Iterate over the array to compute the total moves required
      for (let num of nums) {
            count += Math.abs(median - num); // Add the absolute difference
      }

      return count; // Return the minimum number of moves needed
}