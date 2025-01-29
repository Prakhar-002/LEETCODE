#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 88

#? ⌚ Time complexity ➺ O(n + m)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def merge(self, nums1, m, nums2, n):
            # Initialize pointers for nums1, nums2, and the merged array
            i = m - 1  # Pointer for the last element in nums1's initial part
            j = n - 1  # Pointer for the last element in nums2
            k = m + n - 1  # Pointer for the last position in nums1's total size

            # Merge nums1 and nums2 from the end
            while j >= 0 and i >= 0:
                  if nums1[i] < nums2[j]:
                        # Place the larger element from nums2 into nums1
                        nums1[k] = nums2[j]
                        j -= 1  # Move nums2 pointer left
                  else:
                        # Place the larger element from nums1 into nums1
                        nums1[k] = nums1[i]
                        i -= 1  # Move nums1 pointer left
                  k -= 1  # Move the merged pointer left

            # If there are remaining elements in nums2, copy them into nums1
            while j >= 0:
                  nums1[k] = nums2[j]
                  j -= 1
                  k -= 1

            # Remaining elements in nums1 are already in place
