//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 955

//? ⌚ Time complexity ➺ O(n * w) 👉🏻  n = len(A)

//? 🧺 Space complexity ➺ O(n)      ->  m = len(A[0])

class Solution {
public:
      int minDeletionSize(vector<string>& A) {
            // If there is only one row, no deletion is needed
            if (A.size() <= 1) {
                  return 0;
            }

            // cuts[i] is true if row i is already strictly less than row i+1
            // i.e., we don't need to check col[i] <= col[i+1] in future columns
            vector<bool> cuts(A.size() - 1, false);
            int ans = 0; // number of columns we need to delete

            // Iterate over each column j
            for (int j = 0; j < A[0].size(); ++j) {
                  // Check if this column can be kept (i.e., it doesn't break the order)
                  // For each adjacent row pair i, either:
                  //   - cuts[i] is true (rows i and i+1 are already strictly increasing), OR
                  //   - A[i][j] <= A[i+1][j] (this column maintains non-decreasing order)
                  bool keep = true;
                  for (int i = 0; i < A.size() - 1; ++i) {
                        if (!cuts[i] && A[i][j] > A[i+1][j]) {
                              keep = false;
                              break;
                        }
                  }

                  if (keep) {
                        // This column can be kept; update cuts where we see strict increase
                        for (int i = 0; i < A.size() - 1; ++i) {
                              if (A[i][j] < A[i+1][j]) {
                                    cuts[i] = true;
                              }
                        }
                  } else {
                        // This column breaks the order; we must delete it
                        ans++;
                  }
            }

            return ans;
      }
};
