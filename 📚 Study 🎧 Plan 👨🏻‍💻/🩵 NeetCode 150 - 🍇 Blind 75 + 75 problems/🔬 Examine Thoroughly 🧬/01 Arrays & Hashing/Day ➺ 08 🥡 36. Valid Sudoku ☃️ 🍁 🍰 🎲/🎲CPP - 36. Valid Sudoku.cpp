//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 36

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = 9

//? 🧺 Space complexity ➺ O(n ^ 2)

#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution {
public:
      bool isValidSudoku(vector<vector<char>>& board) {
            // Use unordered_maps to track values in rows, columns, and 3x3 squares
            unordered_map<int, unordered_set<char>> rows;
            unordered_map<int, unordered_set<char>> cols;
            unordered_map<string, unordered_set<char>> squares;

            for (int r = 0; r < 9; r++) {
                  for (int c = 0; c < 9; c++) {
                        char val = board[r][c];

                        // Skip empty cells
                        if (val == '.') continue;

                        // Get the square key as "row/3-col/3"
                        string squareKey = to_string(r / 3) + "-" + to_string(c / 3);

                        // Check if the value already exists in row, column, or square
                        if (rows[r].count(val) || cols[c].count(val) || squares[squareKey].count(val)) {
                              return false;
                        }

                        // Add the value to the row, column, and square
                        rows[r].insert(val);
                        cols[c].insert(val);
                        squares[squareKey].insert(val);
                  }
            }
            // If no duplicates found, the board is valid
            return true;
      }
};
