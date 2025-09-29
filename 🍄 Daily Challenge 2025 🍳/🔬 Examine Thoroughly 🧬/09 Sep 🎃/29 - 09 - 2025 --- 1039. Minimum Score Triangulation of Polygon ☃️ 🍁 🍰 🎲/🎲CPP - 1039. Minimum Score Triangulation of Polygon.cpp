//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1039

//? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

#include <vector>
#include <unordered_map>
#include <functional>
#include <climits>
using namespace std; 

class Solution {
public:
      int minScoreTriangulation(vector<int>& values) {
            // Memoization map: key encodes (i, j) as i * n + j to store dp(i, j) results
            unordered_map<int, int> memo;

            // n = number of vertices in the polygon
            int n = static_cast<int>(values.size());

            // dp(i, j) -> minimum triangulation score for subpolygon formed by vertices [i..j]
            // Only valid when j - i + 1 >= 3 (i.e., at least 3 vertices to make a triangle)
            function<int(int, int)> dp = [&](int i, int j) -> int {
                  // If there are fewer than 3 vertices, cannot form a triangle
                  if (i + 2 > j) {
                        return 0;
                  }

                  // Exactly 3 vertices => only one triangle possible
                  if (i + 2 == j) {
                        return values[i] * values[i + 1] * values[j];
                  }

                  // Build a compact key for memoization from (i, j)
                  int key = i * n + j;

                  // Compute dp(i, j) if not already memoized
                  if (!memo.count(key)) {
                        int minScore = INT_MAX;

                        // Try all possible middle vertices k with i < k < j
                        // Triangle formed now: (i, k, j)
                        // Total cost = cost(left subpolygon) + cost(right subpolygon) + cost(current triangle)
                        for (int k = i + 1; k < j; k++) {
                              minScore = min(
                                    minScore,
                                    values[i] * values[k] * values[j]   // current triangle cost
                                    + dp(i, k)                           // left subpolygon [i..k]
                                    + dp(k, j)                           // right subpolygon [k..j]
                              );
                        }

                        // Store result for state (i, j)
                        memo[key] = minScore;
                  }

                  // Return memoized result
                  return memo[key];
            };

            // Compute the minimum score for the entire polygon [0..n-1]
            return dp(0, n - 1);
      }
};
