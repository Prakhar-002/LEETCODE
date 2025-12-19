//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L7.3 Q2

//? ⌚ Time complexity ➺ O(q log q + n) 👉🏻  q = len(queries)

//? 🧺 Space complexity ➺ O(q)

/**
 * @param {number[]} heights
 * @param {number[][]} queries
 * @return {number[]}
 */
var leftmostBuildingQueries = function (heights, queries) {
      /**
       * O(n log n) preprocessing + O(log n) per query using Sparse Table.
       * Finds leftmost building j >= max(alice,bob) where heights[j] > max(heights[alice],heights[bob]).
       */
      const n = heights.length;

      // Sparse Table: st[i][j] = max height in [i, i+2^j)
      const st = Array.from({ length: n }, () => Array(20).fill(0));

      // Log table for fast 2^k calculation: Log[len] = floor(log2(len))
      const Log = new Array(n + 1).fill(0);
      Log[0] = -1;  // Base case

      // Precompute log2 values
      for (let i = 1; i <= n; i++) {
            Log[i] = Log[i >> 1] + 1;  // i/2 + 1
      }

      // Sparse table base case: st[i][0] = heights[i]
      for (let i = 0; i < n; i++) {
            st[i][0] = heights[i];
      }

      // Build sparse table: O(n log n)
      for (let j = 1; j < 20; j++) {  // 2^j up to 2^19 > 10^5
            for (let i = 0; i + (1 << j) <= n; i++) {
                  // st[i][j] = max(st[i][j-1], st[i+2^(j-1)][j-1])
                  st[i][j] = Math.max(
                        st[i][j - 1],
                        st[i + (1 << (j - 1))][j - 1]
                  );
            }
      }

      const res = [];

      // Process each query
      for (let i = 0; i < queries.length; i++) {
            let [l, r] = queries[i];  // alice, bob
            if (l > r) {
                  [l, r] = [r, l];  // Normalize l <= r
            }

            // Case 1: same building
            if (l === r) {
                  res.push(l);
                  continue;
            }

            // Case 2: r already works (heights[r] > heights[l])
            if (heights[r] > heights[l]) {
                  res.push(r);
                  continue;
            }

            // Case 3: find leftmost j >= r where heights[j] > max(heights[l],heights[r])
            const maxHeight = Math.max(heights[l], heights[r]);
            let left = r + 1, right = n, mid;

            // Binary search for leftmost valid j
            while (left < right) {
                  mid = Math.floor((left + right) / 2);

                  // Query max in range [r, mid] using sparse table
                  const len = mid - r + 1;
                  const k = Log[len];  // floor(log2(len))
                  const maxInRange = Math.max(
                        st[r][k],
                        st[mid - (1 << k) + 1][k]
                  );

                  // If range [r,mid] has building > maxHeight
                  if (maxInRange > maxHeight) {
                        right = mid;  // Try smaller range
                  } else {
                        left = mid + 1;  // Need larger range
                  }
            }

            // left == n means no valid building found
            res.push(left === n ? -1 : left);
      }

      return res;
};
