//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2154

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int findFinalValue(int[] nums, int original) {
            // Sort the array to process values in ascending order
            Arrays.sort(nums);

            // Iterate through each number in the sorted array
            for (int n : nums) {
                  // If the current number equals the original value,
                  // double the original and continue checking
                  if (original == n) {
                        original *= 2;
                  }
            }

            // Return the final doubled value of original
            return original;
      }
}
