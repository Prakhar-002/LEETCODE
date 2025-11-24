//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1018

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public List<Boolean> prefixesDivBy5(int[] nums) {
            List<Boolean> res = new ArrayList<>();
            int prefix = 0;

            // Iterate through each bit in the array
            for (int n : nums) {
                  // Left shift prefix by 1 (multiply by 2), add current bit, and modulo 5
                  prefix = ((prefix << 1) + n) % 5;
                  // Append true if prefix divisible by 5, else false
                  res.add(prefix == 0);
            }

            return res;
      }
}
