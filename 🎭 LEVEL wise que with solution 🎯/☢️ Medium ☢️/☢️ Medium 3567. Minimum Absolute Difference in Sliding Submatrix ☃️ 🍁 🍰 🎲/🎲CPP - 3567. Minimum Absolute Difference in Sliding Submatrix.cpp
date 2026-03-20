//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3567

//? ⌚ Time complexity ➺ O((m-k+1) * (n-k+1) * k^2 * log(k^2)) 👉🏻 sorting unique values per subMatrix

//? 🧺 Space complexity ➺ O(k^2) 👉🏻 storing unique values for each subMatrix

#include <vector>
#include <set>
#include <climits>
using namespace std;

class Solution {
public:
      vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
            int ROWS = grid.size();
            int COLS = grid[0].size();

            // Result matrix dimensions shrink by k-1 on each side
            vector<vector<int>> res(ROWS - k + 1, vector<int>(COLS - k + 1, 0));

            for (int i = 0; i <= ROWS - k; i++) {
                  for (int j = 0; j <= COLS - k; j++) {

                        // ---------- Collect unique values in k×k submatrix ----------
                        // std::set keeps values sorted automatically
                        set<int> values;
                        for (int x = i; x < i + k; x++) {
                              for (int y = j; y < j + k; y++) {
                                    values.insert(grid[x][y]);
                              }
                        }

                        // ---------- Convert to sorted vector for indexed access ----------
                        vector<int> arr(values.begin(), values.end());

                        // If only 1 unique value, min diff is 0
                        if (arr.size() <= 1) {
                              res[i][j] = 0;
                              continue;
                        }

                        // ---------- Find minimum difference between adjacent values ----------
                        int minDiff = INT_MAX;
                        for (int t = 0; t < (int)arr.size() - 1; t++) {
                              minDiff = min(minDiff, arr[t + 1] - arr[t]);
                        }

                        res[i][j] = minDiff;
                  }
            }

            return res;
      }
};