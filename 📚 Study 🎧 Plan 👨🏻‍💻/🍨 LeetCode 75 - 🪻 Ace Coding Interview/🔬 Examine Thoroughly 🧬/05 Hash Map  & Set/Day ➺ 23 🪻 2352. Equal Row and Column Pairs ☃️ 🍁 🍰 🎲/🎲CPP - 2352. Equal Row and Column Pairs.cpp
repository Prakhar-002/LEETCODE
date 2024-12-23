//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2352

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = No. of rows

//? 🧺 Space complexity ➺ O(n * m)  -> m = No. of columns

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
      int equalPairs(vector<vector<int>>& grid) {
            // Step 1: Convert each row into a tuple (using vectors)
            int n = grid.size();
            int m = grid[0].size();
            vector<vector<int>> rowArray(n, vector<int>(m));

            for (int i = 0; i < n; i++) {
                  for (int j = 0; j < m; j++) {
                        rowArray[i][j] = grid[i][j];
                  }
            }

            // Step 2: Convert each column into a tuple (using vectors)
            vector<vector<int>> colArray(m, vector<int>(n));
            for (int i = 0; i < m; i++) {
                  for (int j = 0; j < n; j++) {
                        colArray[i][j] = grid[j][i];
                  }
            }

            // Step 3: Count the frequency of each row and column using unordered_map
            unordered_map<string, int> rowCount;
            for (int i = 0; i < n; i++) {
                  string rowKey = "";
                  for (int num : rowArray[i]) {
                        rowKey += to_string(num) + ",";
                  }
                  rowCount[rowKey]++;
            }

            unordered_map<string, int> colCount;
            for (int i = 0; i < m; i++) {
                  string colKey = "";
                  for (int num : colArray[i]) {
                        colKey += to_string(num) + ",";
                  }
                  colCount[colKey]++;
            }

            // Step 4: Calculate the number of equal pairs
            int result = 0;
            for (auto& entry : rowCount) {
                  string row = entry.first;
                  int rowFrequency = entry.second;
                  if (colCount.find(row) != colCount.end()) {
                        result += rowFrequency * colCount[row];  // Multiply counts of matching rows and columns
                  }
            }

            return result;
      }
};
