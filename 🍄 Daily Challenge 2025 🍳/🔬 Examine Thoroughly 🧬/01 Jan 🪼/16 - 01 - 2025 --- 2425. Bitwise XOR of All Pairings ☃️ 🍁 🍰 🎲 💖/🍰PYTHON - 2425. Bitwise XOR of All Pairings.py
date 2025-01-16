#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2425

#? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(nums1)

#? 🧺 Space complexity ➺ O(1)    👉🏻  m = len(nums2)  

from typing import List

class Solution:
      # Helper function to compute XOR of all elements in the array
      def xor(self, nums):
            x = 0  # Initialize XOR accumulator to 0
            for n in nums:
                  x ^= n  # XOR each number with the accumulator
            return x  # Return the final XOR result

      def xorAllNums(self, nums1: List[int], nums2: List[int]) -> int:
            # Compute the lengths of nums1 and nums2
            len1, len2 = len(nums1), len(nums2)

            # Case 1: If both lengths are even, XOR of all pairs is 0
            if len1 % 2 == 0 and len2 % 2 == 0:
                  return 0

            # Case 2: If nums1 length is even, So XOR of all pairs is equivalent
            #         to XOR of all elements in nums1
            if len1 % 2 == 0:
                  return self.xor(nums1)

            # Case 3: If nums2 length is even, So XOR of all pairs is equivalent
            #         to XOR of all elements in nums2
            if len2 % 2 == 0:
                  return self.xor(nums2)

            # Case 4: If both lengths are odd, XOR of all pairs is the XOR of
            #         nums1's XOR and nums2's XOR
            return self.xor(nums1) ^ self.xor(nums2)
