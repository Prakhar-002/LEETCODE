//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 4

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums1 + nums2)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public double findMedianSortedArrays(int[] nums1, int[] nums2) {
            // Step 1: Create a merged array with size equal to sum of both arrays
            int[] merged = new int[nums1.length + nums2.length];

            // Step 2: Copy elements of nums1 and nums2 into merged
            int idx = 0;
            for (int num : nums1) {
                  merged[idx++] = num;
            }
            for (int num : nums2) {
                  merged[idx++] = num;
            }

            // Step 3: Sort the merged array
            Arrays.sort(merged);

            // Step 4: Find the median index
            int m = merged.length / 2;

            // Step 5: If odd length, return middle element as double
            if (merged.length % 2 != 0) {
                  return (double) merged[m];
            }

            // Step 6: If even length, return average of middle two elements
            return (merged[m - 1] + merged[m]) / 2.0;
      }
}
