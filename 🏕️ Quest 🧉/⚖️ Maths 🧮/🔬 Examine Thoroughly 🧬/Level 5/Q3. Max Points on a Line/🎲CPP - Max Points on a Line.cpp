//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L5 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>
#include <algorithm>
#include <limits>

using namespace std;

class Solution {
public:
      int maxPoints(vector<vector<int>>& points) {
            // If there are 2 or fewer points, all points lie on the same line
            if (points.size() <= 2) {
                  return points.size();
            }

            int ans = 1;  // Initialize maximum points on a line to at least 1

            // Iterate through each point p1 in the list
            for (int i = 0; i < points.size(); i++) {
                  unordered_map<double, int> slopes;

                  // Check each point p2 after p1 to avoid duplicates
                  for (int j = i + 1; j < points.size(); j++) {
                        double slope = findSlope(points[i], points[j]); // Calculate slope
                        slopes[slope]++;
                        ans = max(ans, slopes[slope]);
                  }
            }

            // Add 1 to include the original point itself in the count
            return ans + 1;
      }

private:
      // Helper function to calculate slope between two points
      double findSlope(const vector<int>& p1, const vector<int>& p2) {
            int x1 = p1[0], y1 = p1[1];
            int x2 = p2[0], y2 = p2[1];
            if (x1 == x2) {
                  return numeric_limits<double>::infinity(); // Handle vertical line
            }
            return static_cast<double>(y1 - y2) / (x1 - x2);
      }
};
