//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3125

//? ⌚ Time complexity ➺ O(n + q) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)  👉🏻 q = len(queries)

class Solution {
      public boolean[] isArraySpecial(int[] nums, int[][] queries) {
            int n = nums.length;  // Length of the array
            int prevParity = nums[0] & 1;  // Parity of the first element
            int[] consecutiveSameParity = new int[n];  // Tracks consecutive elements with the same parity
            int consecutiveCount = 0;  // Counter for consecutive elements with the same parity

            // Step 1: Precompute consecutive parity information
            for (int i = 0; i < n; i++) {
                  int currentParity = nums[i] & 1;
                  if (currentParity == prevParity) {
                        consecutiveCount++;
                  }
                  consecutiveSameParity[i] = consecutiveCount;
                  prevParity = currentParity;
            }

            // Step 2: Process each query
            boolean[] results = new boolean[queries.length];  // Array to store results for each query
            for (int i = 0; i < queries.length; i++) {
                  int startIndex = queries[i][0];
                  int endIndex = queries[i][1];
                  results[i] = consecutiveSameParity[startIndex] == consecutiveSameParity[endIndex];
            }

            return results;  // Return the boolean array of results
      }
}
