//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 757

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
      int intersectionSizeTwo(vector<vector<int>>& intervals) {
            int res = 0;  // Initialize result: minimum size of the intersection set

            // Sort intervals by ending value first, then starting value
            sort(intervals.begin(), intervals.end(),
                  [](const vector<int>& a, const vector<int>& b) {
                        return a[1] < b[1] || (a[1] == b[1] && a[0] < b[0]);
                  });

            int p1 = -1, p2 = -1;  // Last two chosen points for set S

            for (auto& interval : intervals) {
                  int left = interval[0], right = interval[1];

                  // Case 1: current interval contains neither p1 nor p2
                  if (p2 < left) {
                        res += 2;  // Add two points (right - 1, right)
                        p1 = right - 1;
                        p2 = right;
                  }

                  // Case 2: only p2 (but not p1) is inside current interval
                  else if (p1 < left) {
                        res += 1;  // Add one more point (right)
                        if (p2 == right) {
                              p1 = right - 1;
                        } else {
                              p1 = p2;
                              p2 = right;
                        }
                  }

                  // Case 3: both points already cover the interval, do nothing
            }

            return res;  // Return final minimum size of the intersection set
      }
};
