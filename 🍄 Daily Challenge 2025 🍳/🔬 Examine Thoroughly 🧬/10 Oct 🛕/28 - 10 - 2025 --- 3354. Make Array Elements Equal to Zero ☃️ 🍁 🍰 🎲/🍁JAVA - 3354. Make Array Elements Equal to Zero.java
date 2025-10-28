//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3354

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public int countValidSelections(int[] nums) {
            int selections = 0;
            int left = 0, right = 0;

            // Calculate total sum for right-side initialization
            for (int num : nums)
                  right += num;

            for (int i = 0; i < nums.length; i++) {
                  if (nums[i] == 0) {
                        // Check nearly equal partition at zero positions
                        if (0 <= left - right && left - right <= 1)
                              selections++;
                        if (0 <= right - left && right - left <= 1)
                              selections++;
                  } else {
                        // Update running sums
                        left += nums[i];
                        right -= nums[i];
                  }
            }
            return selections;
      }
}
