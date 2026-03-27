//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2946

// ? ⌚ Time complexity ➺ O(n * m) 

// ? 🧺 Space complexity ➺ O(n * m)

class Solution {
public:
      bool areSimilar(vector<vector<int>>& mat, int k) {
            int m = mat.size();       // Number of rows
            int n = mat[0].size();    // Number of columns
            k = k % n;                // Reduce k to within bounds

            for (int i = 0; i < m; i++) {
                  for (int j = 0; j < n; j++) {
                        int finalIdx;
                        // Check transformation based on row parity
                        if (i % 2 == 0) {
                              finalIdx = (j + k) % n;
                        } else {
                              // Ensure positive index for cyclic shift
                              finalIdx = (j - k + n) % n;
                        }

                        // Return false if symmetry is broken
                        if (mat[i][i % 2 == 0 ? i : i][j] != mat[i][finalIdx]) {
                              return false;
                        }
                  }
            }
            return true;
      }
};