//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1800

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1) 

var maxAscendingSum = function (nums) {
      // Initialize maxSum to store the maximum ascending sum
      let maxSum = nums[0];
      // curSum stores the sum of the current ascending subarray
      let curSum = nums[0];

      // Iterate through the array from index 1
      for (let i = 1; i < nums.length; i++) {
            // Check if the current element is greater than the previous one (strictly increasing)
            if (nums[i - 1] < nums[i]) {
                  curSum += nums[i];  // Add the current element to curSum
            } else {
                  maxSum = Math.max(maxSum, curSum);  // Update maxSum if curSum is greater
                  curSum = nums[i];  // Start a new subarray sum with current element
            }
      }

      return Math.max(maxSum, curSum);  // Return the maximum found sum
}
