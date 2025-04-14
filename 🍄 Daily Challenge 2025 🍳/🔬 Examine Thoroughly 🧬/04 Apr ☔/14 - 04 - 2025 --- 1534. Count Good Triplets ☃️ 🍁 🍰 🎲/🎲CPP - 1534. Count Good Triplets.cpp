//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1534

//? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(arr)

//? 🧺 Space complexity ➺ O(1)

#include <stdlib.h>
#include <vector>
using namespace std;

class Solution {
public:
      int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
            int count = 0;

            // Iterate through all combinations of i, j, k where i < j < k
            for (int i = 0; i < arr.size() - 2; ++i) {
                  for (int j = i + 1; j < arr.size() - 1; ++j) {
                        for (int k = j + 1; k < arr.size(); ++k) {
                              int v = arr[i];
                              int u = arr[j];
                              int w = arr[k];

                              // Check the three conditions
                              if (abs(v - u) <= a &&
                                    abs(u - w) <= b &&
                                    abs(v - w) <= c) {
                                    count++;  // All conditions met, increment count
                              }
                        }
                  }
            }

            return count;  // Return total number of good triplets
      }
};
