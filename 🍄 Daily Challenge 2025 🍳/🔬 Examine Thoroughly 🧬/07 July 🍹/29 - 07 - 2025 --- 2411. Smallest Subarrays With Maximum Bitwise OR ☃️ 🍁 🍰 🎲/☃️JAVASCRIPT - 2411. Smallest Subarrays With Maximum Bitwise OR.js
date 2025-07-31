//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2411

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var smallestSubarrays = function (nums) {
      const n = nums.length;

      // Array to keep last seen index for each bit position (0 to 29)
      const lastSeen = new Array(30).fill(0);

      // Result array filled with 1s (minimum size)
      const res = new Array(n).fill(1);

      // Traverse from end to start
      for (let i = n - 1; i >= 0; i--) {
            for (let bit = 0; bit < 30; bit++) {
                  // If the bit is set in current number
                  if ((nums[i] & (1 << bit)) > 0) {
                        lastSeen[bit] = i;
                  }

                  // Update result with required subarray size
                  res[i] = Math.max(res[i], lastSeen[bit] - i + 1);
            }
      }

      return res;
};
