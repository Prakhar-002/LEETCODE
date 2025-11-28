//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.2 Q2

// ? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(n)

var kSmallestPairs = function (nums1, nums2, k) {
      // Handle edge case: return empty array if either input is empty
      if (!nums1.length || !nums2.length) {
            return [];
      }

      // Simulate min-heap using array: stores [sum, index_i, index_j]
      // Smallest sum will be at index 0 after sorting
      const heap = [];

      // Set tracks visited pairs as strings "i,j" to prevent duplicates
      const visited = new Set();

      // Initialize with smallest possible pair: nums1[0] + nums2[0]
      heap.push([nums1[0] + nums2[0], 0, 0]);
      visited.add("0,0");  // Mark starting position as visited

      const result = [];  // Store k smallest pairs

      // Continue until we find k pairs or no more candidates
      while (heap.length && result.length < k) {
            // heap.shift() removes smallest element (min-heap behavior)
            const [sum, i, j] = heap.shift();

            // Add current pair to result (we store actual values, not sum)
            result.push([nums1[i], nums2[j]]);

            // Expand right: try next element in nums2 (same row i, column j+1)
            if (j + 1 < nums2.length) {
                  const nextKey = `${i},${j + 1}`;
                  if (!visited.has(nextKey)) {
                        visited.add(nextKey);
                        // Push candidate pair and maintain heap property
                        heap.push([nums1[i] + nums2[j + 1], i, j + 1]);
                        heap.sort((a, b) => a[0] - b[0]);  // O(n log n) heapify
                  }
            }

            // Expand down: try next element in nums1 (row i+1, same column j)
            if (i + 1 < nums1.length) {
                  const nextKey = `${i + 1},${j}`;
                  if (!visited.has(nextKey)) {
                        visited.add(nextKey);
                        // Push candidate pair and maintain heap property
                        heap.push([nums1[i + 1] + nums2[j], i + 1, j]);
                        heap.sort((a, b) => a[0] - b[0]);  // O(n log n) heapify
                  }
            }
      }

      return result;
};
