//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 119

//? ⌚ Time complexity ➺ O(rowIdx * 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      vector<int> getRow(int rowIndex) {
            // Initialize the first row
            vector<int> res = {1};

            // Build rows up to the given rowIndex
            for (int i = 0; i < rowIndex; ++i) {
                  // Create a temporary row with size + 1, initialized to 0
                  vector<int> nextRow(res.size() + 1, 0);

                  // Fill the new row based on current row
                  for (int j = 0; j < res.size(); ++j) {
                        nextRow[j] += res[j];
                        nextRow[j + 1] += res[j];
                  }

                  // Update the result to new row
                  res = nextRow;
            }

            return res;
      }
};