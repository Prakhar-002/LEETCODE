//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3363

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int maxCollectedFruits(vector<vector<int>>& fruits) {
            int n = fruits.size();     // Get the size of the matrix (n x n)
            int ans = 0;

            // Step 1: Add all the diagonal elements (from top-left to bottom-right)
            for (int i = 0; i < n; i++) {
                  ans += fruits[i][i];     // fruits[i][i] is the diagonal element
            }

            // Step 2: Apply dynamic programming on the original matrix
            ans += dp(fruits, n);

            // Step 3: Transpose the matrix to consider other diagonal paths
            for (int i = 0; i < n; i++) {
                  for (int j = 0; j < i; j++) {
                        swap(fruits[i][j], fruits[j][i]);   // Swap elements to transpose
                  }
            }

            // Step 4: Apply DP again on the transposed matrix
            ans += dp(fruits, n);

            return ans;     // Return the total collected fruits
      }

private:
      // Helper function to perform DP traversal from top-right to bottom-right corner
      int dp(vector<vector<int>>& fruits, int n) {
            vector<int> prev(n, INT_MIN);   // Previous row's results
            vector<int> curr(n, INT_MIN);   // Current row's results

            // Initialize with the top-right corner value
            prev[n - 1] = fruits[0][n - 1];

            // Start traversing from the second row to second-last row
            for (int i = 1; i < n - 1; i++) {
                  // Traverse from max(n-1-i, i+1) to n-1 to ensure valid boundaries
                  for (int j = max(n - 1 - i, i + 1); j < n; j++) {
                        int best = prev[j];   // Take from top

                        // Also consider diagonal moves (top-left and top-right)
                        if (j - 1 >= 0) best = max(best, prev[j - 1]);
                        if (j + 1 < n) best = max(best, prev[j + 1]);

                        curr[j] = best + fruits[i][j];   // Add current fruit value
                  }

                  // Move current to previous for next iteration
                  swap(prev, curr);
            }

            return prev[n - 1];   // Return value collected at bottom-right corner
      }
};
