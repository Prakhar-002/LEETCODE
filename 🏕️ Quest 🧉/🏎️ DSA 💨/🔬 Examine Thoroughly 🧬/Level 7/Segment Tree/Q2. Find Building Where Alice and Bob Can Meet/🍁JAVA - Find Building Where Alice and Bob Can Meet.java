//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L7.3 Q2

//? ⌚ Time complexity ➺ O(q log q + n) 👉🏻  q = len(queries)

//? 🧺 Space complexity ➺ O(q)

import java.util.*;

class Solution {
      public int[] leftmostBuildingQueries(int[] heights, int[][] queries) {
            /**
             * O(n log n) preprocessing + O(1) query using Sparse Table RMQ.
             * Finds leftmost j >= max(alice,bob) where heights[j] >
             * max(heights[alice],heights[bob]).
             */
            int n = heights.length;

            // Sparse Table: st[i][j] = max height in [i, i+2^j)
            int[][] st = new int[n][20];

            // Log table: Log[len] = floor(log2(len))
            int[] Log = new int[n + 1];
            Log[0] = -1;

            // Precompute log2(i) for fast sparse table queries
            for (int i = 1; i <= n; i++) {
                  Log[i] = Log[i >> 1] + 1; // Log[i/2] + 1
            }

            // Base case: st[i][0] = heights[i]
            for (int i = 0; i < n; i++) {
                  st[i][0] = heights[i];
            }

            // Build sparse table: O(n log n)
            for (int j = 1; j < 20; j++) { // 2^19 = 524288 > 10^5
                  for (int i = 0; i + (1 << j) <= n; i++) {
                        // st[i][j] = max over 2^j length range
                        st[i][j] = Math.max(
                                    st[i][j - 1],
                                    st[i + (1 << (j - 1))][j - 1]);
                  }
            }

            int[] res = new int[queries.length];

            // Process each query
            for (int i = 0; i < queries.length; i++) {
                  int l = queries[i][0]; // alice
                  int r = queries[i][1]; // bob

                  // Normalize: l <= r
                  if (l > r) {
                        int temp = l;
                        l = r;
                        r = temp;
                  }

                  // Case 1: same building
                  if (l == r) {
                        res[i] = l;
                        continue;
                  }

                  // Case 2: r already satisfies heights[r] > heights[l]
                  if (heights[r] > heights[l]) {
                        res[i] = r;
                        continue;
                  }

                  // Case 3: binary search for leftmost j >= r where heights[j] >
                  // max(heights[l],r)
                  int maxHeight = Math.max(heights[l], heights[r]);
                  int left = r + 1, right = n;

                  // Binary search on position j
                  while (left < right) {
                        int mid = left + (right - left) / 2;

                        // RMQ: max in range [r, mid] using sparse table
                        int len = mid - r + 1;
                        int k = Log[len];
                        int maxInRange = Math.max(
                                    st[r][k],
                                    st[mid - (1 << k) + 1][k]);

                        // Found valid position in [r, mid]
                        if (maxInRange > maxHeight) {
                              right = mid; // Try left half
                        } else {
                              left = mid + 1; // Need right half
                        }
                  }

                  // left == n means no valid building
                  res[i] = (left == n) ? -1 : left;
            }

            return res;
      }
}
