#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1039

#? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n ^ 2) 

from functools import lru_cache
from typing import List

class Solution:
      def minScoreTriangulation(self, values: List[int]) -> int:
            # dp(i, j) returns the minimum triangulation score for the subpolygon
            # formed by the chain of vertices from index i to index j (inclusive).
            # Only diagonals inside the polygon are allowed; vertices are fixed in order.
            @lru_cache(None)
            def dp(i: int, j: int) -> int:
                  # If there are fewer than 3 vertices in [i..j], no triangle can be formed
                  # (need at least 3 vertices). Score is 0.
                  if i + 2 > j:
                        return 0

                  # If exactly 3 vertices in [i..j], there is exactly one triangle,
                  # so the score is the product of those three vertex values.
                  if i + 2 == j:
                        return values[i] * values[i + 1] * values[j]

                  # Otherwise, try all possible "middle" vertices k (i < k < j)
                  # to form triangle (i, k, j) and split into two sub-polygons:
                  # [i..k] and [k..j]. The total cost is:
                  # values[i] * values[k] * values[j]  (triangle formed now)
                  # + dp(i, k)                          (left sub-polygon)
                  # + dp(k, j)                          (right sub-polygon)
                  # Take the minimum over all k.
                  return min(
                        values[i] * values[k] * values[j] + dp(i, k) + dp(k, j)
                        for k in range(i + 1, j)
                  )

            # Compute the minimum score for the entire polygon spanning [0..n-1].
            return dp(0, len(values) - 1)
