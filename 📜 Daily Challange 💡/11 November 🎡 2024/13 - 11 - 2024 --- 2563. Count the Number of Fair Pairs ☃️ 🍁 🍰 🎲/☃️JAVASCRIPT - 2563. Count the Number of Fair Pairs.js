//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2563

//? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var countFairPairs = function (nums, lower, upper) {
      // Helper function for binary search to find the right boundary
      function binSearch(l, r, target) {
            // Binary search to find the index where nums[index] >= target
            while (l <= r) {
                  let m = l + Math.floor((r - l) / 2);
                  if (nums[m] >= target) {
                        r = m - 1;
                  } else {
                        l = m + 1;
                  }
            }
            return r;  // Return the index where nums[index] < target
      }

      // Sort the array to enable binary search for range
      nums.sort((a, b) => a - b);

      let pairs = 0;  // Initialize pair count

      // Iterate through each element to find pairs within [lower, upper]
      for (let i = 0; i < nums.length; i++) {
            let low = lower - nums[i];  // Minimum value for a fair pair with nums[i]
            let up = upper - nums[i];   // Maximum value for a fair pair with nums[i]

            // Count valid pairs in range by binary search for up+1 and low boundaries
            pairs += binSearch(i + 1, nums.length - 1, up + 1) - binSearch(i + 1, nums.length - 1, low);
      }

      // Return the total count of fair pairs
      return pairs;
};