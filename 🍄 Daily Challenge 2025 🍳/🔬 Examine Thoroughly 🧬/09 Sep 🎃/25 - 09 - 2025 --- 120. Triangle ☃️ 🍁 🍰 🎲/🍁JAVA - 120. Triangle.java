//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 120

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.List;

class Solution {
      public int minimumTotal(List<List<Integer>> triangle) {
            // Initialize DP array of size triangle height + 1
            int n = triangle.size();
            int[] dp = new int[n + 1];

            // Start from the bottom row and work upwards
            for (int row = n - 1; row >= 0; row--) {
                  List<Integer> tri = triangle.get(row);
                  for (int i = 0; i < tri.size(); i++) {
                        // For each element, pick the minimum of the two adjacent values below
                        dp[i] = tri.get(i) + Math.min(dp[i], dp[i + 1]);
                  }
            }

            // The top of the triangle now contains the minimum path sum
            return dp[0];
      }
}
