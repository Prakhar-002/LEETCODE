//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1493

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var longestSubarray = function (nums) {
      let l = 0; // Initialize the left pointer of the sliding window
      let curDlt = 0; // Count of zeros in the current window
      let longestOne = 0; // Maximum length of subarray containing all 1s after one deletion

      // Iterate through the array using the right pointer
      for (let r = 0; r < nums.length; r++) {
            // Increment the zero count if the current number is 0
            if (nums[r] === 0) {
                  curDlt++;
            }

            // If the zero count exceeds 1, shrink the window from the left
            while (curDlt > 1) {
                  if (nums[l] === 0) {
                        curDlt--;
                  }
                  l++; // Move the left pointer to the right
            }

            // Update the maximum length of the valid window
            longestOne = Math.max(longestOne, r - l + 1);
      }

      // Subtract 1 from the result to exclude the one deletion
      return longestOne - 1;
}