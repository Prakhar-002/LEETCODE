//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2033

// ? ⌚ Time complexity ➺ O(n * m log n * m) 👉🏻  n = len(grid)

// ? 🧺 Space complexity ➺ O(n * m)         👉🏻  m = len(grid[0])

import java.util.*;

class Solution {
      public int minOperations(int[][] grid, int x) {
            // Initialize total sum of elements
            int total = 0;

            // Iterate over each row in the grid
            for (int[] row : grid) {
                  for (int n : row) {
                        total += n; // Add element to total sum

                        // Check if all elements have the same remainder when divided by x
                        if (n % x != grid[0][0] % x) {
                              return -1; // If not, return -1 since equalizing is impossible
                        }
                  }
            }

            // Flatten the grid into a 1D list
            List<Integer> nums = new ArrayList<>();
            for (int[] row : grid) {
                  for (int n : row) {
                        nums.add(n);
                  }
            }

            // Sort the flattened list to find the median efficiently
            Collections.sort(nums);

            // Initialize prefix sum and minimum operations result
            int prefixSum = 0;
            int minOperations = Integer.MAX_VALUE;

            // Iterate over sorted elements to compute minimum operations
            for (int i = 0; i < nums.size(); i++) {
                  // Cost to adjust all elements before index 'i' to nums[i]
                  int costLeft = nums.get(i) * i - prefixSum;

                  // Cost to adjust all elements after index 'i' to nums[i]
                  int costRight = total - prefixSum - (nums.get(i) * (nums.size() - i));

                  // Compute the total operations needed
                  int operation = (costLeft + costRight) / x;

                  // Store the minimum operations required
                  minOperations = Math.min(minOperations, operation);

                  // Update prefix sum with the current element
                  prefixSum += nums.get(i);
            }

            return minOperations; // Return the minimum number of operations needed
      }
}
