//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2537

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var countGood = function (nums, k) {
      // Map to store the frequency of each element in the current window
      const freq_cnt = new Map();

      let left = 0;  // Left pointer for sliding window
      let good_pair = 0;  // Count of good pairs in the current window
      let good_subarray = 0;  // Total number of good subarrays

      // Traverse the array with the right pointer
      for (let right = 0; right < nums.length; right++) {
            // Add the frequency of the current number to the good pair count
            good_pair += (freq_cnt.get(nums[right]) || 0);

            // Update the frequency of the current number in the map
            freq_cnt.set(nums[right], (freq_cnt.get(nums[right]) || 0) + 1);

            // Shrink the window from the left while we have enough good pairs
            while (good_pair >= k) {
                  // All subarrays from 'left' to 'right' are valid
                  good_subarray += nums.length - right;

                  // Decrease the frequency of the element at the left pointer
                  freq_cnt.set(nums[left], freq_cnt.get(nums[left]) - 1);

                  // Decrease the good pair count accordingly
                  good_pair -= freq_cnt.get(nums[left]);

                  // Move the left pointer to the right
                  left++;
            }
      }

      return good_subarray;  // Return the total number of good subarrays
};
