//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2444

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var countSubarrays = function (nums, minK, maxK) {
      // pMin: last index where nums[i] == minK
      // pMax: last index where nums[i] == maxK
      // bad: last index where nums[i] is out of [minK, maxK] range
      let pMin = -1, pMax = -1, bad = -1;
      let ans = 0n; // Use BigInt for large counts

      // Loop through array
      for (let i = 0; i < nums.length; i++) {
            let num = nums[i];

            // Update pMin if current number is minK
            if (num === minK) {
                  pMin = i;
            }

            // Update pMax if current number is maxK
            if (num === maxK) {
                  pMax = i;
            }

            // Update bad if number is invalid
            if (num < minK || num > maxK) {
                  bad = i;
            }

            // If both minK and maxK have been found
            if (pMin !== -1 && pMax !== -1) {
                  // Add number of valid subarrays ending at i
                  ans += BigInt(Math.max(0, Math.min(pMin, pMax) - bad));
            }
      }

      // Convert BigInt to Number before returning
      return Number(ans);
};
