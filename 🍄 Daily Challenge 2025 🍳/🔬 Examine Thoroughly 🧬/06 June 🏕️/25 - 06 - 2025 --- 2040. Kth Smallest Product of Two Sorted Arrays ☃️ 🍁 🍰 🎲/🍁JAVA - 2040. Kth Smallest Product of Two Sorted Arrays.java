//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2040

//? ⌚ Time complexity ➺ O(n1 log n2 * log C) 👉🏻  n1 = len(nums1)

//? 🧺 Space complexity ➺ O(1) -> n2 = len(nums2)

class Solution {
      // Helper function to count how many products nums1[i] * nums2[j] are <= v
      int f(int[] nums2, long x1, long v) {
            int n2 = nums2.length;
            int left = 0, right = n2 - 1;

            // Binary search in nums2 for number of elements such that nums1[i] * nums2[j]
            // <= v
            while (left <= right) {
                  int mid = (left + right) / 2;

                  // Calculate product
                  long prod = (long) nums2[mid] * x1;

                  // Two cases:
                  // 1. If x1 >= 0 and prod <= v → valid, move right to include more values
                  // 2. If x1 < 0 and prod > v → we are too big, move left
                  if ((x1 >= 0 && prod <= v) || (x1 < 0 && prod > v)) {
                        left = mid + 1;
                  } else {
                        right = mid - 1;
                  }
            }

            // Return count:
            // If x1 is non-negative: left is number of valid products ≤ v
            // If x1 is negative: n2 - left gives number of products ≤ v due to reverse
            // order
            return (x1 >= 0) ? left : n2 - left;
      }

      public long kthSmallestProduct(int[] nums1, int[] nums2, long k) {
            int n1 = nums1.length;

            // Binary search over the product value range [-1e10, 1e10]
            long left = -10000000000L, right = 10000000000L;

            while (left <= right) {
                  long mid = (left + right) / 2;

                  long count = 0;

                  // Count total number of products nums1[i] * nums2[j] <= mid
                  for (int i = 0; i < n1; i++) {
                        count += f(nums2, nums1[i], mid);
                  }

                  // If we have enough products <= mid, try smaller values
                  if (count < k) {
                        left = mid + 1;
                  } else {
                        right = mid - 1;
                  }
            }

            // 'left' is the smallest value such that there are at least k products ≤ left
            return left;
      }
}
