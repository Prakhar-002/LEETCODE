//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L5 Q3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(rectangle)

//? 🧺 Space complexity ➺ O(n)

class SubrectangleQueries {
public:
      SubrectangleQueries(vector<vector<int>>& rectangle) {
            /**
             * Deep copy constructor using vector assignment
             * Time: O(rows * cols), Space: O(rows * cols)
             */
            int rows = rectangle.size();
            int cols = rectangle[0].size();
            this->rectangle.resize(rows, vector<int>(cols));

            for (int i = 0; i < rows; i++) {
                  this->rectangle[i] = rectangle[i];  // Vector copy
            }
      }
      
      void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
            /**
             * Direct modification of subrectangle
             * Time: O((row2-row1+1) * (col2-col1+1))
             */
            for (int i = row1; i <= row2; i++) {
                  for (int j = col1; j <= col2; j++) {
                        rectangle[i][j] = newValue;
                  }
            }
      }
      
      int getValue(int row, int col) {
            /**
             * O(1) array access
             */
            return rectangle[row][col];
      }
      
private:
      vector<vector<int>> rectangle;
};