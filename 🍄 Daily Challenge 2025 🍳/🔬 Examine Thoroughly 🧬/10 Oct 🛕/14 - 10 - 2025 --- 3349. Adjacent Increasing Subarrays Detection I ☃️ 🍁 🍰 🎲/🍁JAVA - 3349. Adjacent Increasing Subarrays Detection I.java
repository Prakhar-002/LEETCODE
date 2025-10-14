//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3349

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public boolean hasIncreasingSubarrays(List<Integer> nums, int k) {
            int knew = k - 1; // Number of required consecutive increasing pairs

            // If k is 1, trivial case - always True
            if (knew == 0) {
                  return true;
            }

            // Iterate through array from k+1 to end
            for (int i = k + 1; i < nums.size(); i++) {
                  // Check if pairs at (i-1, i) and (i-k-1, i-k) are increasing
                  if (nums.get(i) > nums.get(i - 1) && nums.get(i - k) > nums.get(i - k - 1)) {
                        knew--; // Found valid consecutive increasing pair
                  } else {
                        knew = k - 1; // Reset count if pairs break condition
                  }

                  // If found all required pairs, return true
                  if (knew == 0) {
                        return true;
                  }
            }

            // If loop ends without finding all pairs, return false
            return false;
      }
}
