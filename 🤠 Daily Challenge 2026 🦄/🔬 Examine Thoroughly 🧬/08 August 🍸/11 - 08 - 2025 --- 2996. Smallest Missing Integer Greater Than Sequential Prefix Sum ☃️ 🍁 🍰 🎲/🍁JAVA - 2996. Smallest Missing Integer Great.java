// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2996

// ? ⌚ Time complexity ➺ O(n) 👉🏻 n = len(nums)

// ? 🧺 Space complexity ➺ O(n)

import java.util.HashSet;
import java.util.Set;

class Solution {
      public int missingInteger(int[] nums) {
            // Store all elements in a HashSet for fast O(1) lookup
            Set<Integer> numsSet = new HashSet<>();
            for (int num : nums) {
                  numsSet.add(num);
            }

            // Initialize seq with the first element of the array
            int seq = nums[0];

            // Traverse and calculate the sum of the longest sequential prefix
            for (int j = 1; j < nums.length; j++) {
                  if (nums[j] == nums[j - 1] + 1) {
                        seq += nums[j];
                  } else {
                        break;
                  }
            }

            // Increment seq until we find a value not contained in numsSet
            while (numsSet.contains(seq)) {
                  seq++;
            }

            return seq;
      }
}