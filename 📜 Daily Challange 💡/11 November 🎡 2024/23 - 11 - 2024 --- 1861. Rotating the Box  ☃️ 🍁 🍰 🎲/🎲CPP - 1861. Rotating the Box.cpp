//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1861

//? ⌚ Time complexity ➺ O(n * m) 👉🏻 n = len(matrix)

//? 🧺 Space complexity ➺ O(1) 👉🏻 m = len(matrix[0])

#include<vector>
using namespace std;

class Solution {
public:
      vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
            int ROWS = box.size(); // Number of rows in the box
            int COLS = box[0].size(); // Number of columns in the box

            // Create the rotated box with swapped dimensions
            vector<vector<char>> rotatedBox(COLS, vector<char>(ROWS, '.'));

            // Iterate through each row of the original box
            for (int r = 0; r < ROWS; r++) {
                  int i = COLS - 1; // Track the last empty position in the current row
                  // Traverse the row from right to left
                  for (int c = COLS - 1; c >= 0; c--) {
                        if (box[r][c] == '#') { // If the current cell contains a stone
                              rotatedBox[i][ROWS - r - 1] = '#'; // Place the stone
                              i--; // Move the empty position left
                        } else if (box[r][c] == '*') { // If the current cell contains an obstacle
                              rotatedBox[c][ROWS - r - 1] = '*'; // Place the obstacle
                              i = c - 1; // Reset the empty position left of the obstacle
                        }
                  }
            }

            // Return the rotated box
            return rotatedBox;
      }
};
