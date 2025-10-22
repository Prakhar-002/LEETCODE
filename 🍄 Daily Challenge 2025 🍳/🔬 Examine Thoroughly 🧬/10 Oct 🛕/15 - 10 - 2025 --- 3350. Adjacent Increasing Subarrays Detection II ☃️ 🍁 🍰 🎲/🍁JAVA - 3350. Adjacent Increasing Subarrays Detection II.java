//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3350

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {

      /**
       * Calculates the maximum possible overlap or length of adjacent increasing subarrays.
       * The method identifies consecutive increasing segments in the array and keeps track of:
       *  - `cnt`: length of current increasing segment.
       *  - `precnt`: length of previous increasing segment.
       *  - `ans`: maximum possible minimum overlap or half-length found.
       *
       * @param nums List of integers representing the array.
       * @return The largest possible integer representing the maximum overlap of consecutive increasing subarrays.
       */
      public int maxIncreasingSubarrays(List<Integer> nums) {
            int n = nums.size();       // Total number of elements
            int cnt = 1;              // Length of current increasing subarray
            int precnt = 0;           // Length of previous increasing subarray
            int ans = 0;              // Stores the result (maximum overlap length)

            // Iterate over the array starting from the second element
            for (int i = 1; i < n; ++i) {
                  // If current number is greater than previous, continue increasing sequence
                  if (nums.get(i) > nums.get(i - 1)) {
                        ++cnt;
                  } else {
                        // Sequence breaks - save the previous subarray length
                        precnt = cnt;
                        // Reset counter for new potential increasing sequence
                        cnt = 1;
                  }

                  // Option 1: Overlapping consecutive increasing subarrays
                  // The overlap is the minimum of previous and current sequence lengths
                  ans = Math.max(ans, Math.min(precnt, cnt));

                  // Option 2: If a single long subarray can be divided in half as max valid answer
                  ans = Math.max(ans, cnt / 2);
            }

            // Return the maximum obtained overlap or divided half-length
            return ans;
      }
}
