//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L5.1 Q2

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public int threeSumClosest(int[] nums, int target) {
            Arrays.sort(nums);                 // Sort the array for two-pointer technique
            int closestSum = nums[0] + nums[1] + nums[2];  // Initialize closest sum

            for (int i = 0; i < nums.length - 2; i++) {
                  int l = i + 1, r = nums.length - 1;     // Two pointers

                  while (l < r) {
                        int currentSum = nums[i] + nums[l] + nums[r];

                        // Update closestSum if currentSum closer to target
                        if (Math.abs(currentSum - target) < Math.abs(closestSum - target)) {
                              closestSum = currentSum;
                        }

                        if (currentSum < target) {
                              l++;  // Increase sum
                        } else if (currentSum > target) {
                              r--;  // Decrease sum
                        } else {
                              return currentSum;  // Exact match
                        }
                  }
            }

            return closestSum;
      }
}
