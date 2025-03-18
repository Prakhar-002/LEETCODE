//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2401

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var longestNiceSubarray = function (nums) {
      let maxLength = 0; // Stores the maximum "nice" subarray length
      let bitMask = 0; // Keeps track of the bitwise OR of the current subarray
      let l = 0; // Left pointer of the sliding window

      // Iterate over the array using the right pointer
      for (let r = 0; r < nums.length; r++) {
            // If nums[right] has overlapping bits with bitMask, adjust left pointer
            while ((bitMask & nums[r]) !== 0) {
                  bitMask ^= nums[l]; // Remove nums[left] from bitMask
                  l++; // Move left pointer forward
            }

            bitMask |= nums[r]; // Include nums[right] in the bitwise OR
            maxLength = Math.max(maxLength, r - l + 1); // Update max length
      }

      return maxLength; // Return the longest nice subarray length
};
