//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2461

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(k)

var maximumSubarraySum = function (nums, k) {
      // Variable to store the maximum subarray sum
      let subArraySum = 0;
      // Map to track the frequency of elements in the current subarray
      const countNum = new Map();
      // Variable to store the current subarray sum
      let cur_sum = 0;

      // Left pointer for the sliding window
      let l = 0;

      // Iterate through the array with the right pointer
      for (let r = 0; r < nums.length; r++) {
            // Add the current number to the current sum
            cur_sum += nums[r];
            // Increment the frequency of the current number
            countNum.set(nums[r], (countNum.get(nums[r]) || 0) + 1);

            // If the window size exceeds `k`, shrink it
            if (r - l + 1 > k) {
                  // Decrease the frequency of the leftmost element
                  countNum.set(nums[l], countNum.get(nums[l]) - 1);
                  // If its frequency becomes zero, remove it from the map
                  if (countNum.get(nums[l]) === 0) {
                        countNum.delete(nums[l]);
                  }
                  // Subtract the leftmost element from the current sum
                  cur_sum -= nums[l];
                  // Move the left pointer forward
                  l++;
            }

            // Check if the window has exactly `k` distinct elements
            if (countNum.size === k) {
                  // Update the maximum subarray sum
                  subArraySum = Math.max(subArraySum, cur_sum);
            }
      }

      // Return the maximum subarray sum for `k` distinct elements
      return subArraySum;
};
