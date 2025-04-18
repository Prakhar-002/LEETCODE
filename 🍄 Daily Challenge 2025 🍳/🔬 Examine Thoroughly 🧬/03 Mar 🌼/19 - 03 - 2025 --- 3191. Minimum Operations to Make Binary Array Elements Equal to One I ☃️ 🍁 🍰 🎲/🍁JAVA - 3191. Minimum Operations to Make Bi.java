//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3194

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int minOperations(int[] nums) {
            int minOps = 0; // Stores the count of operations needed

            // Iterate up to the third last element
            for (int i = 0; i < nums.length - 2; i++) {
                  // If nums[i] is 0, perform an operation
                  if (nums[i] == 0) {
                        minOps++; // Increment operation count
                        nums[i] = 1; // Flip nums[i]
                        nums[i + 1] = 1 - nums[i + 1]; // Toggle nums[i+1]
                        nums[i + 2] = 1 - nums[i + 2]; // Toggle nums[i+2]
                  }
            }

            // Check if the last two elements are both 1; otherwise, return -1
            if (nums[nums.length - 1] == 0 || nums[nums.length - 2] == 0) {
                  return -1; // Impossible to make the array valid
            }

            return minOps; // Return the minimum number of operations performed
      }
}
