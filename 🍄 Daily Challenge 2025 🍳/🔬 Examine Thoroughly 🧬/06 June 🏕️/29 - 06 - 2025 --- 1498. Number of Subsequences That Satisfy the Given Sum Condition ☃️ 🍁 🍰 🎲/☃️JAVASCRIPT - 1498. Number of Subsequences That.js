//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1498

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var numSubseq = function (nums, target) {
      const mod = 1e9 + 7;
      const n = nums.length;

      // Step 1: Sort the array
      nums.sort((a, b) => a - b);

      // Step 2: Precompute powers of 2 modulo mod
      const power = Array(n).fill(1);
      for (let i = 1; i < n; i++) {
            power[i] = (power[i - 1] * 2) % mod;
      }

      let left = 0, right = n - 1;
      let result = 0;

      // Step 3: Two-pointer approach
      while (left <= right) {
            if (nums[left] + nums[right] <= target) {
                  // All combinations between left and right are valid
                  result = (result + power[right - left]) % mod;
                  left++;  // Try a larger left
            } else {
                  right--; // Try a smaller right
            }
      }

      return result;
};
