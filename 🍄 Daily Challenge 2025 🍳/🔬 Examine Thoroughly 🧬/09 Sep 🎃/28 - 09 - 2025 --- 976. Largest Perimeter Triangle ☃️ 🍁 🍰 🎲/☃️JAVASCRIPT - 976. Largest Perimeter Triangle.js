//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 976

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var largestPerimeter = function (nums) {
      // Sort in non-increasing order so that nums[i] is the largest in each triple
      nums.sort((a, b) => b - a);   // in-place sort descending

      // Scan consecutive triples; first valid triple gives the maximum perimeter
      for (let i = 0; i < nums.length - 2; i++) {
            const a = nums[i], b = nums[i + 1], c = nums[i + 2];

            // Triangle inequality: for a ≥ b ≥ c, only need b + c > a
            if (b + c > a) {
                  return a + b + c;   // maximal perimeter due to descending order
            }
      }

      // No valid triangle
      return 0;
};
