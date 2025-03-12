//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2529

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var maximumCount = function (nums) {
      // Function to count negative numbers using binary search
      function countNegatives(nums) {
            let left = 0, right = nums.length - 1; // Define search boundaries

            while (left <= right) {
                  let mid = Math.floor((left + right) / 2); // Find middle index

                  if (nums[mid] < 0) {
                        left = mid + 1; // Move right to find first non-negative number
                  } else {
                        right = mid - 1; // Search in the left half
                  }
            }

            return left; // Index of first non-negative number = count of negatives
      }

      // Function to count positive numbers using binary search
      function countPositives(nums) {
            let left = 0, right = nums.length - 1; // Define search boundaries

            while (left <= right) {
                  let mid = Math.floor((left + right) / 2); // Find middle index

                  if (nums[mid] <= 0) {
                        left = mid + 1; // Move right to find first positive number
                  } else {
                        right = mid - 1; // Search in the left half
                  }
            }

            return nums.length - left; // Count of positive numbers
      }

      // Compute counts of negative and positive numbers
      let negCount = countNegatives(nums);
      let posCount = countPositives(nums);

      // Return the maximum count of either negative or positive numbers
      return Math.max(negCount, posCount);
};
