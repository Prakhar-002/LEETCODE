#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 4

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums1 + nums2)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
            # Get lengths and total length
            m, n = len(nums1), len(nums2)
            total_len = m + n

            # Pointers for nums1 and nums2
            p1, p2 = 0, 0

            # Variables to store the two middle elements
            # 'prev' will be the element just before the median position
            # 'curr' will be the element at the median position
            prev, curr = -1, -1

            # We only need to iterate up to the middle of the combined array
            for _ in range(total_len // 2 + 1):
                  # Before we find the next 'curr', the old 'curr' becomes 'prev'
                  prev = curr

                  # Determine the smaller element between nums1[p1] and nums2[p2]
                  # We must also handle cases where one of the pointers has reached the end of its array.

                  # Case 1: p1 is out of bounds, so we must take from nums2
                  if p1 >= m:
                        curr = nums2[p2]
                        p2 += 1
                  # Case 2: p2 is out of bounds, so we must take from nums1
                  elif p2 >= n:
                        curr = nums1[p1]
                        p1 += 1
                  # Case 3: Both pointers are in bounds, take the smaller element
                  elif nums1[p1] < nums2[p2]:
                        curr = nums1[p1]
                        p1 += 1
                  else:
                        curr = nums2[p2]
                        p2 += 1

            # After the loop, 'curr' holds the median element for odd length,
            # and 'prev' and 'curr' are the two middle elements for even length.

            # If total length is even
            if total_len % 2 == 0:
                  return (prev + curr) / 2.0
            # If total length is odd
            else:
                  return float(curr)
