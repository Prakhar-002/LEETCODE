//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 624

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arrays)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int maxDistance(vector<vector<int>>& arrays) {
            // Assign the minimum and maximum values from the first array
            int curMin = arrays[0].front();
            int curMax = arrays[0].back();

            // Track the maximum absolute difference found so far
            int maxDifference = 0;

            // Loop from 2nd array
            for (size_t i = 1; i < arrays.size(); i++) {
                  // Extract the current array
                  const vector<int>& arr = arrays[i];

                  // Take the max of all possibilities
                  maxDifference = max({
                        maxDifference,
                        // Diff between the highest value of the current array and curMin
                        arr.back() - curMin,
                        // Diff between curMax and the lowest value of the current array
                        curMax - arr.front()
                  });

                  // Update the current min and max
                  curMin = min(curMin, arr.front());  // Update curMin with the first element
                  curMax = max(curMax, arr.back());   // Update curMax with the last element
            }

            return maxDifference;
      }
};