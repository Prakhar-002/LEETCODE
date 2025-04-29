//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2962

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)
class Solution {
      public long countSubarrays(int[] nums, int k) {

            int maxElem = Integer.MIN_VALUE;        // Find the maximum element in the array
            for (int num : nums) {
                  maxElem = Math.max(maxElem, num);
            }

            int n = nums.length;                    // Length of the array
            int count = 0;                          // Count of maxElem in current window
            int left = 0;                           // Left pointer
            long subArr = 0;                        // To store the result

            for (int right = 0; right < n; right++) {

                  if (nums[right] == maxElem) {
                        count++;                    // Count maxElem if seen
                  }

                  // Shrink window if it has exactly k max elements
                  while (left <= right && count == k) {
                        subArr += (n - right);      // All subarrays from left to n-1 ending at right are valid

                        if (nums[left] == maxElem) {
                              count--;              // Reduce count if removing maxElem
                        }

                        left++;                     // Move left pointer
                  }
            }

            return subArr;                          // Return total valid subarrays
      }
}

