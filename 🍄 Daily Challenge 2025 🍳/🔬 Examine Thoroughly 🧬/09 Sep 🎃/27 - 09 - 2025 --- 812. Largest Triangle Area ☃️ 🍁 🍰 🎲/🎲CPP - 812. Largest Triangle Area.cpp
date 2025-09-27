//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 812

//? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
      // Helper function to calculate the area of a triangle
      // formed by three points using the Shoelace formula
      static double triangleArea(const vector<int>& x, const vector<int>& y, const vector<int>& z) {
            // Formula: 0.5 * |x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2)|
            return 0.5 * fabs(
                  x[0] * (y[1] - z[1]) +
                  y[0] * (z[1] - x[1]) +
                  z[0] * (x[1] - y[1])
            );
      }

      double largestTriangleArea(vector<vector<int>>& points) {
            double maxArea = 0.0;
            int n = static_cast<int>(points.size());

            // Generate all unique combinations of 3 points
            // Calculate the triangle area for each combination
            // Keep track of the maximum area among all possible triangles
            for (int i = 0; i < n; i++) {
                  for (int j = i + 1; j < n; j++) {
                        for (int k = j + 1; k < n; k++) {
                              maxArea = max(maxArea, triangleArea(points[i], points[j], points[k]));
                        }
                  }
            }

            return maxArea;
      }
};
