//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L5 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      // Main function to find the maximum number of points on a line
      public int maxPoints(int[][] points) {
            // If there are 2 or fewer points, all points lie on the same line
            if (points.length <= 2) return points.length;

            int ans = 0;  // Store the maximum number of points found on a line

            // Iterate over each point to treat it as a base point
            for (int i = 0; i < points.length; ++i) {
                  // Map to count occurrences of each slope (dx, dy) relative to point i
                  Map<Pair<Integer, Integer>, Integer> slopeCount = new HashMap<>();
                  int samePoints = 1;  // Count of points identical to points[i]
                  int maxPoints = 0;   // Max points with the same slope relative to points[i]

                  // Compare current point with every other point after it
                  for (int j = i + 1; j < points.length; ++j) {
                        int[] p1 = points[i];
                        int[] p2 = points[j];

                        // If points are the same, increment count of duplicates
                        if (p1[0] == p2[0] && p1[1] == p2[1]) {
                              ++samePoints;
                        } else {
                              // Calculate the slope as a reduced fraction pair (dx, dy)
                              Pair<Integer, Integer> slope = getSlope(p1, p2);
                              // Increment count for this slope in the map
                              slopeCount.merge(slope, 1, Integer::sum);
                              // Update maxPoints for the slope with highest count
                              maxPoints = Math.max(maxPoints, slopeCount.get(slope));
                        }
                  }

                  // Update the global max including duplicates for this point
                  ans = Math.max(ans, samePoints + maxPoints);
            }

            return ans;
      }

      // Calculates the slope between two points p and q as a normalized Pair (dx, dy)
      private Pair<Integer, Integer> getSlope(int[] p, int[] q) {
            int dx = p[0] - q[0];
            int dy = p[1] - q[1];

            // Handle vertical line where dx = 0
            if (dx == 0) {
                  return new Pair<>(0, 1); // Represent vertical slope as (0,1)
            }
            // Handle horizontal line where dy = 0
            if (dy == 0) {
                  return new Pair<>(1, 0); // Represent horizontal slope as (1,0)
            }

            // Reduce slope fraction by greatest common divisor (gcd)
            int g = gcd(Math.abs(dx), Math.abs(dy));
            dx /= g;
            dy /= g;

            // Normalize sign so dx is positive
            if (dx < 0) {
                  dx = -dx;
                  dy = -dy;
            }

            return new Pair<>(dx, dy);
      }

      // Helper function to compute gcd using Euclid's algorithm
      private int gcd(int a, int b) {
            return b == 0 ? a : gcd(b, a % b);
      }
}
