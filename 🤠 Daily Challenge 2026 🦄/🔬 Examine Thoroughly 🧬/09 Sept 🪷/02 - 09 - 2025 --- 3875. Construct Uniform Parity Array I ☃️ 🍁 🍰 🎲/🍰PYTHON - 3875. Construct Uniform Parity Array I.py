#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3875

#? ⌚ Time complexity ➺ O(1) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def uniformArray(self, nums1: list[int]) -> bool:
            # If all numbers already share parity (all even or all odd), we can choose nums2[i] = nums1[i].
            # If nums1 has both odds and evens, we can make all elements odd:
            # keep odd numbers as nums1[i], and for any even number at index i,
            # subtract an odd number nums1[j] (since even - odd = odd).
            # Therefore, it is always possible to construct such an array.
            return True