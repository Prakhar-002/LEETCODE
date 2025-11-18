//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1437

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public boolean kLengthApart(int[] nums, int k) {
            // Initialize last seen index of '1' as -1 (not found yet)
            int l = -1;

            // Iterate through the array with index r
            for (int r = 0; r < nums.length; r++) {
                  // When a '1' is found at index r
                  if (nums[r] == 1) {
                        // Check if this is not the first '1' found
                        // and if the gap between current and last '1' is less than k
                        if (l != -1 && r - l - 1 < k) {
                              // Return false if distance constraint is violated
                              return false;
                        }
                        // Update last seen index of '1'
                        l = r;
                  }
            }

            // If no violations found throughout, return true
            return true;
      }
}
