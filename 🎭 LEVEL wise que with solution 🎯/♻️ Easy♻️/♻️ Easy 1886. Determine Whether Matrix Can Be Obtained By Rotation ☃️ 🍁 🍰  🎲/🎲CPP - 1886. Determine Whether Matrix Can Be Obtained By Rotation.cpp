//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1886

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(mat)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:

      // ---------- Transpose: flip matrix along main diagonal ----------
      void transpose(vector<vector<int>>& mat) {
            for (int i = 0; i < (int)mat.size(); i++) {
                  for (int j = i + 1; j < (int)mat.size(); j++) {
                        swap(mat[i][j], mat[j][i]);
                  }
            }
      }

      // ---------- Rotate 90° clockwise: transpose then reverse each row ----------
      void rotate(vector<vector<int>>& mat) {
            transpose(mat);
            for (auto& row : mat) {
                  reverse(row.begin(), row.end());
            }
      }

      bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
            // Try all 4 rotations (0°, 90°, 180°, 270°)
            for (int r = 0; r < 4; r++) {
                  // Check before rotating so 0° is also tested
                  if (mat == target)
                        return true;

                  // Rotate 90° clockwise for next iteration
                  rotate(mat);
            }

            return false;
      }
};