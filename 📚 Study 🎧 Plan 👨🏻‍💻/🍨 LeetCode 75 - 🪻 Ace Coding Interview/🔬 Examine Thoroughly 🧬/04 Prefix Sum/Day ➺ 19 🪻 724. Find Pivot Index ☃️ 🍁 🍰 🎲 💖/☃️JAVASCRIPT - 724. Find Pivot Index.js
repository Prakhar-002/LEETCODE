//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 724

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var pivotIndex = function (nums) {
      // Calculate the total sum of the array
      const totalSum = nums.reduce((acc, num) => acc + num, 0);

      // Initialize the running sum for the left side
      let leftSum = 0;

      // Iterate through the array to find the pivot index
      for (let i = 0; i < nums.length; i++) {
            // Right sum is totalSum minus leftSum minus the current element
            const rightSum = totalSum - leftSum - nums[i];

            // Check if left sum equals right sum
            if (leftSum === rightSum) {
                  return i;
            }

            // Update left sum to include the current element
            leftSum += nums[i];
      }

      // If no pivot index is found, return -1
      return -1;
}


//!-------------------------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var pivotIndex = function (nums) {
      const n = nums.length;

      // Arrays to store cumulative sums from the left and the right
      const leftSum = new Array(n).fill(0);
      const rightSum = new Array(n).fill(0);

      // Calculate the cumulative sum from the left
      for (let i = 1; i < n; i++) {
            leftSum[i] = leftSum[i - 1] + nums[i - 1];
      }

      // Calculate the cumulative sum from the right
      for (let i = n - 2; i >= 0; i--) {
            rightSum[i] = rightSum[i + 1] + nums[i + 1];
      }

      // Check for the pivot index where leftSum equals rightSum
      for (let i = 0; i < n; i++) {
            if (leftSum[i] === rightSum[i]) {
                  return i; // Return the pivot index if found
            }
      }

      // If no pivot index is found, return -1
      return -1;
}
