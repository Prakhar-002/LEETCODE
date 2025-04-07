//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 368

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*; 

class Solution {
      public List<Integer> largestDivisibleSubset(int[] nums) {
            // Sort the input array to ensure divisibility condition holds for earlier elements
            Arrays.sort(nums);
            int n = nums.length;

            // dp[i] will store the length of the largest divisible subset ending at nums[i]
            int[] dp = new int[n];

            // parent[i] stores the index of the previous number in the subset ending at i
            int[] parent = new int[n];

            // Initialize all dp values to 1 and parent to -1
            Arrays.fill(dp, 1);
            Arrays.fill(parent, -1);

            int maxLen = 0;           // To track the length of the longest subset found
            int maxIndex = -1;       // To track the ending index of the longest subset

            // Loop through each number to build dp and parent
            for (int i = 0; i < n; i++) {
                  // Compare current number with all previous numbers
                  for (int j = 0; j < i; j++) {
                        // If divisible and increases the subset length
                        if (nums[i] % nums[j] == 0 && dp[j] + 1 > dp[i]) {
                              dp[i] = dp[j] + 1;     // Update length
                              parent[i] = j;         // Update parent
                        }
                  }

                  // Update maxLen and maxIndex if current subset is the largest
                  if (dp[i] > maxLen) {
                        maxLen = dp[i];
                        maxIndex = i;
                  }
            }

            // Reconstruct the result by following parent links
            List<Integer> resSet = new ArrayList<>();
            while (maxIndex != -1) {
                  resSet.add(nums[maxIndex]);     // Add current element to result
                  maxIndex = parent[maxIndex];    // Move to parent element
            }

            return resSet; // Return the largest divisible subset
      }
}
