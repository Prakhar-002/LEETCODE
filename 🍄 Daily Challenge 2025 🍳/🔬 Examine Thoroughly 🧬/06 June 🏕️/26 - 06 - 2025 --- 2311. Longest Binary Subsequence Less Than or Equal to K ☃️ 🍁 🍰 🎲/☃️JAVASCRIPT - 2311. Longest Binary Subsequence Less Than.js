//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2311

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var longestSubsequence = function (s, k) {
      let sum = 0;                                    // Stores current binary value of selected subsequence
      let count = 0;                                  // Count of characters included in the subsequence
      const bits = k.toString(2).length;              // Max bits needed to represent any number ≤ k

      const n = s.length;
      for (let i = 0; i < n; i++) {
            const ch = s[n - 1 - i];                  // Traverse from right to left

            if (ch === '1') {
                  // If adding 2^i does not exceed k and within bit limit
                  if (i < bits && sum + (1 << i) <= k) {
                        sum += (1 << i);              // Add value 2^i to the sum
                        count++;                      // Include this '1' in subsequence
                  }
            } else {
                  count++;                            // Always safe to include '0'
            }
      }

      return count;
};
