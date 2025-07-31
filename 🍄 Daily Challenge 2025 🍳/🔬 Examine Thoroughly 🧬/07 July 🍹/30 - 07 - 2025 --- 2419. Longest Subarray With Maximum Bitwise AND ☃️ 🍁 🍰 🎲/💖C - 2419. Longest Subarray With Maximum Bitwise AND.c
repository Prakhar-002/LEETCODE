//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2419

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <stdlib.h>

int longestSubarray(int* nums, int numsSize) {
      // Intention => taking bitwise AND of two values let say n and max value in arr
      // 1. if n >  max(nums) : n & max(nums) < max(nums)
      // 2. if n == max(nums) : n & max(nums) == max(nums)
      // 3. if n >  max(nums) : n & max(nums) < max(nums)
      // so we just need to find only contiguous sequence of max elements within an array

      // to find maximum number found in the `nums` array
      int target = 0;
      // iterates through each number in `nums`
      for (int i = 0; i < numsSize; i++) {
            // update `target` with max of `cur num` and `target` itself
            if (nums[i] > target) {
                  target = nums[i];
            }
      }

      // `size` is used to keep track of the current subarray's size
      int size = 0;
      // `longestSubArray` is used to track the size of the longest subarray found so far
      int longestSubArray = 0;

      // second `for` loop again iterates through each number in `nums`
      for (int i = 0; i < numsSize; i++) {
            // cur No. `nums[i]` is == `target`, the `size` is incremented by `1` else set to again `0`
            size = (nums[i] == target) ? size + 1 : 0;
            // take max of `cur size` and `longestSubArray`
            // ensures that `longestSubArray` always holds the length of the longest contiguous subarray of `target`
            if (size > longestSubArray) {
                  longestSubArray = size;
            }
      }

      // Returning the length of the longest such subarray
      return longestSubArray;
}