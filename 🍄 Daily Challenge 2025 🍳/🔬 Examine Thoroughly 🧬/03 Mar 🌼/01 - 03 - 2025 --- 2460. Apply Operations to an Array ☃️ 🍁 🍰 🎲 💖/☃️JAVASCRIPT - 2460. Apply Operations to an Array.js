//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2460

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(1)

var applyOperations = function (nums) {
      // Total number of elements in the array
      const N = nums.length;

      // First pass - apply the operation:
      // If two adjacent elements are equal, double the first and set the second to zero
      for (let i = 0; i < N - 1; i++) {
            if (nums[i] === nums[i + 1]) {
                  nums[i] *= 2;  // Double the value of nums[i]
                  nums[i + 1] = 0;  // Set the next element to zero
            }
      }

      // Second pass - shift all non-zero elements to the left (maintain order)
      let j = 0;  // Pointer to track where the next non-zero element should go

      for (let i = 0; i < N; i++) {
            if (nums[i] !== 0) {
                  // Swap nums[i] and nums[j]
                  [nums[i], nums[j]] = [nums[j], nums[i]];
                  // Move the non-zero pointer forward
                  j++;
            }
      }

      // Return the final modified array
      return nums;
};
