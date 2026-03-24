//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2906

//? ⌚ Time complexity ➺ O(ROWS * COLS)

//? 🧺 Space complexity ➺ O(ROWS * COLS)

#include <vector>
using namespace std;

class Solution {
public:
      vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
            int MOD = 12345;
            int n   = grid.size();
            int m   = grid[0].size();

            // Result product matrix
            vector<vector<int>> product(n, vector<int>(m));

            // ---------- Pass 1 (Right to Left, Bottom to Top): fill suffix products ----------
            // product[i][j] = product of all elements AFTER (i,j) in row-major order
            long long suffix = 1;

            for (int i = n - 1; i >= 0; i--) {
                  for (int j = m - 1; j >= 0; j--) {
                        product[i][j] = suffix;
                        suffix  = (suffix * grid[i][j]) % MOD;
                  }
            }

            // ---------- Pass 2 (Left to Right, Top to Bottom): multiply prefix products ----------
            // product[i][j] *= product of all elements BEFORE (i,j) in row-major order
            long long prefix = 1;

            for (int i = 0; i < n; i++) {
                  for (int j = 0; j < m; j++) {
                        product[i][j] = (prefix * product[i][j]) % MOD;
                        prefix  = (prefix * grid[i][j]) % MOD;
                  }
            }

            return product;
      }
};