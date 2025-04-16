//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2179

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var goodTriplets = function (nums1, nums2) {
      const n = nums1.length;                        // Length of the input arrays
      let totalTriplets = 0;                         // Result variable to store final count

      const posInNums1 = Array(n);                   // Array to map value -> index in nums1
      for (let i = 0; i < n; i++) {
            posInNums1[nums1[i]] = i;                // Store index of each number in nums1
      }

      const transformed = Array(n);                  // Transformed version of nums2
      for (let i = 0; i < n; i++) {
            transformed[i] = posInNums1[nums2[i]];   // Replace each value with its index in nums1
      }

      const sorted = [];                             // Sorted array to keep elements we’ve seen (simulate SortedList)

      // Traverse transformed array in reverse
      for (let i = n - 1; i >= 0; i--) {
            const current = transformed[i];

            // Use binary search to find insertion index
            const insertPos = lowerBound(sorted, current);

            const countSmaller = insertPos;                    // Number of elements smaller than current
            const countGreater = sorted.length - insertPos;    // Number of elements greater than current

            // Apply the formula: countGreater * (current - countSmaller)
            totalTriplets += countGreater * (current - countSmaller);

            // Insert current into the sorted list at the correct position
            sorted.splice(insertPos, 0, current);              // Maintains sorted order
      }

      return totalTriplets;
};

/*
      ?Helper function to find the first index where target <= sorted[idx]
      ?Works like Python's bisect_left or lower_bound
 */
function lowerBound(arr, target) {
      let left = 0, right = arr.length;
      while (left < right) {
            let mid = Math.floor((left + right) / 2);
            if (arr[mid] < target) {
                  left = mid + 1;
            } else {
                  right = mid;
            }
      }
      return left;
}
