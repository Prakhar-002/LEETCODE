//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2176

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int countPairs(int[] nums, int k) {
            int pairs = 0;  // Initialize the count of valid pairs

            // Loop through each index i from 0 to n - 1
            for (int i = 0; i < nums.length; i++) {

                  // Loop through each index j > i
                  for (int j = i + 1; j < nums.length; j++) {
                        
                        // Check both conditions:
                        // 1. nums[i] == nums[j]
                        // 2. (i * j) % k == 0
                        if (nums[i] == nums[j] && (i * j) % k == 0) {
                              pairs++;  // Valid pair found, increment counter
                        }
                  }
            }

            return pairs;  // Return the total number of valid pairs
      }
}
