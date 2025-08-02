//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2561

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(bucket1 + bucket2)

//? 🧺 Space complexity ➺ O(n)

var minCost = function (basket1, basket2) {
      // Create a map to store frequency differences of elements in basket1 and basket2
      const freq = new Map();

      // Initialize minimum element seen so far
      let m = Infinity;

      // Count each item in basket1 and track the minimum element
      for (const b of basket1) {
            freq.set(b, (freq.get(b) || 0) + 1); // Increment count for basket1 item
            m = Math.min(m, b);                  // Update the minimum value
      }

      // Subtract counts for items in basket2 and update the minimum value
      for (const b of basket2) {
            freq.set(b, (freq.get(b) || 0) - 1); // Decrement count for basket2 item
            m = Math.min(m, b);                  // Update the minimum value
      }

      // This array will store the extra items that need to be swapped
      const merge = [];

      // Analyze the frequency map
      for (const [k, c] of freq.entries()) {
            // If count is odd, impossible to balance, return -1
            if (c % 2 !== 0) return -1;

            // Push half of the absolute excess to the merge array
            for (let i = 0; i < Math.abs(c) / 2; i++) {
                  merge.push(k); // We only need to fix half of the imbalance
            }
      }

      // Sort the merge array in ascending order to prioritize cheaper swaps
      merge.sort((a, b) => a - b);

      let res = 0; // Result to store total minimum cost

      // We only need to consider the first half (cheaper half) of merge array for swaps
      for (let i = 0; i < merge.length / 2; i++) {
            // For each swap, choose the smaller of: 2 * m (smallest item double swap) or the current item
            res += Math.min(2 * m, merge[i]);
      }

      return res; // Return the total minimum cost
};
