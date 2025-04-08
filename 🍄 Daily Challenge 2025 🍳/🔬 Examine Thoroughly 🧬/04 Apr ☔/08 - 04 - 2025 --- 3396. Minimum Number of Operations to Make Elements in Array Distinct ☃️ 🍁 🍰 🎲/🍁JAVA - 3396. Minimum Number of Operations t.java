//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3396

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public int minimumOperations(int[] nums) {
            // Initialize a set to store unique elements from the end
            Set<Integer> unique_set = new HashSet<>();

            // Traverse the array from the end
            for (int i = nums.length - 1; i >= 0; i--) {
                  // If a duplicate is found, break the loop
                  if (unique_set.contains(nums[i])) {
                        break;
                  }

                  // Otherwise, add the number to the set
                  unique_set.add(nums[i]);
            }

            // Calculate the number of elements before the unique suffix
            int rem_len = nums.length - unique_set.size();

            // Calculate the minimum number of operations
            return (rem_len % 3 == 0) ? (rem_len / 3) : (rem_len / 3 + 1);
      }
}
