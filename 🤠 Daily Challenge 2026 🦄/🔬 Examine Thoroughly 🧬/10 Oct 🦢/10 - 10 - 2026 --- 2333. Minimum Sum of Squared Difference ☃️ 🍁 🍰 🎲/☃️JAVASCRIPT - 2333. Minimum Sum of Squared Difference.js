//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2333

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = max_diff

//? 🧺 Space complexity ➺ O(n)

/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @param {number} k1
 * @param {number} k2
 * @return {number}
 */
var minSumSquareDiff = function(nums1, nums2, k1, k2) {
      const n = nums1.length;
      const diff = new Int32Array(n);
      let maxDiff = 0;

      // Calculate absolute differences and find the max difference
      for (let i = 0; i < n; i++) {
            diff[i] = Math.abs(nums1[i] - nums2[i]);
            if (diff[i] > maxDiff) {
                  maxDiff = diff[i];
            }
      }

      // countDiff[d] tracks the frequency of difference d
      const countDiff = new Int32Array(maxDiff + 1);
      for (let i = 0; i < n; i++) {
            countDiff[diff[i]]++;
      }

      // Total operations budget across both arrays
      let K = k1 + k2;

      // Greedily decrement elements with the largest differences
      for (let currDiff = maxDiff; currDiff > 0 && K > 0; currDiff--) {
            const countOps = Math.min(countDiff[currDiff], K);

            countDiff[currDiff] -= countOps;
            countDiff[currDiff - 1] += countOps;
            K -= countOps;
      }

      // Sum the squared values of all remaining differences
      let result = 0;
      for (let d = 1; d <= maxDiff; d++) {
            result += countDiff[d] * d * d;
      }

      return result;
};