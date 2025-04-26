//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2845

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(min(n, modulo))

var countInterestingSubarrays = function (nums, modulo, k) {
      let n = nums.length;                                      // Length of the array
      let cnt = new Map();                                       // Map to store prefix mod counts
      cnt.set(0, 1n);                                             // Initialize prefix 0 with count 1 (BigInt)
      let res = 0n;                                              // Result to store total interesting subarrays
      let prefix = 0;                                            // Prefix sum counter

      for (let i = 0; i < n; i++) {
            // If current number satisfies nums[i] % modulo == k, increment prefix
            if (nums[i] % modulo === k) {
                  prefix++;
            }

            // Add count of (prefix - k + modulo) % modulo from map
            res += cnt.get((prefix - k + modulo) % modulo) || 0n;

            // Update the map with current prefix % modulo
            cnt.set(prefix % modulo, (cnt.get(prefix % modulo) || 0n) + 1n);
      }

      // Convert BigInt to Number before returning
      return Number(res);
};
