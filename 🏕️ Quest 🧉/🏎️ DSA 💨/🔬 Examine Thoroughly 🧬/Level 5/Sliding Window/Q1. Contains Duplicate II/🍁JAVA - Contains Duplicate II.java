//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L5.2 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(k)

import java.util.*;

class Solution {
      public boolean containsNearbyDuplicate(int[] nums, int k) {
            // HashSet maintains elements within current sliding window
            Set<Integer> window = new HashSet<>();
            int l = 0;  // Left pointer

            for (int r = 0; r < nums.length; r++) {
                  // Shrink window if size exceeds k
                  if (r - l > k) {
                        window.remove(nums[l]);
                        l++;
                  }

                  // Check if current element already in window
                  if (window.contains(nums[r])) {
                        return true;  // Duplicate within k distance
                  }

                  // Add current element to window
                  window.add(nums[r]);
            }

            return false;
      }
}
