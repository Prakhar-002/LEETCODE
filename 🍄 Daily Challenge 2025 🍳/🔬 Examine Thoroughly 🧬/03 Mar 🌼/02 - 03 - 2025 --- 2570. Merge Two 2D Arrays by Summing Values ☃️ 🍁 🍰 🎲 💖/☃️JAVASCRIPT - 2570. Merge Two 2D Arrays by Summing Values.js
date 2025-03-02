//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2570

// ? ⌚ Time complexity ➺ O(n + m + k log k) 👉🏻  n = len(nums1) m = len(nums2)

// ? 🧺 Space complexity ➺ O(n + m)          👉🏻 k = No.of unique Ids

var mergeArrays = function (nums1, nums2) {
      // Map to store the sum of values for each unique ID
      const idToSum = new Map();

      // Process first array and add values to the corresponding IDs
      for (const [id, value] of nums1) {
            idToSum.set(id, (idToSum.get(id) || 0) + value);
      }

      // Process second array and add values to the corresponding IDs
      for (const [id, value] of nums2) {
            idToSum.set(id, (idToSum.get(id) || 0) + value);
      }

      // Create result array to store the merged arrays
      const mergedArray = [];

      // Collect and sort the IDs
      const sortedIds = Array.from(idToSum.keys()).sort((a, b) => a - b);

      // Prepare the final merged result
      for (const id of sortedIds) {
            mergedArray.push([id, idToSum.get(id)]);
      }

      // Return the merged array
      return mergedArray;
};


//!----------------------------------------------------------------------------------------------------------

// ? ⌚ Time complexity ➺ O(n + m)   👉🏻  n = len(nums1) 

// ? 🧺 Space complexity ➺ O(n + m)  👉🏻 m = len(nums2)

var mergeArrays = function (nums1, nums2) {
      // Lengths of both arrays
      let n = nums1.length, m = nums2.length;

      // Pointers for both arrays
      let i = 0, j = 0;

      // Result array to store merged arrays
      const mergedArray = [];

      // Merge process using two-pointer technique
      while (i < n && j < m) {
            if (nums1[i][0] === nums2[j][0]) {
                  // Same ID - add sum of values
                  mergedArray.push([nums1[i][0], nums1[i][1] + nums2[j][1]]);
                  i++;
                  j++;
            } else if (nums1[i][0] < nums2[j][0]) {
                  // nums1 ID is smaller - add nums1 directly
                  mergedArray.push(nums1[i]);
                  i++;
            } else {
                  // nums2 ID is smaller - add nums2 directly
                  mergedArray.push(nums2[j]);
                  j++;
            }
      }

      // Add remaining elements from nums1
      while (i < n) {
            mergedArray.push(nums1[i]);
            i++;
      }

      // Add remaining elements from nums2
      while (j < m) {
            mergedArray.push(nums2[j]);
            j++;
      }

      return mergedArray;
};
