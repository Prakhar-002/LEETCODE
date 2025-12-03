//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L4.1 Q1

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
            // Sort the array; minimum absolute differences will be between neighbors
            sort(arr.begin(), arr.end());

            int n = arr.size();
            int minDiff = INT_MAX;  // Track smallest difference

            // First pass: compute the minimum difference among adjacent elements
            for (int i = 1; i < n; ++i) {
                  minDiff = min(minDiff, arr[i] - arr[i - 1]);
            }

            // Second pass: collect all pairs having this minimum difference
            vector<vector<int>> res;
            for (int i = 1; i < n; ++i) {
                  if (arr[i] - arr[i - 1] == minDiff) {
                        res.push_back({arr[i - 1], arr[i]});
                  }
            }

            return res;
      }
};
