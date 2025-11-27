//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3381

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var maxSubarraySum = function (nums, k) {
      const prefix = new Array(k).fill(Number.MAX_SAFE_INTEGER);  // Array to track minimum prefix sums for each remainder mod k
      prefix[0] = 0;                                              // Prefix sum for remainder 0 is initialized as 0
      let res = Number.NEGATIVE_INFINITY;                         // Result initialized to negative infinity for max comparison
      let total = 0;                                              // Running total prefix sum

      // Iterate over each element in nums array
      for (let i = 0; i < nums.length; i++) {
            total += nums[i];                                       // Add current element to running sum
            const length = i + 1;                                   // Current subarray length
            const prefix_len = length % k;                          // Remainder of length mod k

            // Calculate max sum for subarray with length divisible by k
            res = Math.max(res, total - prefix[prefix_len]);

            // Update prefix array to hold minimum prefix sum for this remainder class
            prefix[prefix_len] = Math.min(prefix[prefix_len], total);
      }
      return res;
};
