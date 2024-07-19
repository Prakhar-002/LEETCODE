//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1380

//? ⌚ Time complexity -> O(n * m) 👉 N = rows , M = columns

//? 🧺 Space complexity -> O(min(n, m)) 👉 Minimum of rows or columns 

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
private:
    bool isMaxInColumn(vector<vector<int>>& matrix, int number, int col) {
        for (int row = 0; row < matrix.size(); row++) {
            if (matrix[row][col] > number) {
                return false;
            }
        }
        return true;
    }

    int findColumn(vector<vector<int>>& matrix, int row) {
        // the the first col is our minCol
        int minCol = 0;
        // and the first val of that row:col is our minNumber
        int minNumber = matrix[row][minCol];

        for (int col = 0; col < matrix[row].size(); col++) {
                // if somewhere in entire columns
                // we got a number less that our minNumber
            if (matrix[row][col] < minNumber) {
                // update our minNumber
                minNumber = matrix[row][col];
                // update our minNumber
                minCol = col;
            }
        }

        return minCol;
    }

public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> luckyNumbers;

        for (int row = 0; row < matrix.size(); row++) {

            // Find col of the min elem in every row
            int minCol = findColumn(matrix, row);
            // extract the number
            int number = matrix[row][minCol];

            // check if this number also maximum in it's column
            if (isMaxInColumn(matrix, number, minCol)) {
                luckyNumbers.push_back(number);
            }
        }

        return luckyNumbers;
    }
};