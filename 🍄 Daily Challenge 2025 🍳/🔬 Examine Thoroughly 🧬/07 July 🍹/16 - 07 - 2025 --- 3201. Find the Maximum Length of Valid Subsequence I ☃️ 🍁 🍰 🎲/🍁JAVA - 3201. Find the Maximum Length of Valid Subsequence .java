//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3201

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1) 

class Solution {
      public int maximumLength(int[] nums) {
            int maxLen = 0; // Stores the maximum subsequence length

            // Try all 4 parity patterns: [even, even], [even, odd], [odd, even], [odd, odd]
            int[][] patterns = { {0, 0}, {0, 1}, {1, 0}, {1, 1} };

            for (int[] pattern : patterns) {
                  int count = 0; // Current subsequence length

                  for (int num : nums) {
                        // Check parity: 0 = even, 1 = odd
                        int parity = num % 2;

                        // We use (count % 2) to alternate between pattern[0] and pattern[1]
                        if (parity == pattern[count % 2]) {
                              count++; // Extend the subsequence
                        }
                  }

                  maxLen = Math.max(maxLen, count); // Update the result
            }

            return maxLen; // Return the maximum subsequence length found
      }
}
