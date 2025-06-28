//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2099

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var maxSubsequence = function (nums, k) {
      const n = nums.length;

      // Step 1: Pair each number with its index
      const pairs = nums.map((val, idx) => [idx, val]);

      // Step 2: Sort by value descending
      pairs.sort((a, b) => b[1] - a[1]);

      // Step 3: Get top-k elements
      const topK = pairs.slice(0, k);

      // Step 4: Sort topK by original index to maintain order
      topK.sort((a, b) => a[0] - b[0]);

      // Step 5: Extract values
      return topK.map(([_, val]) => val);
};
