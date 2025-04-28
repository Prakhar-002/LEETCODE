//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2302

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public long countSubarrays(int[] nums, long k) {

            long cntSubArr = 0, total = 0; // Count of subarrays and total sum (use long)
            int n = nums.length; // Length of array

            int left = 0; // Left pointer for sliding window

            for (int right = 0; right < n; right++) {

                  total += nums[right]; // Add current element to total

                  // Shrink window while condition breaks
                  while (left <= right && total * (right - left + 1) >= k) {
                        total -= nums[left]; // Remove leftmost element
                        left++; // Move left pointer
                  }

                  cntSubArr += right - left + 1; // Add valid subarrays ending at 'right'
            }

            return cntSubArr; // Return total count
      }
}
