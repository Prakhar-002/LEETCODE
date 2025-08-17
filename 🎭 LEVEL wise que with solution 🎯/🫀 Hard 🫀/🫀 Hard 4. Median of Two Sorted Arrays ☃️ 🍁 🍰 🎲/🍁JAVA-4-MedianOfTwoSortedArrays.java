//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 4

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums1 + nums2)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public double findMedianSortedArrays(int[] nums1, int[] nums2) {
            // Get lengths and total length
            int m = nums1.length;
            int n = nums2.length;
            int totalLen = m + n;

            // Pointers for nums1 and nums2
            int p1 = 0, p2 = 0;

            // Variables to store the two middle elements
            // 'prev' will be the element just before the median position
            // 'curr' will be the element at the median position
            int prev = -1, curr = -1;

            // We only need to iterate up to the middle of the combined array
            for (int i = 0; i <= totalLen / 2; i++) {
                  // Before we find the next 'curr', the old 'curr' becomes 'prev'
                  prev = curr;

                  // Determine the smaller element between nums1[p1] and nums2[p2].
                  // We must also handle cases where one of the pointers has reached the end of
                  // its array.

                  // Case 1: p1 is out of bounds, so we must take from nums2
                  if (p1 >= m) {
                        curr = nums2[p2];
                        p2++;
                        // Case 2: p2 is out of bounds, so we must take from nums1
                  } else if (p2 >= n) {
                        curr = nums1[p1];
                        p1++;
                        // Case 3: Both pointers are in bounds, take the smaller element
                  } else if (nums1[p1] < nums2[p2]) {
                        curr = nums1[p1];
                        p1++;
                  } else {
                        curr = nums2[p2];
                        p2++;
                  }
            }

            // After the loop, 'curr' holds the median element for odd length,
            // and 'prev' and 'curr' are the two middle elements for even length.

            // If total length is even
            if (totalLen % 2 == 0) {
                  return (prev + curr) / 2.0;
                  // If total length is odd
            } else {
                  return (double) curr;
            }
      }
}
