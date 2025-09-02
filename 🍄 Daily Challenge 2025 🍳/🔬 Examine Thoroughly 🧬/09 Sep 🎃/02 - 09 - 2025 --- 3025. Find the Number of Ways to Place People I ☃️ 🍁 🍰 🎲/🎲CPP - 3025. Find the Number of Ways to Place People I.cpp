//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3025

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(points)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int numberOfPairs(vector<vector<int>>& points) {
            // ------ Step 1: Sort points by x ascending, then y descending
            // ------ This ensures proper ordering for pair search
            sort(points.begin(), points.end(),
                  [](const vector<int>& a, const vector<int>& b) {
                        return (a[0] != b[0]) ? a[0] < b[0] : a[1] > b[1];
                  });
            int cnt = 0;

            // ------ Step 2: For each point i, scan points after it to count valid pairs
            // ------ Valid pair conditions: x[i] < x[j], lower < y[j] <= y[i]
            for (int i = 0; i < (int)points.size() - 1; i++) {
                  int x = points[i][0];
                  int y = points[i][1];
                  int lower = -1;
                  for (int j = i + 1; j < (int)points.size(); j++) {
                        // ------ Check if points[j][1] is in (lower, y]
                        if (lower < points[j][1] && points[j][1] <= y) {
                              cnt += 1;
                              lower = points[j][1];
                        }
                        // ------ Early exit: if lower == y, no more valid pairs
                        if (lower == y) {
                              break;
                        }
                  }
            }

            // ------ Step 3: Return the total count of pairs
            return cnt;
      }
};
