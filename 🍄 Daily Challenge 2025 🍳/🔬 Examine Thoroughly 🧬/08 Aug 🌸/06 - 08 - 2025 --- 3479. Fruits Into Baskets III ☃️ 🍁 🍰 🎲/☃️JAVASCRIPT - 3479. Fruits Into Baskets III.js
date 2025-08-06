//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3479

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(bucket)

//? 🧺 Space complexity ➺ O(n)

var numOfUnplacedFruits = function (fruits, baskets) {
      let n = baskets.length;

      // Find next power of 2 >= n
      let N = 1;
      while (N <= n) N <<= 1;

      // Create segment tree
      let segTree = new Array(2 * N).fill(0);

      // Copy basket capacities to leaf nodes
      for (let i = 0; i < n; i++) {
            segTree[N + i] = baskets[i];
      }

      // Build the segment tree from bottom
      for (let i = N - 1; i > 0; i--) {
            segTree[i] = Math.max(segTree[2 * i], segTree[2 * i + 1]);
      }

      let count = 0;

      for (let x of fruits) {
            let index = 1; // root

            // If no basket can hold the fruit
            if (segTree[index] < x) {
                  count++;
                  continue;
            }

            // Find first basket >= fruit size
            while (index < N) {
                  if (segTree[2 * index] >= x) {
                        index = 2 * index;
                  } else {
                        index = 2 * index + 1;
                  }
            }

            // Mark basket as used
            segTree[index] = -1;

            // Update ancestors
            while (index > 1) {
                  index >>= 1;
                  segTree[index] = Math.max(segTree[2 * index], segTree[2 * index + 1]);
            }
      }

      return count;
};
