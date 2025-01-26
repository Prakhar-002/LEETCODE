//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 88

//? ⌚ Time complexity ➺ O(n + m)

//? 🧺 Space complexity ➺ O(1)

var merge = function (nums1, m, nums2, n) {
      // Initialize pointers for nums1, nums2, and the merged array
      let i = m - 1;  // Pointer for the last element in nums1's initial part
      let j = n - 1;  // Pointer for the last element in nums2
      let k = m + n - 1;  // Pointer for the last position in nums1's total size

      // Merge nums1 and nums2 from the end
      while (j >= 0 && i >= 0) {
            if (nums1[i] < nums2[j]) {
                  nums1[k] = nums2[j];
                  j--;  // Move nums2 pointer left
            } else {
                  nums1[k] = nums1[i];
                  i--;  // Move nums1 pointer left
            }
            k--;  // Move the merged pointer left
      }

      // If there are remaining elements in nums2, copy them into nums1
      while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
      }

      // Remaining elements in nums1 are already in place
}