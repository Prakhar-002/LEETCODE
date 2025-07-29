//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3480

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var maxSubarrays = function (n, conflictingPairs) {
      // Arrays to store the two smallest conflicting 'b' values for each 'a'
      const bMin1 = Array(n + 1).fill(Number.MAX_SAFE_INTEGER);  // Smallest conflict
      const bMin2 = Array(n + 1).fill(Number.MAX_SAFE_INTEGER);  // Second smallest conflict

      // Iterate through all conflicting pairs
      for (const pair of conflictingPairs) {
            const a = Math.min(pair[0], pair[1]);  // smaller index
            const b = Math.max(pair[0], pair[1]);  // larger index

            // Store the smallest and second smallest 'b' for each 'a'
            if (bMin1[a] > b) {
                  bMin2[a] = bMin1[a];  // Update second smallest
                  bMin1[a] = b;         // Update smallest
            } else if (bMin2[a] > b) {
                  bMin2[a] = b;
            }
      }

      let res = 0;                       // Total valid subarrays count
      let ib1 = n;                       // Current best index with minimal conflict
      let b2 = Number.MAX_SAFE_INTEGER; // To track minimum among second-best conflicts
      const delCount = Array(n + 1).fill(0);  // Array to track how many deletions are needed per start index

      // Traverse backwards from n to 1
      for (let i = n; i >= 1; i--) {
            // Update the best index with smaller conflict value
            if (bMin1[ib1] > bMin1[i]) {
                  b2 = Math.min(b2, bMin1[ib1]);  // Update min for second conflict
                  ib1 = i;                        // Update best index
            } else {
                  b2 = Math.min(b2, bMin1[i]);
            }

            // Count how many subarrays starting at i can go up to just before first conflict
            res += Math.min(bMin1[ib1], n + 1) - i;

            // Count deletions: how many elements overlap with second conflicts
            delCount[ib1] +=
                  Math.min(Math.min(b2, bMin2[ib1]), n + 1) -
                  Math.min(bMin1[ib1], n + 1);
      }

      // Return total subarrays plus the best deletions benefit
      return res + Math.max(...delCount);
};
