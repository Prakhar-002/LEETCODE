//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3190

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int minimumOperations(int[] nums) {
            int count = 0;

            // Iterate through each number in the array
            for (int n : nums) {
                  // Check if the number is NOT divisible by 3
                  if (n % 3 != 0) {
                        // Increment count if the condition is true
                        count++;
                  }
            }

            // Return the count of numbers not divisible by 3
            return count;
      }
}
