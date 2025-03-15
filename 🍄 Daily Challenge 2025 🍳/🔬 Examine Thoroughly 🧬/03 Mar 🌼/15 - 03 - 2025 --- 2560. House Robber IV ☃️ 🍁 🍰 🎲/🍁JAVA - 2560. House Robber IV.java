//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2560

// ? ⌚ Time complexity ➺ O(n log m) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(1)      👉🏻  m = max(nums) - min(nums)

class Solution {
      // Helper function to check if we can rob `k` houses
      // without robbing two consecutive houses when the max house value is `maxRobValue`
      private boolean canRobHouses(int[] nums, int maxRobValue, int k) {
            int i = 0;
            int housesRobbed = 0;

            while (i < nums.length) {
                  // If the current house value is within `maxRobValue`, rob it and skip the next
                  // house
                  if (nums[i] <= maxRobValue) {
                        i += 2;
                        housesRobbed++;
                  } else {
                        i += 1; // Skip to the next house
                  }

                  // If we have robbed `k` houses, we can return early
                  if (housesRobbed == k) {
                        break;
                  }
            }

            return housesRobbed == k; // Check if we successfully robbed `k` houses
      }

      public int minCapability(int[] nums, int k) {
            int minRobCapability = 0; // Stores the minimum max capability needed to rob `k` houses
            int l = Integer.MAX_VALUE, r = Integer.MIN_VALUE;

            // Find the minimum and maximum house value
            for (int num : nums) {
                  l = Math.min(l, num);
                  r = Math.max(r, num);
            }

            // Perform binary search to find the minimal max house value we can rob
            while (l <= r) {
                  int m = (l + r) / 2;

                  if (canRobHouses(nums, m, k)) { // Check if it's possible to rob `k` houses with this max value
                        minRobCapability = m; // Update the result
                        r = m - 1; // Try to minimize further
                  } else {
                        l = m + 1; // Increase capability limit
                  }
            }
            return minRobCapability;
      }
}
