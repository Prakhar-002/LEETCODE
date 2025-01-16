//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2425

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(nums1)

//? 🧺 Space complexity ➺ O(1)    👉🏻  m = len(nums2)  

// Helper function to compute XOR of all elements in the array
var xor = function (nums) {
      let x = 0; // Initialize XOR accumulator to 0
      for (const n of nums) {
            x ^= n; // XOR each number with the accumulator
      }
      return x; // Return the final XOR result
}

var xorAllNums = function (nums1, nums2) {
      const len1 = nums1.length; // Get length of nums1
      const len2 = nums2.length; // Get length of nums2

      // Case 1: If both lengths are even, XOR of all pairs is 0
      if (len1 % 2 === 0 && len2 % 2 === 0) {
            return 0;
      }

      // Case 2: If nums1 length is even, XOR of all pairs is nums1's XOR
      if (len1 % 2 === 0) {
            return xor(nums1);
      }

      // Case 3: If nums2 length is even, XOR of all pairs is nums2's XOR
      if (len2 % 2 === 0) {
            return xor(nums2);
      }

      // Case 4: If both lengths are odd, XOR of all pairs is XOR of both arrays
      return xor(nums1) ^ xor(nums2);
}