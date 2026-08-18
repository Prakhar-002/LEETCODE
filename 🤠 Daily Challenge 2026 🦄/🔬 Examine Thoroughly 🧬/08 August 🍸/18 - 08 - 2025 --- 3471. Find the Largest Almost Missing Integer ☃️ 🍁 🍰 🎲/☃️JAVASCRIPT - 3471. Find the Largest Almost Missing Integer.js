//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3471

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var largestInteger = function(nums, k) {
      const n = nums.length;

      // Count occurrences of each number in nums
      const freq = new Map();
      for (const num of nums) {
            freq.set(num, (freq.get(num) || 0) + 1);
      }

      // Case 1: k === 1, find the largest element with frequency 1
      if (k === 1) {
            let maxVal = -1;
            for (const num of nums) {
                  if (freq.get(num) === 1) {
                        maxVal = Math.max(maxVal, num);
                  }
            }
            return maxVal;
      }

      // Case 2: k === n, only one subarray exists so return maximum element
      if (k === n) {
            return Math.max(...nums);
      }

      // Case 3: 1 < k < n, only boundary elements can be in exactly one subarray of size k
      let ans = -1;

      if (freq.get(nums[0]) === 1) {
            ans = Math.max(ans, nums[0]);
      }

      if (freq.get(nums[n - 1]) === 1) {
            ans = Math.max(ans, nums[n - 1]);
      }

      return ans;
};