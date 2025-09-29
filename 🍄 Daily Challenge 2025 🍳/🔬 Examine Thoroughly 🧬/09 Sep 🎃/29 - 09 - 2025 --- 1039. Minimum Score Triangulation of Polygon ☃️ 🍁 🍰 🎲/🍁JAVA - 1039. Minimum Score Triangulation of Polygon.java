//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1039

//? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

import java.util.HashMap;
import java.util.Map;

class Solution {

      // n = number of vertices in the polygon
      int n;

      // values[i] = weight/value at vertex i of the convex polygon
      int[] values;

      // Memoization: cache results of dp(i, j) using a compact integer key = i * n + j
      Map<Integer, Integer> memo = new HashMap<Integer, Integer>();

      public int minScoreTriangulation(int[] values) {
            // Initialize fields so helper dp(i, j) can access array and length
            this.n = values.length;
            this.values = values;

            // Compute the minimum score for the full polygon [0..n-1]
            return dp(0, n - 1);
      }

      // dp(i, j) -> minimum triangulation score for subpolygon formed by vertices i..j (inclusive)
      public int dp(int i, int j) {
            // If there are fewer than 3 vertices in [i..j], no triangle can be formed; cost is 0
            if (i + 2 > j) {
                  return 0;
            }

            // If exactly 3 vertices, only one triangle exists; score is product of its vertex values
            if (i + 2 == j) {
                  return values[i] * values[i + 1] * values[j];
            }

            // Build memoization key from (i, j)
            int key = i * n + j;

            // If not cached, compute by trying all possible middle vertices k (i < k < j)
            if (!memo.containsKey(key)) {
                  int minScore = Integer.MAX_VALUE;

                  // For each k, form triangle (i, k, j) and split into two subproblems: [i..k] and [k..j]
                  // Total cost = current triangle + left subpolygon + right subpolygon
                  for (int k = i + 1; k < j; k++) {
                        minScore = Math.min(
                              minScore,
                              values[i] * values[k] * values[j]     // cost of triangle (i, k, j)
                                    + dp(i, k)                       // cost to triangulate [i..k]
                                    + dp(k, j)                       // cost to triangulate [k..j]
                        );
                  }

                  // Cache the best result for (i, j)
                  memo.put(key, minScore);
            }

            // Return memoized result
            return memo.get(key);
      }
}
