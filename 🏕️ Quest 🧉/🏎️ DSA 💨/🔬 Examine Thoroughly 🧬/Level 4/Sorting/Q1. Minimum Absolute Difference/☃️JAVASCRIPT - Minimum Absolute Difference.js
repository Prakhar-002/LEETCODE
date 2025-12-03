//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L4.1 Q1

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var minimumAbsDifference = function (arr) {
      // Sort the array; smallest differences will be between neighbors
      arr.sort((a, b) => a - b);

      const n = arr.length;
      let minDiff = Infinity;  // Track global minimum difference

      // First pass: find the minimum difference between consecutive elements
      for (let i = 1; i < n; i++) {
            minDiff = Math.min(minDiff, arr[i] - arr[i - 1]);
      }

      // Second pass: collect all adjacent pairs whose difference equals minDiff
      const res = [];
      for (let i = 1; i < n; i++) {
            if (arr[i] - arr[i - 1] === minDiff) {
                  res.push([arr[i - 1], arr[i]]);
            }
      }

      return res;
};
