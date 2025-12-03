
//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1732

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(gain)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int largestAltitude(int[] gain) {
            // Initialize the highest altitude to negative infinity
            int highAltitude = Integer.MIN_VALUE;

            // Initialize the current altitude to 0
            int curSum = 0;

            // Iterate through the gain array to calculate altitudes
            for (int n : gain) {
                  // Add the current gain to the cumulative altitude
                  curSum += n;

                  // Update the highest altitude encountered so far
                  highAltitude = Math.max(highAltitude, curSum);
            }

            // If the highest altitude is positive, return it; otherwise, return 0
            return Math.max(highAltitude, 0);
      }
}
