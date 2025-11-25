//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public int[] shuffle(int[] nums, int n) {
            int l = 0, r = nums.length / 2;
            int[] res = new int[nums.length];
            int idx = 0;

            // Interleave elements from left and right halves
            while (r < nums.length) {
                  res[idx++] = nums[l++];
                  res[idx++] = nums[r++];
            }

            return res;
      }
}
