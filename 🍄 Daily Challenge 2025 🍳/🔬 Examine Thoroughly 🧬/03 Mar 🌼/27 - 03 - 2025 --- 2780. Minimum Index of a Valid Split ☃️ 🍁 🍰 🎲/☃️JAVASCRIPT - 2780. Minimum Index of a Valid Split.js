//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2780

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var minimumIndex = function (nums) {
      let n = nums.length;
      let majority = 0;
      let count = 0;

      // Step 1: Find the dominant element using Boyer-Moore Voting Algorithm
      for (let num of nums) {
            if (count === 0) {
                  majority = num; // Set current element as the dominant candidate
            }
            if (num === majority) {
                  count++;  // Increment count if same as current dominant
            } else {
                  count--;  // Decrement count if different
            }
      }

      // Step 2: Count occurrences of the dominant element
      let leftCnt = 0;
      let rightCnt = nums.filter(x => x === majority).length; // Count occurrences of majority

      // Step 3: Iterate to find the minimum valid index
      for (let i = 0; i < n; i++) {
            if (nums[i] === majority) {
                  leftCnt++;  // Move `nums[i]` from right partition to left partition
                  rightCnt--;
            }

            // Compute partition sizes
            let leftLen = i + 1;
            let rightLen = n - i - 1;

            // Check if `majority` is dominant in both partitions
            if (2 * leftCnt > leftLen && 2 * rightCnt > rightLen) {
                  return i; // Return the first valid index
            }
      }

      return -1; // Return -1 if no valid index is found
}

//!-------------------------------------------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var minimumIndex = function (nums) {
      let left = {};  // Object to store frequency of elements in the left partition
      let right = {}; // Object to store frequency of elements in the right partition

      // Populate the right frequency map initially
      for (let num of nums) {
            right[num] = (right[num] || 0) + 1;
      }

      // Iterate through the array
      for (let i = 0; i < nums.length; i++) {
            let n = nums[i]; // Current element

            // Move `n` from right partition to left partition
            left[n] = (left[n] || 0) + 1;
            right[n]--;

            // Remove from right if count becomes zero
            if (right[n] === 0) {
                  delete right[n];
            }

            // Compute partition sizes
            let left_len = i + 1;              // Length of left partition
            let right_len = nums.length - i - 1; // Length of right partition

            // Check if `n` is dominant in both partitions
            if (2 * left[n] > left_len && right[n] && 2 * right[n] > right_len) {
                  return i; // Return the minimum valid index
            }
      }

      return -1; // Return -1 if no valid index is found
}