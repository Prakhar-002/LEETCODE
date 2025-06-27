#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2040

#? ⌚ Time complexity ➺ O(n1 log n2 * log C) 👉🏻  n1 = len(nums1)

#? 🧺 Space complexity ➺ O(1) -> n2 = len(nums2)

class Solution:
      # Helper function: Counts how many elements in nums2 when multiplied by x1 are <= v
      def f(self, nums2: List[int], x1: int, v: int) -> int:
            if x1 > 0:
                  # If x1 > 0: nums2[j] <= v / x1 → use bisect_right for upper bound
                  return bisect_right(nums2, v // x1)
            elif x1 < 0:
                  # If x1 < 0: nums2[j] >= ceil(v / x1) → use bisect_left after transforming
                  return len(nums2) - bisect_left(nums2, -(-v // x1))
            else:
                  # If x1 == 0: 0 * nums2[j] = 0 → all products are 0
                  return len(nums2) if v >= 0 else 0

      def kthSmallestProduct(self, nums1: List[int], nums2: List[int], k: int) -> int:
            n1 = len(nums1)
            left, right = -(10**10), 10**10  # Reasonable product boundaries for binary search

            while left <= right:
                  mid = (left + right) // 2
                  count = 0

                  # Count total products <= mid
                  for i in range(n1):
                        count += self.f(nums2, nums1[i], mid)

                  # Binary search: find the smallest value such that at least k products ≤ it
                  if count < k:
                        left = mid + 1
                  else:
                        right = mid - 1

            return left
