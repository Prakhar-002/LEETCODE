#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 4

# ? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums1 + nums2)

# ? 🧺 Space complexity ➺ O(1)

class Solution:
      def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
            # Step 1: Merge the two sorted arrays
            merged = nums1 + nums2  # Combine both lists

            # Step 2: Sort the merged array to find the correct order
            merged.sort()  # Sorting takes O(n log n)

            # Step 3: Find the middle index
            m = len(merged) // 2

            # Step 4: Return the median based on even or odd length
            return (
                  float(merged[m])                     # If odd length, return the middle element
                  if len(merged) % 2 != 0
                  else (merged[m] + merged[m - 1]) / 2  # If even, return average of middle two
            )

