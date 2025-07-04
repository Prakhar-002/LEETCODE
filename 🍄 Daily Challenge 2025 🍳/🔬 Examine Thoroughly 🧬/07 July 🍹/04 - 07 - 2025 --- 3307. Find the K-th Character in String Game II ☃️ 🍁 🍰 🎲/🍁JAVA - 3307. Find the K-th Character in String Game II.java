//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3307

//? ⌚ Time complexity ➺ O(log k)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public char kthCharacter(long k, int[] operations) {
            int ans = 0; // This will track how many 1s we pass during traversal

            // Traverse from node `k` to the root (node 1) in the conceptual binary tree
            while (k != 1) {
                  // Find the most significant bit position (0-based)
                  int t = 63 - Long.numberOfLeadingZeros(k); // log2(k)

                  // If k is an exact power of 2, adjust t to point to the previous level
                  if ((1L << t) == k) {
                        t -= 1;
                  }

                  // Move to the parent of the current node in the tree
                  k -= 1L << t;

                  // If operation at level t is 1, increment the counter
                  if (operations[t] == 1) {
                        ans++;
                  }
            }

            // Convert the number of 1s encountered to a lowercase character (a-z)
            return (char) ('a' + (ans % 26));
      }
}
