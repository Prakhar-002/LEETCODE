
#! https://github.com/Prakhar-002/LEETCODE


# Todo 📌 QUESTION NUMBER 4

class Solution:
      def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
            l = nums1 + nums2
            l.sort()
            i = len(l) // 2

            if len(l) % 2 != 0:
                  return float(l[i])
            else:
                  return (l[i] + l[i - 1]) / 2
