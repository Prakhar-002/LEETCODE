//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3392

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int countSubarrays(int[] nums) {
            int n = nums.length;                      // Length of the nums array
            int ans = 0;                               // Initialize answer to count valid subarrays

            for (int i = 1; i < n - 1; i++) {          // Iterate from index 1 to n-2 (middle elements)
                  // Check if current element is twice the average of its neighbors
                  if (nums[i] == (nums[i - 1] + nums[i + 1]) * 2) {
                        ans++;                        // Increment count if condition satisfies
                  }
            }

            return ans;                                // Return total valid subarrays
      }
}
