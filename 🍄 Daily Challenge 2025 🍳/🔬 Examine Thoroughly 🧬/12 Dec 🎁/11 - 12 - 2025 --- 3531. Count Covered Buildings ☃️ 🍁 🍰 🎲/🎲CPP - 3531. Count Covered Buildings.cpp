//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3531

//? ⌚ Time complexity ➺ O(m) 👉🏻  n = len(buildings)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
using namespace std;

class Solution {
public:
      int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
            // Row-wise: min/max x for each row y
            vector<int> maxRow(n + 1, 0);
            vector<int> minRow(n + 1, n + 1);

            // Column-wise: min/max y for each column x
            vector<int> maxCol(n + 1, 0);
            vector<int> minCol(n + 1, n + 1);

            // Step 1: Compute min/max ranges
            for (const auto& building : buildings) {
                  int x = building[0];
                  int y = building[1];

                  maxRow[y] = max(maxRow[y], x);
                  minRow[y] = min(minRow[y], x);

                  maxCol[x] = max(maxCol[x], y);
                  minCol[x] = min(minCol[x], y);
            }

            int count = 0;
            // Step 2: Check coverage for each building
            for (const auto& building : buildings) {
                  int x = building[0];
                  int y = building[1];

                  // Strictly inside row AND column range
                  if (x > minRow[y] && x < maxRow[y] &&
                        y > minCol[x] && y < maxCol[x]) {
                        count++;
                  }
            }

            return count;
      }
};
