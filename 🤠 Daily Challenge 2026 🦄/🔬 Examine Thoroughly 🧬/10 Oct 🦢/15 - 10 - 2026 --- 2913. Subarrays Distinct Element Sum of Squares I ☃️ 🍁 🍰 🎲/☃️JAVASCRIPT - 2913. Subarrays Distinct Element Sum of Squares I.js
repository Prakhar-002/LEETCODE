//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2713

// ? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(n)

var sumCounts = function (nums) {
      const n = nums.length;
      let res = 0;

      // Outer loop fixes the start index of the subarray
      for (let i = 0; i < n; i++) {
            const seen = new Set();
            // Inner loop extends the end index of the subarray
            for (let j = i; j < n; j++) {
                  // Add element to set to track uniqueness
                  seen.add(nums[j]);
                  const distinctCount = seen.size;
                  // Add squared count of distinct values
                  res += distinctCount * distinctCount;
            }
      }

      return res;
};