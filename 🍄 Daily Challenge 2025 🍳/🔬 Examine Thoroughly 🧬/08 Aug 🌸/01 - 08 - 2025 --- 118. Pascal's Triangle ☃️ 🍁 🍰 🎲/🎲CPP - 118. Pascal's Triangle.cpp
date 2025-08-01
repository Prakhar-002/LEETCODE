//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 118

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * n)

class Solution {
public:
      vector<vector<int>> generate(int numRows) {
            // Result vector to store Pascal's Triangle
            vector<vector<int>> res;

            // First row is always [1]
            res.push_back({1});

            // Build rows from second to numRows
            for (int i = 1; i < numRows; ++i) {
                  vector<int> prev = res.back();
                  vector<int> row;

                  // First element is always 1
                  row.push_back(1);

                  // Generate middle values by summing adjacent values from previous row
                  for (int j = 1; j < prev.size(); ++j) {
                        row.push_back(prev[j - 1] + prev[j]);
                  }

                  // Last element is also 1
                  row.push_back(1);

                  // Append to result
                  res.push_back(row);
            }

            return res;
      }
};
