//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 48

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      void rotate(vector<vector<int>>& matrix) {
            // reverse the matrix first
            int n = matrix.size();

            for(int i = 0, j = n - 1; i <= j; i++, j-- ){
                  swap(matrix[i], matrix[j]);
            }

            // Taking transpose of matrix
            for (int i = 0; i < n; i++) {
                  for (int j = i + 1; j < n; j++) {
                        swap(matrix[i][j], matrix[j][i]);
                  }
            }
      }
};