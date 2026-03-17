//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1727

//? ⌚ Time complexity ➺ O(n * m)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int largestSubmatrix(vector<vector<int>>& matrix) {

            int ROWS = matrix.size();
            int COLS = matrix[0].size();

            int maxArea = 0;

            // Stores (height, column)
            vector<pair<int, int>> prevHeights;

            // Traverse rows
            for (int row = 0; row < ROWS; row++) {

                  vector<pair<int, int>> heights;
                  unordered_set<int> seen;

                  // STEP 1: Extend heights
                  for (auto &p : prevHeights) {
                        int height = p.first;
                        int col = p.second;

                        if (matrix[row][col] == 1) {
                              heights.push_back({height + 1, col});
                              seen.insert(col);
                        }
                  }

                  // STEP 2: Start new heights
                  for (int col = 0; col < COLS; col++) {
                        if (!seen.count(col) && matrix[row][col] == 1) {
                              heights.push_back({1, col});
                        }
                  }

                  // STEP 3: Sort in descending order
                  sort(heights.begin(), heights.end(), greater<>());

                  // STEP 4: Calculate max area
                  for (int i = 0; i < heights.size(); i++) {
                        int width = i + 1;
                        int height = heights[i].first;

                        maxArea = max(maxArea, width * height);
                  }

                  // STEP 5: Update for next row
                  prevHeights = heights;
            }

            return maxArea;
      }
};