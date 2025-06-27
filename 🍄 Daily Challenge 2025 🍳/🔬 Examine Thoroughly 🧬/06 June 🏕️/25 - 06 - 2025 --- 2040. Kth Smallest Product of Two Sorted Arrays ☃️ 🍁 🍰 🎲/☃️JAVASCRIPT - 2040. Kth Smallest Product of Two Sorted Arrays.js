//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2040

//? ⌚ Time complexity ➺ O(n1 log n2 * log C) 👉🏻  n1 = len(nums1)

//? 🧺 Space complexity ➺ O(1) -> n2 = len(nums2)

// Helper function to count how many products nums1[i] * nums2[j] are <= v
var f = function (nums2, x1, v) {
      let n2 = nums2.length;
      let left = 0,
            right = n2 - 1;

      // Binary search on nums2
      while (left <= right) {
            let mid = Math.floor((left + right) / 2);
            let prod = nums2[mid] * x1;

            // If x1 >= 0: we want prod <= v
            // If x1 < 0: since product decreases as nums2[j] increases, 
            // we want prod > v to reduce the search range
            if ((x1 >= 0 && prod <= v) || (x1 < 0 && prod > v)) {
                  left = mid + 1;
            } else {
                  right = mid - 1;
            }
      }

      // For positive x1, 'left' is count of products <= v
      // For negative x1, 'n2 - left' is count of products <= v (reverse order)
      return x1 >= 0 ? left : n2 - left;
};

var kthSmallestProduct = function (nums1, nums2, k) {
      let n1 = nums1.length;

      // Binary search over product value range from -1e10 to 1e10
      let left = -1e10,
            right = 1e10;

      while (left <= right) {
            let mid = Math.floor((left + right) / 2);

            // Count how many products are <= mid
            let count = 0;
            for (let i = 0; i < n1; i++) {
                  count += f(nums2, nums1[i], mid);
            }

            // If count < k, we need a larger number
            if (count < k) {
                  left = mid + 1;
            } else {
                  right = mid - 1;
            }
      }

      // 'left' is the smallest number such that at least k products are <= left
      return left;
};
