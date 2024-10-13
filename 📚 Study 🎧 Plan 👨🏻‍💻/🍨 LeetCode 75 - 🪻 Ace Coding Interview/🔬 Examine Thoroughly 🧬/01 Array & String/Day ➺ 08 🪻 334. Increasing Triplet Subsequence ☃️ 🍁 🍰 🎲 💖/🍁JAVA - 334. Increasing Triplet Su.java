//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 334

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = nums.length

//? 🧺 Space complexity ➺ O(1)

class Solution {
      // Define a method 'increasingTriplet' that takes 'nums' as an array of integers
      public boolean increasingTriplet(int[] nums) {
            // Check if the array is null or has fewer than 3 elements; no triplet is possible
            if (nums == null || nums.length < 3) {
                  return false;  // Return false if the condition is met
            }

            // Initialize 'a' to maximum integer value (this will track the smallest number)
            int a = Integer.MAX_VALUE;
            // Initialize 'b' to maximum integer value (this will track the second smallest number)
            int b = Integer.MAX_VALUE;

            // Iterate over each number in the array
            for (int num : nums) {
                  // If the current number is smaller than or equal to 'a', update 'a'
                  if (num <= a) {
                        a = num;
                  // Else if the current number is smaller than or equal to 'b', update 'b'
                  } else if (num <= b) {
                        b = num;
                  // If the current number is greater than both 'a' and 'b', return true (triplet found)
                  } else {
                        return true;
                  }
            }

            // If the loop completes without finding an increasing triplet, return false
            return false;
      }
}

