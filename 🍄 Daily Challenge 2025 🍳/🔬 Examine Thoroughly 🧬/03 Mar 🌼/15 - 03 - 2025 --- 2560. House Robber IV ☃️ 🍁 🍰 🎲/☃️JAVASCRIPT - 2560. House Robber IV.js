//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2560

// ? ⌚ Time complexity ➺ O(n log m) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(1)      👉🏻  m = max(nums) - min(nums)

// Helper function to check if we can rob `k` houses
// without robbing two consecutive houses when the max house value is `maxRobValue`
var canRobHouses = function (nums, maxRobValue, k) {
      let i = 0;
      let housesRobbed = 0; 

      while (i < nums.length) {
            // If the current house value is within `maxRobValue`, rob it and skip the next house
            if (nums[i] <= maxRobValue) {
                  i += 2;
                  housesRobbed++;
            } else {
                  i += 1; // Skip to the next house
            }

            // If we have robbed `k` houses, we can return early
            if (housesRobbed === k) {
                  break;
            }
      }

      return housesRobbed === k; // Check if we successfully robbed `k` houses
}

var minCapability = function (nums, k) {
      let minRobCapability = 0; // Stores the minimum max capability needed to rob `k` houses
      let l = Math.min(...nums);
      let r = Math.max(...nums);

      // Perform binary search to find the minimal max house value we can rob
      while (l <= r) {
            let m = Math.floor((l + r) / 2);

            if (canRobHouses(nums, m, k)) { // Check if it's possible to rob `k` houses with this max value
                  minRobCapability = m; // Update the result
                  r = m - 1; // Try to minimize further
            } else {
                  l = m + 1; // Increase capability limit
            }
      }
      return minRobCapability;
}

