//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1749

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var maxAbsoluteSum = function (nums) {
      let minSubarraySum = 0; // 🔽 Tracks the minimum subarray sum ending at the current index
      let maxSubarraySum = 0; // 🔼 Tracks the maximum subarray sum ending at the current index

      let maxPositiveSum = -Infinity; // 💰 Stores the maximum positive subarray sum
      let minNegativeSum = Infinity;  // ❄️ Stores the minimum negative subarray sum

      // 🔄 Iterate through each number in the array
      for (let num of nums) {
            // 🔽 Reset minSubarraySum if it becomes positive, otherwise add current number
            minSubarraySum = (minSubarraySum > 0) ? num : minSubarraySum + num;

            // ✅ Update minNegativeSum to track the lowest sum encountered
            minNegativeSum = Math.min(minNegativeSum, minSubarraySum);

            // 🔼 Reset maxSubarraySum if it becomes negative, otherwise add current number
            maxSubarraySum = (maxSubarraySum < 0) ? num : maxSubarraySum + num;

            // ✅ Update maxPositiveSum to track the highest sum encountered
            maxPositiveSum = Math.max(maxPositiveSum, maxSubarraySum);
      }

      // 🔥 Return the maximum absolute sum found in either direction
      return Math.max(maxPositiveSum, Math.abs(minNegativeSum));
};
