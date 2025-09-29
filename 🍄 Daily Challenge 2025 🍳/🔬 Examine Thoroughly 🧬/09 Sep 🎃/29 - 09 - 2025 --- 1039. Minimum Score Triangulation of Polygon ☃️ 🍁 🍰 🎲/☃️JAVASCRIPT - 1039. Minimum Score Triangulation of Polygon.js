//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1039

//? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2) 

var minScoreTriangulation = function (values) {
      // n = number of vertices in the polygon
      const n = values.length;

      // Memoization: cache results of dp(i, j) using a compact integer key = i * n + j
      const memo = new Map();

      // dp(i, j) -> minimum triangulation score for subpolygon formed by vertices [i..j] (inclusive)
      const dp = (i, j) => {
            // If there are fewer than 3 vertices in [i..j], no triangle can be formed; cost is 0
            if (i + 2 > j) {
                  return 0;
            }

            // If exactly 3 vertices, only one triangle exists; score is product of its vertex values
            if (i + 2 === j) {
                  return values[i] * values[i + 1] * values[j];
            }

            // Build memoization key from (i, j)
            const key = i * n + j;

            // If not cached, compute by trying all possible middle vertices k with i < k < j
            if (!memo.has(key)) {
                  let minScore = Number.MAX_VALUE;

                  // For each k, form triangle (i, k, j) and split into two subproblems: [i..k] and [k..j]
                  // Total cost = current triangle + left subpolygon + right subpolygon
                  for (let k = i + 1; k < j; k++) {
                        minScore = Math.min(
                              minScore,
                              values[i] * values[k] * values[j]     // cost of triangle (i, k, j)
                                    + dp(i, k)                       // cost to triangulate [i..k]
                                    + dp(k, j)                       // cost to triangulate [k..j]
                        );
                  }

                  // Cache the best result for (i, j)
                  memo.set(key, minScore);
            }

            // Return memoized result
            return memo.get(key);
      };

      // Compute the minimum score for the entire polygon [0..n-1]
      return dp(0, n - 1);
};
