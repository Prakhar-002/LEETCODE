//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1695

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var maximumUniqueSubarray = function (nums) {
      let unique = new Set();     // Set to track unique elements
      let maxSum = 0;
      let currentSum = 0;
      let left = 0;

      for (let right = 0; right < nums.length; right++) {
            currentSum += nums[right];  // Add current element to sum

            // If duplicate found, shrink window
            while (unique.has(nums[right])) {
                  currentSum -= nums[left];    // Subtract left element
                  unique.delete(nums[left]);   // Remove from set
                  left++;                      // Move left
            }

            unique.add(nums[right]);           // Add to set
            maxSum = Math.max(maxSum, currentSum);  // Update max
      }

      return maxSum;   // Return result
};
