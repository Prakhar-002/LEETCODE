//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3577

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(complexity)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int countPermutations(int[] complexity) {
            int n = complexity.length;

            // Step 1: Check if array is strictly increasing from index 0
            // If complexity[i] <= complexity[0] for any i >= 1, return 0
            for (int i = 1; i < n; i++) {
                  if (complexity[i] <= complexity[0]) {
                        return 0;
                  }
            }

            // Step 2: If valid, answer is (n-1)! % (10^9 + 7)
            // First element must stay at position 0, others can permute freely
            final int MOD = 1000000007;
            long ans = 1;

            // Calculate factorial: 1 * 2 * 3 * ... * (n-1)
            for (int i = 2; i < n; i++) {
                  ans = (ans * i) % MOD;
            }

            return (int) ans; 
      }
}
