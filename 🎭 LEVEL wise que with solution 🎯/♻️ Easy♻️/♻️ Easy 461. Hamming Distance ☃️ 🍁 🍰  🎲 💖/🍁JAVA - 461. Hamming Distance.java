//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 461

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = 32

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int hammingDistance(int x, int y) {
            // Step 1: XOR to get differing bits
            int d = x ^ y;

            // Step 2: Count of differing bits
            int count = 0;

            // Step 3: Brian Kernighan's algorithm to count 1-bits
            while (d != 0) {
                  // Remove the lowest set bit
                  d &= d - 1;

                  // Increment counter
                  count++;
            }

            // Step 4: Return the count
            return count;
      }
}
