//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3484

//? ⌚ Time complexity ➺ O(1) 👉🏻  n = len(rows)

//? 🧺 Space complexity ➺ O(26 * n)

#include <unordered_map>
#include <string>
using namespace std;

class Spreadsheet {
      unordered_map<string, int> cells;    // Map storing cell names and their integer values

public:
      Spreadsheet(int rows) {
            // Constructor (rows not used explicitly)
      }

      void setCell(string cell, int value) {
            // Set or update the value of a cell
            cells[cell] = value;
      }

      void resetCell(string cell) {
            // Remove cell to reset to default (0)
            cells.erase(cell);
      }

      int getValue(string formula) {
            // Parse formula in format "=A+B"
            int idx = formula.find('+');
            string left = formula.substr(1, idx - 1);
            string right = formula.substr(idx + 1);

            // Determine left value: if cell name, lookup; else convert number
            int valLeft = isalpha(left[0]) ? (cells.count(left) ? cells[left] : 0) : stoi(left);

            // Determine right value: same as left
            int valRight = isalpha(right[0]) ? (cells.count(right) ? cells[right] : 0) : stoi(right);

            // Return sum of left and right cells/values
            return valLeft + valRight;
      }
};
