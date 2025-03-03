//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2161

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(1)

//* One Pass 

var pivotArray = function (nums, pivot) {
      // Step 1: Find the length of the input array
      const N = nums.length;

      // Step 2: Initialize two pointers to handle placing elements
      // 'lessPtr' will place numbers smaller than pivot (from the left side)
      let lessPtr = 0;

      // 'greaterPtr' will place numbers greater than pivot (from the right side)
      let greaterPtr = N - 1;

      // Step 3: Create the result array (same size as nums), initially filled with zeros
      const partitionArr = new Array(N).fill(0);

      // Step 4: First pass to process elements and categorize them into:
      //        - numbers smaller than pivot (placed at the beginning)
      //        - numbers greater than pivot (placed at the end)
      //        - numbers equal to pivot will be handled later
      // This pass uses two indices simultaneously: 
      // i scans from left to right and j scans from right to left
      for (let i = 0, j = N - 1; i < N && j >= 0; i++, j--) {

            // If nums[i] is smaller than pivot, place it at 'lessPtr' position
            if (nums[i] < pivot) {
                  partitionArr[lessPtr++] = nums[i];
            }

            // If nums[j] is greater than pivot, place it at 'greaterPtr' position
            if (nums[j] > pivot) {
                  partitionArr[greaterPtr--] = nums[j];
            }
      }

      // Step 5: After the first pass, the middle section (between lessPtr and greaterPtr)
      //         should contain all values equal to pivot
      // We fill all those middle positions with the pivot itself
      while (lessPtr <= greaterPtr) {
            partitionArr[lessPtr++] = pivot;
      }

      // Step 6: Return the fully partitioned array
      return partitionArr;
};


//!----------------------------------------------------------

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(1)

//* 3 iteration

var pivotArray = function (nums, pivot) {
      // Allocate space for result array
      const N = nums.length;
      const result = new Array(N);

      // Index to track position for insertion
      let index = 0;

      // Step 1: Add all numbers smaller than pivot to result array
      for (let i = 0; i < N; i++) {
            if (nums[i] < pivot) {
                  result[index++] = nums[i];
            }
      }

      // Step 2: Add all numbers equal to pivot to result array
      for (let i = 0; i < N; i++) {
            if (nums[i] == pivot) {
                  result[index++] = nums[i];
            }
      }

      // Step 3: Add all numbers greater than pivot to result array
      for (let i = 0; i < N; i++) {
            if (nums[i] > pivot) {
                  result[index++] = nums[i];
            }
      }

      // Return the rearranged array
      return result;
};


//!----------------------------------------------------------

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(n)

//* 3 Arrays (less, equal, greater)

var pivotArray = function (nums, pivot) {
      // Array to store numbers less than pivot
      const less = [];
      // Array to store numbers equal to pivot
      const equal = [];
      // Array to store numbers greater than pivot
      const greater = [];

      // Iterate through each number in nums
      for (const n of nums) {
            if (n < pivot) {
                  less.push(n); // Add to 'less' if smaller than pivot
            } else if (n === pivot) {
                  equal.push(n); // Add to 'equal' if equal to pivot
            } else {
                  greater.push(n); // Add to 'greater' if larger than pivot
            }
      }

      // Combine all arrays and return the result
      return [...less, ...equal, ...greater];
};
