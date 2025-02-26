//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1749

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <limits.h>

int maxAbsoluteSum(int* nums, int numsSize) {
      int minSubarraySum = 0; // 🔽 Tracks the minimum subarray sum ending at the current index
      int maxSubarraySum = 0; // 🔼 Tracks the maximum subarray sum ending at the current index
      
      int maxPositiveSum = INT_MIN; // 💰 Stores the maximum positive subarray sum
      int minNegativeSum = INT_MAX; // ❄️ Stores the minimum negative subarray sum

      // 🔄 Iterate through each number in the array
      for (int i = 0; i < numsSize; i++) {
            int num = nums[i];

            // 🔽 Reset minSubarraySum if it becomes positive, otherwise add current number
            minSubarraySum = (minSubarraySum > 0) ? num : minSubarraySum + num;

            // ✅ Update minNegativeSum to track the lowest sum encountered
            if (minSubarraySum < minNegativeSum) {
                  minNegativeSum = minSubarraySum;
            }

            // 🔼 Reset maxSubarraySum if it becomes negative, otherwise add current number
            maxSubarraySum = (maxSubarraySum < 0) ? num : maxSubarraySum + num;

            // ✅ Update maxPositiveSum to track the highest sum encountered
            if (maxSubarraySum > maxPositiveSum) {
                  maxPositiveSum = maxSubarraySum;
            }
      }

      // 🔥 Return the maximum absolute sum found in either direction
      return (maxPositiveSum > abs(minNegativeSum)) ? maxPositiveSum : abs(minNegativeSum);
}
