//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 713

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var numSubarrayProductLessThanK = function (nums, k) {
      // ----------------------------------------------------------
      // Step 1: Handle Edge Cases and Initialize
      // ----------------------------------------------------------
      // If k is 1 or less, no product of positive integers can be less than k.
      if (k <= 1) {
            return 0;
      }

      // `result` will store the final count of valid subarrays.
      let result = 0;
      // `product` will store the product of the elements in the current window.
      let product = 1;
      // `left` pointer of the sliding window.
      let left = 0;

      // ----------------------------------------------------------
      // Step 2: Iterate with a Sliding Window
      // ----------------------------------------------------------
      // Iterate through the array with the `right` pointer to expand the window.
      for (let right = 0; right < nums.length; right++) {
            // Expand the window by including the element at the right pointer.
            product *= nums[right];

            // Shrink the window from the left until the product is less than k.
            while (product >= k) {
                  // Remove the element at the left pointer from the product.
                  product /= nums[left];
                  // Move the left pointer to the right.
                  left++;
            }

            // ----------------------------------------------------------
            // Step 3: Count Valid Subarrays
            // ----------------------------------------------------------
            // All subarrays ending at `right` within the valid window `[left, right]` are valid.
            // The number of new subarrays is the length of this window.
            result += (right - left + 1);
      }

      return result;
};
