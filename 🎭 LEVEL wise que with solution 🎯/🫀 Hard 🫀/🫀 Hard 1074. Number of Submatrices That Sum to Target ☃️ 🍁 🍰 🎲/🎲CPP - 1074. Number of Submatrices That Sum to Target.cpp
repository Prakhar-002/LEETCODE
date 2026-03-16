//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1074

//? ⌚ Time complexity ➺ O(n^2 * m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m)

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
      int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
            int rows = matrix.size();        // m
            int cols = matrix[0].size();     // n

            // First take the cumulative sum row-wise
            for (int row = 0; row < rows; row++) {
                  for (int col = 1; col < cols; col++) {
                        matrix[row][col] += matrix[row][col - 1];
                  }
            }

            // Now, find the "No. of subarrays with sum k" in the downward direction
            int result = 0;

            for (int startCol = 0; startCol < cols; startCol++) {
                  for (int currCol = startCol; currCol < cols; currCol++) {

                        // We need to find all submatrices sum
                        // Now comes the concept of "No. of subarrays with sum k"
                        unordered_map<int, int> freqMap;
                        freqMap[0] = 1;    // base case: empty prefix
                        int cumulativeSum = 0;

                        // Go downwards row-wise
                        for (int row = 0; row < rows; row++) {

                              // Subtract left boundary if startCol > 0 to get column-range sum
                              cumulativeSum += matrix[row][currCol]
                                    - (startCol > 0 ? matrix[row][startCol - 1] : 0);

                              // If (cumulativeSum - target) was seen before,
                              // those many subarrays ending here have sum == target
                              if (freqMap.count(cumulativeSum - target)) {
                                    result += freqMap[cumulativeSum - target];
                              }

                              // Record current cumulative sum in map
                              freqMap[cumulativeSum]++;
                        }
                  }
            }

            return result;
      }
};