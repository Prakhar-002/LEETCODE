//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3875

//? ⌚ Time complexity ➺ O(1) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public boolean uniformArray(int[] nums1) {
            // It is always possible to make all elements uniform:
            // 1. If all elements have the same parity, take nums2[i] = nums1[i].
            // 2. If both even and odd numbers exist, we can make all elements odd
            // by setting nums2[i] = nums1[i] - odd_val for every even element.
            return true;
      }
}