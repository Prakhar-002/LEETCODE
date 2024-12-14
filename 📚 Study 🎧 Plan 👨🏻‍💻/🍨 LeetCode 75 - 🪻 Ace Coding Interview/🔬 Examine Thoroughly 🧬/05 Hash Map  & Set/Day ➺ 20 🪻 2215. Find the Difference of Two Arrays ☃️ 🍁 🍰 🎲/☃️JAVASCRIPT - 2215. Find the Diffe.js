//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2215

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(nums) n1 = unique in nums1

//? 🧺 Space complexity ➺ O(n1, n2)  -> m = len(nums) n2 = unique in nums2

var findDifference = function(nums1, nums2) {
      // Create sets to store unique elements from both arrays
      let nums1Set = new Set(nums1);
      let nums2Set = new Set(nums2);

      // Find elements unique to nums1
      let uniqueToNums1 = Array.from(nums1Set).filter(num => !nums2Set.has(num));

      // Find elements unique to nums2
      let uniqueToNums2 = Array.from(nums2Set).filter(num => !nums1Set.has(num));

      // Return the result as an array of arrays
      return [uniqueToNums1, uniqueToNums2];
};
