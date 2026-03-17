//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 4

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums1 + nums2)

//? 🧺 Space complexity ➺ O(1)

var findMedianSortedArrays = function (nums1, nums2) {
      // Step 1: Merge both arrays
      let merged = nums1.concat(nums2);

      // Step 2: Sort the merged array
      merged.sort((a, b) => a - b);  // Ascending sort

      // Step 3: Find the median index
      let m = Math.floor(merged.length / 2);

      // Step 4: Return median depending on odd or even length
      if (merged.length % 2 !== 0) {
            return merged[m];  // If odd, return the middle element
      }

      // If even, return the average of the two middle elements
      return (merged[m - 1] + merged[m]) / 2;
};
