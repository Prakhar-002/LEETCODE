//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3000

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(rectangles)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      // Compute the area of the rectangle whose diagonal is the longest.
      // If multiple rectangles have the same (longest) diagonal, pick the one with larger area.
      // We compare squared diagonals (l*l + w*w) to avoid sqrt and floating-point issues.
      int areaOfMaxDiagonal(vector<vector<int>>& rectangles) {
            long long maxDiaSq = 0;   // largest squared diagonal seen so far
            int maxArea = 0;          // best area corresponding to the longest diagonal

            for (const auto& rect : rectangles) {
                  int length = rect[0];
                  int width  = rect[1];

                  // Pythagoras: diagonal^2 = length^2 + width^2
                  long long curDiaSq = 1LL * length * length + 1LL * width * width;
                  int area = length * width;

                  // If this rectangle has a strictly longer diagonal, take it.
                  if (curDiaSq > maxDiaSq) {
                        maxDiaSq = curDiaSq;
                        maxArea = area;
                  }
                  // If diagonals are equal, prefer the rectangle with larger area.
                  else if (curDiaSq == maxDiaSq) {
                        if (area > maxArea) {
                              maxArea = area;
                        }
                  }
            }

            // Area of rectangle corresponding to the maximum diagonal (tie-broken by area).
            return maxArea;
      }
};
