//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1317

//? ⌚ Time complexity ➺ O(n log n)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int[] getNoZeroIntegers(int n) {
            // Iterate over possible values for A from 1 to n-1
            for (int A = 1; A < n; A++) {
                  int B = n - A; // Calculate B so that A + B = n

                  // Check whether both A and B have no '0' in their digits
                  if (!String.valueOf(A).contains("0") &&
                              !String.valueOf(B).contains("0")) {
                        return new int[] { A, B }; // Return the pair [A, B] if both are valid
                  }
            }

            return new int[] {}; // Return empty array if not found
      }
}
