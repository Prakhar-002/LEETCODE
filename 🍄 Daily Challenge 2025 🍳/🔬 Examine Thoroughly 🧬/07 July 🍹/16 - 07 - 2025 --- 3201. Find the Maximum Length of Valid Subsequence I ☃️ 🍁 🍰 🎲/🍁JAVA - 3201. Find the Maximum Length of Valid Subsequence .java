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

//!----------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int maximumLength(int[] nums) {
            int n = nums.length;
            int oddCount = 0; // Count of odd numbers
            int evenCount = 0; // Count of even numbers
            int altCount = 1; // Count of alternating parity sequence
            int prev = nums[0]; // Track previous number for alternating check

            for (int i = 0; i < n; i++) {
                  // Count odds and evens
                  if (nums[i] % 2 == 1) {
                        oddCount++;
                  } else {
                        evenCount++;
                  }

                  // Check alternating parity sequence
                  if (i >= 1 && nums[i] % 2 != prev % 2) {
                        altCount++;
                        prev = nums[i];
                  }
            }

            // Return the maximum of odd count, even count, or alternating sequence
            return Math.max(Math.max(oddCount, evenCount), altCount);
      }
}
