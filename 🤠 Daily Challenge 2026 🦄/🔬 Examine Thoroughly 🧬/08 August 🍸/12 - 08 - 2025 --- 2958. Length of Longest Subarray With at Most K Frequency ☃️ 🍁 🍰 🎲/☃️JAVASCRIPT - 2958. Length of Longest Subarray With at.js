//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2958

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var maxSubarrayLength = function(nums, k) {
      // Map to store frequency of elements in the current window
      const freq = new Map();

      let left = 0;
      let maxLen = 0;

      // Expand window with right pointer
      for (let right = 0; right < nums.length; right++) {
            freq.set(nums[right], (freq.get(nums[right]) || 0) + 1);

            // Shrink window from left if frequency exceeds k
            while (freq.get(nums[right]) > k) {
                  freq.set(nums[left], freq.get(nums[left]) - 1);
                  left++;
            }

            // Update maximum valid subarray length
            maxLen = Math.max(maxLen, right - left + 1);
      }

      return maxLen;
};