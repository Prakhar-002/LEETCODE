//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3027

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
      int numberOfPairs(vector<vector<int>>& points) {
            int ans = 0;

            // ------ Sort points: x ascending, then y descending for proper scan order
            sort(points.begin(), points.end(),
                  [](const vector<int>& a, const vector<int>& b) {
                        return a[0] < b[0] || (a[0] == b[0] && a[1] > b[1]);
                  });

            // ------ Iterate over each point as candidate A
            for (int i = 0; i < points.size() - 1; i++) {
                  const auto& pointA = points[i];

                  // ------ Initialize bounds for pair B
                  int xMin = pointA[0] - 1;   // Leftmost x allowed for B
                  int xMax = INT_MAX;         // No right limit
                  int yMin = INT_MIN;         // No lower y limit
                  int yMax = pointA[1] + 1;   // Topmost y allowed for B

                  // ------ Scan remaining points for valid B
                  for (int j = i + 1; j < points.size(); j++) {
                        const auto& pointB = points[j];

                        // ------ Check if B is within the bounds defined by A and previous B
                        if (pointB[0] > xMin && pointB[0] < xMax
                              && pointB[1] > yMin && pointB[1] < yMax) {
                              ans++;

                              // ------ Restrict bounds for next candidate B
                              xMin = pointB[0];
                              yMin = pointB[1];
                        }
                  }
            }

            // ------ Return total number of valid pairs found
            return ans;
      }
};
